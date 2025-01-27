#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,4,5,6,7,8};
    vector<int> v2={44,55};
    //v.insert(v.begin()+2,66);
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v)
    cout<<x<<" ";
}