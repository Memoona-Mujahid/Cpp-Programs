# include <iostream>
using namespace std;
int main ()
{
 float units,rate,tax,bill;
 
 cout<<"enter units";
 cin>>units;
 if (units <200)
 {
    rate=15;
	tax=0.1;
 }
 else if (units>=200&&units<300)
 {
 	rate=20;
	tax=0.15;
 }
 else if (units>=300&&units<=500)
 {
 	rate=35;
	 tax==0.25;
 }
 else if (units>500)
 {
 	rate=50;
	 tax==35;
 }
 bill=units*rate;
 tax=bill*tax;
 bill=bill+tax;
 cout<<"total bill is"<< bill <<endl;
 return 0;
}
