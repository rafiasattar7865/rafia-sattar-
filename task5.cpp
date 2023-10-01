#include<iostream>
void bonus(int num_1,int num_2);
using namespace std;
main ()
{
int a;
int b;

cout<<"Enter your position: ";
cin>>a;
cout<<"Enter your friend's position: ";
cin>>b;
bonus (a,b);
}
void bonus(int num_1,int num_2)
{
if(num_2-num_1>6)
cout<<"false";
if(num_2-num_1<=6)
cout<<"true";
}