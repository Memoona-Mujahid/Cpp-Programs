# include <iostream>
using namespace std;
int main ()
{
	int sum, i=1, result=1;
	
	while (i<=55)
	{
		cout<<i<<endl;
		sum=i+result;
		i=result;
		result=sum;
	}
	
	cout<<"answer is"<<result;
	return 0;
}
