#include <iostream>
#include <string>
using namespace std;
int main(){
int num1, num2;
cout<<"Enter any two numbers";
cin>>num1>>num2;
int a= num1 , b= num2;
while(b!=0){
	int temp= b;
	b= a%b;
	a= temp;
}cout<<"HCF of numbers is"<<a;;
return 0;

}

