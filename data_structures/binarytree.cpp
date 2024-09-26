#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

int main(){

    Node* first_node = new Node(1);
    Node* second_node = new Node(2);
    Node* third_node = new Node(3);
    Node* fourth_node = new Node(4);

    first_node->left = second_node;
    first_node->left = third_node;
    second_node->left = fourth_node;
    
    /*
            1
           / \
          2   3
         /
        4 
    */

    return 0;
}