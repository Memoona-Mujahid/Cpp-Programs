# include <iostream>
using namespace std;
int main ()
{
	int press;
	int enter;
	
	cout<<"Welcome to zong telecom" <<endl;
	cout<<"press 1 for call packages"<<endl;
	cout<<"press 2 for SMS packages"<<endl;
	cout<<"press 3 for internet packages"<<endl;
	cin>>press;
	
	if (press==1)
	{
		cout<<"we have two call packages"<<endl;
		cout<<"500 minutes for 500 rupees"<<endl;
		cout<<"1000 minutes for 1000 rupees"<<endl;
		
		cout<<"enter 1 for daily call packages"<<endl;
		cout<<"enter 2 for weekly call packages"<<endl;
		cout<<"enter 3 for monthly call packages"<<endl;
		cin>>enter;
		
		if (enter==1)
		{
			cout<<"you have successfully subscribed daily call packages";
      	}
	    else if (enter==2)
		{
			cout<<"you have successfully subscribed weekly call packages";
		}
		else if (enter==3)
		{
			cout<<"you have successfully subscribed monthly call packages";
		}
		else
		{
		cout<<"you have entered wrong number";
		}
	}
	else if (press==2)
	{
		cout<<"we have two SMS packages"<<endl;
		cout<<"1000 SMS for 10 rupees"<<endl;
		cout<<"5000 SMS for 50 rupees"<<endl;
		
		cout<<"enter 1 for daily SMS packages"<<endl;
		cout<<"enter 2 for weekly SMS packages"<<endl;
		cout<<"enter 3 for monthly SMS packages"<<endl;
		cin>>enter;
		
		if (enter==1)
		{
			cout<<"you have successfully subscribed daily SMS packages"; 
		}
		else if (enter==2)
		{
			cout<<"you have successfully subscribed weekly SMS packages";
		}
		else if (enter==3)
		{
			cout<<"you have successfully subscribed monthly SMS packages";
		}
		else
		{
			cout<<"you have entered wrong number";
		}
	}
	else if (press==3)
	{
		cout<<"we have two internet packages"<<endl;
		cout<<"1.5 mbs for 25 rupess"<<endl;
		cout<<"4 mbs for 60 rupees"<<endl;
		
		cout<<"enter 1 for daily internet packages"<<endl;
		cout<<"enter 2 for weekly internet packages"<<endl;
		cout<<"enter 3 for monthly internet packages"<<endl;
		cin>>enter;
		
		if (enter==1)
		{
			cout<<"you have successfully subscribed daily internet packages";
		}
		else if (enter==2)
		{
			cout<<"you have successfully subscribed weekly internet packages";
		}
		else if (enter==3)
		{
			cout<<"you have successfully subscribed monthly internet packages";
		}
		else
		{
			cout<<"you have entered wrong number";
		}
		
	}
	else
	{
		cout<<"You have pressed wrong number, please try again";
	}
	return 0;
}


