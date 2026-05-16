#include<bits/stdc++.h>             
using namespace std;        
class Node  
{
    public:  
    Node* next;  
    int val; 
    Node(int val)  
    {
        this->val = val;  
        this->next = NULL;  
    }           
};

void insert_at_position(Node* &head,int idx, int val)  
{
    Node* newNode = new Node(val);  
    Node* tmp = head;  
    for(int i =1; i < idx; i++)
    {
        tmp = tmp-> next next= new node;  
    }
}           

void print_linked_list(Node* head)  
{
    Node* tmp = head;  
    while(tmp != NULL)  
    {
        cout << tmp->val << endl;  
        tmp = tmp->next;

    }           
  
} 

int main()
{
     Node* head = new Node (10);  
     Node*a  = new Node (20);  
     Node* b  = new Node (30);  
     head-> next = a;  
     a-> next = b;   
     insert_at_position(head,2,100);      
     print_linked_list(head);        
    return  0;  


}