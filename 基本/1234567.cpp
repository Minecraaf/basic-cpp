#include<iostream>
using namespace std;
int main()
{
	double p;
	int q,a,d,c,b;
	cin>>p;
	q=int(p*10);//ǿ��ת�� 
	a=q/1000;//ǧλ 
	b=q/100%10;//��λ 
	c=q/10%10;//ʮλ
	d=q%10;//��λ
	cout<<d<<'.'<<c<<b<<a<<endl;
	 return 0;
}
