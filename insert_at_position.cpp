 #include<bits/stdc++.h>
 using namespace std;

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next; 
    Node *prev;
    Node(int val)
    {
        this->val = val; 
        this->next = NULL; 
        this->prev = NULL; 
    }
};
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *temp=tail;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->prev;
    }
    
  cout<<endl;
}
void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;
    
}
int size(Node *head)
{
    Node *temp= head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
return count;
}
void insert_at_head(Node *&head,Node *&tail, int val)
{
Node *newNode= new Node(val);
if(head==NULL)
{
    head=newNode;
    tail=newNode;
    return;
}
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
 int main()
 {
    Node *head=new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
   // print_normal(head);
   // print_reverse(tail);

    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
       cout << "Invalid" << endl;
    }
    else if(pos==0)
    {
        insert_at_head(head,tail,val);
    }
    else if(pos==size(head))
    {
        insert_at_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }
    print_normal(head);
    print_reverse(tail);


     return 0;
 }