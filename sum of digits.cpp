#include <iostream>
using namespace std;
int main()
{
	int number, sum=0, digit;
	
	cout<<"enter any number";
	cin>>number;
	
	while (number!=0)
	{
		digit= number%10;
		sum= sum+digit;
		number=number/10;
	}
	
	cout<<"sum="<<sum;
	
	return 0;
}
