#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**Լ���ĸ��� 
*���Ȿ����ֻ��Լ��������ö�ټ��ɣ�Ҳ�����ж����� 
*��չ������ʹ��Լ����������ͬʱ�������ɸ�������ϵ���ö�� 
*/

int numofdivice(int num){
	int ans=0;
	int i;
	for(i=1;i*i<num;++i){
		if(num%i==0)ans+=2;
	}
	if(i*i==num)++ans;
	return ans;
}

int main(){
	int N;cin>>N;
	int num;
	while(N--){
		cin>>num;
		cout<<numofdivice(num)<<endl;
	}

	return 0;
}

