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


void level_order_print(Node* root)
{  

    queue<Node*> q;  
    q.push(root);  

    while(!q.empty())
    {

        Node* f = q.front();  
        q.pop();  


        cout << f-> val << " ";  

        if(f-> left) q.push(f-> left);  
        if(f-> rigth) q.push (f-> rigth);  
    }
}   

void insert_in_BST(Node* &root, int val)
{
 
    if(root  == NULL)
    {
        root = new Node(val);  
    }

    if(root-> val > val)
    {
        root-> left = new Node(val);    
    }
    else 
    {
        insert_in_BST(root-> rigth, val);  
    }
}       


int main()
{
    int val; 
    cin >> val;     
    insert_in_BST(root, val);  
    insert_in_BST(root, l);                     
    level_order_print(root);            
    return  0;  
}