# include <iostream>
void flower_Shop(int red_Rose,int white_Rose,int tulip);
using namespace std;
main ()
{
int rose,white_rose,tulip;
cout<<"Red Rose: ";
cin>>rose;
cout<<"White Rose: ";
cin>>white_rose;
cout<<"Tulips: ";
cin>>tulip;
flower_Shop(rose,white_rose,tulip);
}
void flower_Shop(int rose,int white_rose,int tulip)
{
float rose_price,white_price,tulip_price,total_price,discount,final_price;
rose_price=2.00*rose;
white_price=4.10*white_rose;
tulip_price=2.50*tulip;
total_price=rose_price+white_price+tulip_price;
if(total_price>200)
{
discount=(total_price/100)*20;
final_price=total_price-discount;
cout<<"Original Price: $"<<total_price<<endl;
cout<<"Price after Discount: $"<<final_price;
}
if (total_price<=200)
{
cout<<"Original Price: $"<<total_price<<endl;
cout<<"No discount applied.";
}


}