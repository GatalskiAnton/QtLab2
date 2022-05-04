#include "BSTree.h"
#include <iostream>

Node* BSTree::doInsert(Node* node, int x)
{
	if (node == nullptr)
		return new Node(x);
	if (x < node->key_)
	{
		node->left_ = doInsert(node->left_, x);
	}
	else if (x > node->key_)
	{
		node->right_ = doInsert(node->right_, x);
	}
	return node;
}

void BSTree::insert(int x)
{
	root = doInsert(root, x);
}

void BSTree::doTravers(Node* node)
{
	if (node == nullptr)
		return;
	doTravers(getRoot()->getLeft());

	doTravers(node->right_);
}

void BSTree::travers()
{
	doTravers(this->root);
}

Node* BSTree::getRoot()
{
	return root;
}

int Node::getKey()
{
	return key_;
}

Node* Node::getLeft()
{
	return left_;
}

Node* Node::getRight()
{
	return right_;
}
