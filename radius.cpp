#include <iostream>
using namespace std;
int main()
{ float radius;
float area;
float circumferrence;
const float PI=3.14159;

cout<<"Enter radius";
cin>>radius;

area=PI*radius*radius;
circumferrence=2*PI*radius;

cout<<"area is";
cout<<area<<endl;

cout<<"circumferrence is";
cout<<circumferrence;

return 0;
}
