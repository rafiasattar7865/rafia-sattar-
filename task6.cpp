#include<iostream>
void time(int num_1, int num_2);
using namespace std;
main ()
{
int b;
int a;
cout<<"Enter the number of hours: ";
cin>>a;
cout<<"Enter the number of minutes: ";
cin>>b;
time(a,b);
}
void time(int num_1, int num_2)
{
int convert;
convert=num_1*60;
if(convert<num_2)
cout<<num_2;
if (convert>num_2)
cout<<num_1;
}