 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    
list<int>my_list = {1,2,3,4,7,6,4,5,4,3,4,8} ;

my_list.remove(8); // joto 8 ache sob remove korbe
my_list.sort(); //chuto theke boro akare sajabe
//my_list.sort(greater<int>()); //boro theke chuto sajabe 
my_list.unique(); //duplicat val delet korbe
my_list.reverse(); // reverse korbe
for(int element : my_list) 
{

cout << element << " "  ;

}
cout<<endl;
cout << my_list.front() << endl ;
cout << my_list.back() << endl ;


     return 0;
 }