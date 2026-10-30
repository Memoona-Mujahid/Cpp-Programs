#include <iostream>
#include <string>
using namespace std;
int main(){
	string password;
	Repeat:
		cout<<"enter password";
		cin>>password;
		if (password=="123")
		{
			cout<<"password is correct";
		}
		else
		{ goto Repeat;
		}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
