# include <iostream>
using namespace std;
int main ()
{
	int energy;
	int aid;
	int shot;
	cout<<"enter the energy";
	cin>>energy;
	cout<<"enter the aid (1 for yes and 0 for no)";
	cin>>aid;
	cout<<"enter the shot (1 for headshot and 0 for normal shot)";
	cin>>shot;
	
	if (energy==100) 
	{
		cout<<"energy is full";
		
	}
	else if (energy==50)
	{
		cout<<"energy is half";
		
		if (aid==1)
		{
			cout<<"aid is provided";
		}
		else
		{
			cout<<"aid is not provided";
		}
	}
	else
	{
		cout<<"energy is low";
		
		if (aid==1)
		{
			cout<<"aid is provided";
		}
		else
		{
			cout<<"aid is not provided";
		}
	}
		
	if (shot==1)	
	{
		cout<<"player is dead"; 
	}
	else
	{
		cout<<"player is not dead";
	}
	return 0;
	
	
}

