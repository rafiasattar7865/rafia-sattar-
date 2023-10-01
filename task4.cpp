#include<iostream>
void check_Speed(int speed);
using namespace std;
main ()
{
int s;
cout<<"Speed: ";
cin>>s;
check_Speed(s);
}
void check_Speed(int speed)
{
if(speed>100)
cout<<"Halt... YOU WILL BE CHALLENGED!!!";
if(speed<=100)
cout<<"Perfect! You're going good.";
}