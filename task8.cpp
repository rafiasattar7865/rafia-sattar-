# include <iostream>
void pet (int h);
using namespace std;
main ()
{
int h;
cout<<"Holidays: ";
cin>>h;
pet(h);
}
void pet (int h)
{
int t;
int w_days;
int t1;
int hrs;
int mins;
w_days=365-h;
t=(w_days*63)+(h*127);
if (t<30000)
{
t1=30000-t;
hrs=t1/60;
mins=t1%60;
cout<<"Tom sleeps well"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes less for play";
}
if (t>30000)
{
t1=t-30000;
hrs=t1/60;
mins=t1%60;
cout<<"Tom will run away"<<endl;
cout<<hrs<<" hours and "<<mins<<" minutes for play";
}
}