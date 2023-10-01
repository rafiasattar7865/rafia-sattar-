#include<iostream>
void numbers(int num_1,int num_2);
using namespace std;
main(){
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
numbers(a,b);

}


void numbers(int num_1,int num_2)
{
if(num_1==num_2){
cout<<"true";}
else{
cout<<"false";}


}