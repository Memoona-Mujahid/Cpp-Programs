# include <iostream>
using namespace std;
int main ()
{
	int radius;
	int height;
	float volume;
	cout<<"enter the radius";
	cin>>radius;
	cout<<"enter height";
	cin>>height;
	const float pi=3.14;
	
	volume=pi*radius*radius*height;
	
	cout<<"the radius of cylindrical tank is"<<radius;
	return 0;
}

