#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c,p;
	cin>>a>>b>>c;
	p=(1.0/2)*(a+b+c);
	cout<<fixed<<setprecision(1)<<sqrt(p*(p-a)*(p-b)*(p-c));
	return 0;
	
}
