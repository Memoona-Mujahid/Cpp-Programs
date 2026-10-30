# include <iostream>
using namespace std;
int main ()
{
	float original_price;
	int dis_amount;
	float dis_percentage;
	cout<<"enter original_price";
	cin>>original_price;
	cout<<"enter dis_amount";
	cin>>dis_amount;
	
	dis_percentage=(dis_amount/original_price)*100;
	cout<<"dis_percentage is"<<dis_percentage;
	 return 0;
	 
}
	
