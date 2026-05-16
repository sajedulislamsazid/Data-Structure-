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

void insert_at_tail(Node* &tail, int val)  
{
    Node* newNode = new Node(val);  
    if(head == NULL) {
        head = newNode;
        return;
    }       
    newNode->next = tail->next;  
    tail->next = newNode;  
}           

void print_linked_list(Node* tail)  
{
    Node* tmp = tail->next;  
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
     insert_at_tail(b,100);      
     print_linked_list();        
    return  0;  


}