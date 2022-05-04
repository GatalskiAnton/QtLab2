#pragma once 

static struct Node
{
    int key_;
    Node* left_ = nullptr;
    Node* right_ = nullptr;
    int getKey();
    Node* getLeft();
    Node* getRight();
    Node(int key) : key_(key) {};
};

class BSTree
{  
private:
    Node* root = nullptr;
    Node* doInsert(Node* node, int x);
    void doTravers(Node* node);
public:
    void insert(int x);
    void travers();
    Node* getRoot();
    BSTree() {};
};