#include <bits/stdc++.h>        
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
void insert_at_tail(Node* &head, Node* &tail, int val)  
{
    Node* newNode = new Node(val);  
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }       
    tail->next = newNode;  
    tail = newNode;  
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
Node* reverse_doubly_linked_list(Node* head)            
{
    Node* prev = NULL;  
    Node* curr = head;  
    while(curr != NULL)  
    {
        Node* nextNode = curr->next;  
        curr->next = prev;  
        prev = curr;  
        curr = nextNode;  
    }       
    return prev;  
}   

int main()
{
    Node* head = NULL;  
    Node* tail = NULL;  
    int val;  
    while(true)
    {
        cin >> val;  
        if(val == -1) break;  
        insert_at_tail(head, tail, val);  
    }           

    head = reverse_linked_list(head);  
    print_linked_list(head);  

}       