#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    //v.insert(v.begin()+3,5,100);
    v.insert(v.begin()+3,5);
   // v.insert( v.begin()+3, v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    vector<int> v2 = {100,1000} ;

 v.insert( v.begin()+3, v2.begin(),v2.end());
 for (int i = 0; i < v2.size();i++)
 {
    cout<<v2[i]<<" ";
 }
 
 
    
}