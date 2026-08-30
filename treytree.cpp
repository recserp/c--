#include <iostream>

class node{
    public:
    int data;
    node *left;
    node *right;
    node *mid;

    node(int key){
        data = key;
        left = nullptr;
        right = nullptr;
        mid = nullptr;
    }
};

int main(){
    node* node1 = new node(1);
    node* node2 = new node(2);
    node* node3 = new node(3);
    node* node4 = new node(4);
    node* node5 = new node(5);
    node* node6 = new node(6);
    node* node7 = new node(7);

    node1->left = node2;
    node1->mid = node3;
    node1->right = node4;
    node2->left = node5;
    node2->mid = node6;
    node2->right = node7;

    return 0;
}