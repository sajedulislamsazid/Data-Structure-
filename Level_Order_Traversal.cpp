#include<bits/stdc++.h>  
using namespace std; 
class Node
{
  public:  
  int val;  
  Node* left;
  Node* rigth;  

  Node(int val) 
  {
    this-> val = val; 
    this-> left = NULL;  
    this-> rigth = NULL; 
  }


};

void  level_order(Node* root)
{
   queue<Node*> q; 
   q.push(root);  
   while(!q.empty())
   {
       Node* f = q.front();  
       q.pop();  
      
       cout << f->val << " ";
       if(f->left = NULL)
       q.push(f->left);  
       if(f->rigth = NULL)
       q.push(f->rigth);


   }
  




}






int main()
{
    return 0;
}