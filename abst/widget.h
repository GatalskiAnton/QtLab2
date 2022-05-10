#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include "abst.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget() {};

protected:
    void paintEvent(QPaintEvent* event);
private:
    ABST bst;
};
#endif // WIDGET_H
