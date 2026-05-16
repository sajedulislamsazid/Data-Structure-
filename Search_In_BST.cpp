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

Node* input_tree()
{
     int val;  
     cin >> val; 
     Node* root;  
     if(val == -1) root = NULL; 
     else root  =  new Node(val);  
     Queue<Node*> q;  

     while(!q.empty())
     {
           //1.bner korte hobe root  
           Node*p = q.front();  
           q.pop();  
           
           //2.oi node ke neye kaaaj korte hbe 
           int l , r; 
           cin  >>  l  >> r;  
           Node* my left * my rigth;  
           if(l == -1) my left = NULL;  
           else my left = new Node(l);  
           if(r == -1) my rigth = NULL;  
           else my rigth = new Node(r);
           
           p-> left = my left;  
           p-> rigth = my rigth;  

           //3.Children Push kora  

           if(p->left)
           q.push(p->left);
           if(p->rigth)
           q.push(p->rigth);           
        }

           return root;  
     }

   bool  search (Node* root, int val)
   {
    if(root-> val = val)
        return true;
    if(root-> val > val)
    {
        bool =  search(root-> left,val); 
        return l;
    }   

    else 
    {
         bool  r  =  search(root-> rigth, val);  
         return r;  
        
    }
    
   }





int main()
{
     Node* root = input_tree();  
     int val;  
     cin >> val;  
     if(search(root,val))
     cout << "Not Found\n";  
     else  
     cout <<"Not Found\n"; 
     return  0;  
     
}

