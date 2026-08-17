#include<iostream>
using namespace std;
int main()
{
 float width,height,area,total,price;
 cout<<"enter tile width  : "<<endl;
 cin>>width;
 cout<<"you enter tile width is :  "<<width<<endl;
  cout<<"enter tile height  : "<<endl;
 cin>>height;
 cout<<"you enter tile height is :  "<<height<<endl;
 area=width*height;
 cout<<"area of tile is  : "<<area<<endl;
 cout<<"enter total tile price per square foot"<<endl;
 cin>>price;
 total=area*price;
 cout<<" cost of the tile is : "<<total;
 return 0;
}
