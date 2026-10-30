#include<iostream>
using namespace std;
int main(){
	int num, power,result=1, i=1;
	cout<<"Enter any number";
	cin>>num;
	cout<<"Enter any power";
	cin>>power;
	while(i<=power)
	{result=num*result;
	i++;
	}
	cout<<"result is"<<result;
	return 0;
}
