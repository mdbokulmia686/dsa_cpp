 #include<bits/stdc++.h>
 using namespace std;
 class Node
 {
     public:
       int val;
       Node* left;
       Node* right;
     Node(int val)
     {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
     }
 };
 int main()
 {
    Node* root= new Node(10);
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);
    Node* f= new Node(60);
    Node* g= new Node(70);
    Node* h= new Node(80);
    Node* i= new Node(90);
    Node* j= new Node(100);
    
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;
    

     return 0;
 }