#include<iostream> 
#include<conio.h>
using namespace std;
int main () {
	char marital;
	char gender;
	int age;
	cout<<"Are you married? (Y/N):"<<endl;
	cin>>marital;
	cout<<"enter gender (M/F):"<<endl;
	cin>>gender;
	cout<<"enter age:"<<endl;
	cin>>age;
	
	if (marital=='Y' || marital=='y')
	{
	cout<< "insurance is provided"<<endl;
	}
	else if ((gender=='M' || gender=='m') && age > 25)
	{	
	cout<<"insurance is provided"<<endl;;
	}
	else if ((gender=='W' || gender=='w') && age > 30)
	{	
	cout<<"insurance is provided"<<endl;
	}
	else {
		cout<<"insurance isn't available"<<endl;
	}
	getch();
	return 0;
}
