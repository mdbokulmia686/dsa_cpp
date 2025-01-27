
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

   list<int>mylist={1,2,3,4} ;
   mylist.push_back(5);
   mylist.push_front(0);
   //mylist.pop_back();//piconer val delet
   // mylist.pop_front() ;// samner val delet
   mylist.erase(next(mylist.begin(),2)) ; //kono valu muchar jonno
   mylist.insert(next(mylist.begin(),2),25);
   //replace->Syntax:replace(my_list.begin(),my_list.end(),target_val,change_val)
   replace(mylist.begin(),mylist.end(),3,20);
   
   for (auto it:mylist)
   {
   cout<<it<<" ";
   }
   cout<<endl;
   //find->Syntax : find(my_list.begin() , my_list.end() , target_value ) 
   auto it=find(mylist.begin(),mylist.end(),6);
   if(it!=mylist.end())
   {
    cout<<"find the value: "<<*it<<endl;
   }
   else{
    cout<<"Not found"<<endl;
   }
   
     
 }