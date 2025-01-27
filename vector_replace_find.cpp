#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={2,4,2,5,6,2,7,8,2};
    // replace(v.begin(),v.end()-1,2,20);
    // for(int x:v)
    // cout<<x<<" ";
     vector<int> v={2,4,2,3,5,6,2,7,8,2};
     auto it=find(v.begin(),v.end(),3);
    // cout<<*it;
    if(it==v.end())cout<<"not found";
    else 
    cout<<"found";
    return 0;
}