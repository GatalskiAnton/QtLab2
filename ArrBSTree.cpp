#include "ArrBSTree.h"


void ArrBSTree::insert(int key,int index)
{
    if (index > size - 1) {
        resize(index - size + 1);
        Node node(key, 1);
        tree_[index] = node;
    }
    else if (tree_[index].getFill() == false) {
        Node leaf(key, 1);
        tree_[index] = leaf;
    }
    else {
        Node temp(key, 1);
        if (temp > tree_[index])
            insert(key, 2 * index + 2);
        else if (temp < tree_[index])
            insert(key, 2 * index + 1);
    }
}

void ArrBSTree::travers()
{
	doTravers(0);
}

void ArrBSTree::doTravers(int index)
{
	if (index > size)
		return
	doTravers(2 * index + 1);

	doTravers(2 * index + 2);
}

void ArrBSTree::resize(int new_size)
{
	Node* new_tree = new Node[new_size];
	for (int i = 0; i < size; i++)
		new_tree[i] = tree_[i];
	delete[] tree_;
	tree_ = new_tree;
	size = new_size;
}

bool Node::operator<(Node node)
{
    return data_ < node.data_; 
}

bool Node::operator>(Node node)
{
     return data_ > node.data_; 
}
