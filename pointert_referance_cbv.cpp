 #include<bits/stdc++.h>
 using namespace std;
 void fun(int *p)
 {
    p=NULL;
 }
 int main()
 {
    int a=10;
    int *p=&a;
    fun(p);
    cout<<*p;

     return 0;
 }