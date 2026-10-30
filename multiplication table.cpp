#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number,count=1;
	cout<<"enter any number";
	cin>>number;
	do {
		cout<<number<<"*"<<count<<"="<<number*count<<endl;
		count++;
	}
	while (count<=10);
	return 0;
}
