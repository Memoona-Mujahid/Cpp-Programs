#include<iostream>
using namespace std;
int main(){
	int num, f=1;
	cout<<"Enter any number";
	cin>>num;
	while(num>=1)
	{f=f*num;
	num--;
	}
	cout<<"factorial is"<<f;
	return 0;
}

