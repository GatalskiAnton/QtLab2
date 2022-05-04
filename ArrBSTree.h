#pragma once

struct Node
{
private:
	int data_;
	bool fill_ = 0;
public:
	Node(int data,bool fill):data_(data),fill_(fill) {};
	Node() {};
	bool getFill() { return fill_; };
	bool operator < (Node node);
	bool operator > (Node node);
};

class ArrBSTree
{
public:
	void insert(int key,int index);
	void travers();
	ArrBSTree(){};
private:
	void doTravers(int index);
	int size;
	void resize(int new_size);
	Node* tree_;
};

