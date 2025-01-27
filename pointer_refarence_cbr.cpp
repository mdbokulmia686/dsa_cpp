 #include<bits/stdc++.h>
 using namespace std;
 //void fun(int *p) //call by value
 void fun(int *&p)//call by referance
 {
    p=NULL;
 }
 int main()
 {
    int a=10;
    int *p=&a;
fun(p);
if(p==NULL)
{
cout<<"Pointer pointing to NULL ";
}
else
{
    cout<<*p<<endl;
}

     return 0;
 }