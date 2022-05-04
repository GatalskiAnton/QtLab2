#include "BSTreeWidget.h"

void BSTreeWidget::drawNode( int x, int y, Node* node, QPainter& painter)
{
     if (node == nullptr)
        return;
     else
     {
         painter.drawEllipse(x - radius / 2, y, radius, radius);
         painter.drawText(x - 16 / 2, y + radius / 2 + 16 / 2, QString::number(node->key_));
     }
    if (node->left_ != nullptr) {
        painter.drawLine(x - radius / 2, y + radius / 2, x - 0.75 * radius - radius, y + 2 * radius);
        drawNode(x - 1.75 * radius , y + 2 * radius, node->left_, painter);
    }
    if (node->right_ != nullptr) {
        painter.drawLine(x +  radius / 2, y + radius / 2, x + 1.75 * radius , y + 2 * radius);
        drawNode(x + 1.75 * radius , y + 2 * radius, node->right_, painter);
    }
}

void BSTreeWidget::paintEvent(QPaintEvent* event)
{
    QRect table = this->rect();
    QPainter painter(this);
    QPen pen(Qt::black, 3);
    QBrush brush(Qt::black);
    painter.setPen(pen);
    int x = table.width() / 2;
    painter.setFont(QFont("times",16));
   
    this->drawNode(x, radius, tree_.getRoot(), painter);
}

