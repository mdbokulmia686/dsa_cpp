 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }
    int val;
    cin>>val;
    bool found=false;
    int l=0,r=n-1;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==val)
        {
            found=true;
            break;
        }
        else if(a[mid]>val)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(found)
    {
    cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    
    
    

    

     return 0;
 }