#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**�˼��˰�A^B��������������λ������ڿ����ݵĹ����н���ȡģ���� 
*������˼·���ڲ��϶�����ת��ָ����ͬʱ�������������Լ���ƽ�� 
*��������mod 1000 
*/

int FastExponentiation(int a,int b,int mod){
	//a^b�����ȡģmod
	int answer = 1;
	while(b!=0){
		//ת�����ƣ���ǰλΪ1��������� 
		if(b%2==1){
			answer *= a;
			answer %= mod;
		}
		b/=2;
		a*=a;//��Ϊ�������������޸����Ҫ��֮����ƽ�����Թ����� 
		a%=mod;
	} 
	return answer;
}

int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0)break;
		cout<<FastExponentiation(a,b,1000);
	}
	
	return 0;
}

