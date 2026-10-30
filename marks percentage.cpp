# include <iostream>
using namespace std;
int main ()
{
	float obtained_marks;
	int total_marks;
	float Percentage;
	cout<<"enter_obtained marks";
	cin>>obtained_marks;
	cout<<"enter_total marks";
	cin>>total_marks;
	 
	Percentage=(float(obtained_marks)/total_marks)*100;
	cout<<"Percentage ="<<Percentage;
	 
	 return 0;
	
}
