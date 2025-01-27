#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,4,5,6,7,8};
    //v.erase(v.begin()+2);
   // v.erase(v.begin()+1,v.begin()+5);
   v.erase(v.begin()+1,v.end()-1);
    for(int x:v)
    cout<<x<<" ";
}