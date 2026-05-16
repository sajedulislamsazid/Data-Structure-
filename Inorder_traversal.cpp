#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    this->val = val;    
    this->left = NULL;
    this->rigth = NULL;


void inorder(Node  *root)
{
      if(root == NULL)
      {
          return;   

      }
        
      inorder(root->left); // left  
      inorder(root->val); // root 
      inorder(root->rigth);  // rigth
}

};

int main()
{

    Node *root = new Node(10);  
    Node *a = new Node(20); 
    Node *b = new Node(30);     
    Node *c = new Node(40);     
    Node *d = new Node(50);     
    Node *e = new Node(60);     


    root->left = a;     
    root->rigth = b;        
    a->left = c;            
    b->left = d;        
    b->rigth = e;   

    inorder(root);      

    return 0;



}
