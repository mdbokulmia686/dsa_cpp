 #include<bits/stdc++.h>
 using namespace std;
 class node
 {
 public:
 int val;
 node* next;
 };
 int main()
 {
   node a,b;
   a.val=10;
   b.val=30;
   a.next=&b;
   b.next=NULL;
   cout<<a.val<<endl;
   cout<<b.val<<endl;
   cout<<(*a.next).val<<endl;
   cout<<a.next->val<<endl;

     return 0;
 }
// #include<bits/stdc++.h>
// using namespace std;
// class note
// {
//   public:
//   int val;
//   note *next;

// };
// int main()
// {
//   note a,b;
//   a.val=10;
//   b.val=20;
//   a.next=&b;
//   b.next=NULL;
//   cout<<a.val<<endl;
//   cout<<b.val<<endl;
//   cout<<(*a.next).val<<endl;
//   cout<<a.next->val<<endl;
//   return 0;
// }
