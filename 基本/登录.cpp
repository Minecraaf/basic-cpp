#include<iostream>
using namespace std;
int main(){
	const int USER=201701,PSW=135709;
	int user,psw;
	cin>>user>>psw;
	if(user==USER)
	{
		if(psw==PSW)
		{
		cout<<"�װ���С���ѻ�ӭ��";	
		}
		else{
			cout<<"�������";
		}
	}
	else{
			cout<<"�û�������"; 
		}
    return 0;	
}
