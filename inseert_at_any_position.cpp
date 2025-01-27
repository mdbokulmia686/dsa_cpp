 #include<bits/stdc++.h>
 using namespace std;
 class Node
  {
  public:
  int val;
  Node* next;
  Node(int val)
  {
     this->val=val;
     this->next=NULL;
  }
  };
  void insert_at_tail(Node *&head,int val)
  {
   Node *newNode= new Node(val);
   if(head==NULL)
   {
      head=newNode;
      return;
   }
   Node *temp=head;
   while(temp->next!= NULL)
    { 
      temp=temp->next;
    }
    temp->next=newNode;


  }
  void printlist(Node *head)
  {
   Node *temp = head;
   while(temp!=NULL)
   {
      cout<<temp->val<<" ";
      temp=temp->next;
   }
   cout<<endl;
  }
  void insert_at_position(Node *head, int pos, int val)
  {
     Node *newNode= new Node(val);
     Node *temp=head;
     for (int i = 0; i <= pos-1; i++)
     {
       temp=temp->next;
     }
     newNode->next=temp->next;
     temp->next=newNode;
     
  }
 int main()
 {
    Node *head=NULL;
    insert_at_tail(head,10);
    insert_at_tail(head,11);
    insert_at_tail(head,13);
    insert_at_tail(head,14);
    printlist(head);

    int pos,val;
    cin>>pos>>val;
    insert_at_position(head,pos,val);
    printlist(head);
    return 0;
 }