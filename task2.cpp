#include<iostream>
void true_false(string a);
using namespace std;
main(){
string a;
cout<<"Enter 'true' or 'false':";
cin>>a;
true_false(a);
}
void true_false(string a)
{
if(a=="true")
cout<<"false";
if(a=="false")
cout<<"true";
}

