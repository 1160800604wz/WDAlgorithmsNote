#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**���Լ�� 
*˼·��շת�����������ֱ��Whileѭ��ʵ�֣�����Ҫʹ�õݹ� 
*
*/

int GCD(int &a,int &b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
} 

int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<GCD(a,b)<<endl;
	}	

	return 0;
}

