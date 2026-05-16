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
       this-> val =  val;  
       this-> left;  
       this-> rigth;


    }

};


   int count_leafs_nodes(Node* root)
   {
       if(root == NULL)
         return 0; 
         if(root->left == NULL && root->rigth == NULL)
            return l;  
            int l  = count_leafs_nodes(root-> left);
            int r  = count_leafs_nodes(root-> rigth);
            return l+r;

   }
   






int main()
{
    Node* root  =  input_tree();
    cout << count_leafs(root);
    return  0;  

}