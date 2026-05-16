#include<bits/stdc++.h>  
using namespace std;
class Node
{
    public:  
    int val; 
    Node* left;  
    Node* rigth;  

    Node(int val)
    this-> val = val;  
    this-> left = NULL;  
    this-> rigth = NULL; 
};

void input tree()
{
    int val;  
    cin >> val;  

    Node* root;
   if(val == -1) root = NULL;
   else root = new Node(val);
    queue<Node*> q;  
    q.push(root);  
    if(root !=NULL) q.push(root);

    while(!q.empty())
    {
     
         Node* f = q.front();  
         q.pop();  

         cout << f-> val;  
         
         if(f->left)
         q.push(f->left);  
         if(f->rigth)
         q.push(f->rigth);  

    }


}



int main()
{

    Node* root = input_tree();  
    levelorder(root);





}