#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int> x={12,23,44};
    vector<int>v={2,4,6};
    //v=x;
    v.pop_back();
    for (int i = 0; i <v.size(); i++)
    {
      cout<<v[i]<<" ";
    }
    
    return 0;
}