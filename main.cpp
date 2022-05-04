#include "BSTree.h"
#include "BSTreeWidget.h"
//#include "ArrBSTree.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    BSTree tree;
    tree.insert(15);
    tree.insert(7);
    tree.insert(17);
    tree.insert(9);
    tree.insert(8);
    tree.insert(10);
    tree.insert(5);
    tree.insert(3);
    tree.insert(20);
    tree.insert(4);
    tree.insert(2);

    BSTreeWidget tr(tree);

    tr.show();
    tr.resize(1000, 700);

    return a.exec();

}
