#include<iostream> 
#include<iomanip> 
using namespace std;
int main()
{
	long i,a1,a2,a3;
    a1=a2=1;
	cout<<setw(5)<<a1;
	cout<<setw(5)<<a2;
	for(i=3;i<=200;i++)
	{
		a3=a1+a2;
		cout<<setw(5)<<a3;
		a1=a2;
		a2=a3;
	}
	return 0; 
}
