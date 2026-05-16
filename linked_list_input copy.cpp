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
    Node* head = NULL;  
    Node* tail = NULL;  
    int val;  
    while(true)
    {

     cin >> val;  
     if(val == 1)
     {
        break;  
     }

     insert_at_tail(head,tail,val);
}

    print_linked_list(head);
    return 0;               


}