#pragma once

#include <QWidget>
#include <QPainter>
#include "BSTree.h"

class BSTreeWidget : public QWidget
{
	Q_OBJECT;
public:
	BSTreeWidget(BSTree tree) : tree_(tree) {};
	~BSTreeWidget() {};
protected:
	void drawNode(int x, int y, Node* node, QPainter& painter);
	void paintEvent(QPaintEvent* event);
private:
	BSTree tree_;
	int radius = 60;
};

