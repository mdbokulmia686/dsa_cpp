 #include<bits/stdc++.h>
 using namespace std;
 class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void short_singly_linklist(Node *&head,Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
         head=newNode;
         tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_linklist(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl;
}
 int main()
 {
      Node *head = NULL;
      Node *tail = NULL;
    int val;
    while(true)
    {   
        cin>>val;
        if(val==-1)
        break;
        short_singly_linklist(head,tail,val);
    }
    for (Node *i = head; i ->next!=NULL; i=i->next)
    {
        for(Node *j=i->next;j->next!=NULL;j=j->next)
        {
            if(i->val < j->val)
            {
                 swap(i->val, j->val);
            }
        }
    }
    
        print_linklist(head);
        
     return 0;
 }