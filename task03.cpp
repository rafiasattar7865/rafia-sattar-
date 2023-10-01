#include<iostream>
void Pakistan(float a,float b);
void Ireland(float a,float b);
void India(float a,float b);
void England(float a,float b);
void Canada(float a,float b);
using namespace std;
main(){
float num1,num2;
string name;
cout<<"Enter the country's name: ";
cin>>name;
cout<<"Enter the ticket price in dollars: $";
cin>>num1;
if(name=="Pakistan")
Pakistan(num1,num2);
else if(name=="Ireland")
Ireland(num1,num2);
else if(name=="India")
India(num1,num2);
else if(name=="England")
England(num1,num2);
else
Canada(num1,num1);

}
void Pakistan(float a,float b)
{
b=a-a*0.05;
cout<<"Final ticket price after discount: $"<<b;
}
void Ireland(float a,float b)
{
b=a-a*0.1;
cout<<"Final ticket price after discount: $"<<b;
}
void India(float a,float b)
{
b=a-a*0.2;
cout<<"Final ticket price after discount: $"<<b;
}
void England(float a,float b)
{
b=a-a*0.3;
cout<<"Final ticket price after discount: $"<<b;
}
void Canada(float a,float b)
{
b=a-a*0.45;
cout<<"Final ticket price after discount: $"<<b;
}