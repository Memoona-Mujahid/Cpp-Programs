#include <iostream>
using namespace std;
int main () {
int units;
int rate;
cout<<"Enter units";
cin>> units;
if(units<200)
{cout<<"rate is 15";
}
else if(units ==200-300){
	cout<<"rate is 20";
}
else if(units==300-500){
	cout<<"rate is 35";
}
else if(units>500){
	cout<<"rate is 50";
}


int tax;
int bill;
cout<<"Enter tax";
cin>>tax;
cout<<((units*rate)+tax);
cout<<"Total bill";
return 0;
}

