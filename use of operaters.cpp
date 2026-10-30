#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter x: ";
    cin>>x;

    x += 25;
    cout<<"After x += 25: "<<x<<endl;

    x -= 30;
    cout<<"After x -= 30: "<<x<<endl;

    x *= 25;
    cout<<"After x *= 25: "<<x<<endl;

    x /= 30;
    cout<<"After x /= 30: "<<x<<endl;

    x %= 25;
    cout<<"After x %= 25: "<<x<<endl;

    return 0;
}
