 #include<bits/stdc++.h>
 using namespace std;

  class myQueue
  {
    public:
    list<int>l;
   
    void push(int val)
    {
         l.push_back(val);
    }
    void  pop()
    {
       l.pop_front();
    }
    int front()
    {
       return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
      l.empty();
    }

  };
 int main()
 {
   myQueue q;
//    q.push(10);
//    q.push(20);
//    q.push(30);
//    cout<<q.front()<<endl;
//    q.pop();
//    cout<<q.front()<<endl;
//    q.pop();
//    cout<<q.front()<<endl;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
   int x;
   cin>>x;
   q.push(x);
}
//  cout << q.size() << endl ; 
//  cout << q.empty() << endl ;
while(!q.empty())
{
    cout<<q.front()<<endl;
    q.pop();
}


     return 0;
 }