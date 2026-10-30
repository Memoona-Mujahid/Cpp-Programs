# include <iostream>
using namespace std;
int main ()
{
   float percentage;
   int disciplinary_record;
   int family_income;
   cout<<"enter percentage";
   cin>>percentage;
   cout<<"enter family_income (per month)";
   cin>>family_income;
   cout<<"enter disciplinary_record (1 for yes || 0 for no)";
   cin>>disciplinary_record;
   
   if(percentage<0, percentage>100)
   {
   	cout<<"invalid";
   }
   	
   	else if(disciplinary_record==1)
   	{
   		cout<<"not eligible";
	   }
   
   if(percentage>=85 || family_income<50000)
   {
   	cout<<"full scholarship";
   }
   else if (percentage>=85 || family_income>=50000)
   {
   	cout<<"half scholarship";
   }
   else
   {
   	cout<<"no scholarship";
   }
	
	return 0;
}

