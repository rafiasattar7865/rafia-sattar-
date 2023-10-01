# include <iostream>
void tpChecker(int people,int tp);
using namespace std;
main ()
{
int people;
int tp;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>tp;
tpChecker(people,tp);
}
void tpChecker(int people,int tp)
{
int sheet = tp*500;
int upday = 57*people;
int t_usage=upday*14;
int avail = sheet/upday;
if (sheet>t_usage)
cout<<"Your TP will last "<<avail<<" days, no need to panic!";
if (sheet<t_usage)
cout<<"Your TP will only last "<<avail<<" days, buy more!";
}