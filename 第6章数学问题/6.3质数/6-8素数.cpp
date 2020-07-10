#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/**���� 
*˼·��ʹ������ɸ�� 
*���弴�����޳������ı��� 
*/

const int MAXN=10001;
//���ʼ������ȫ����ʼ��Ϊfalse 
bool isPrime[MAXN];
vector<int> Prime;

void initial(){
	fill_n(isPrime,MAXN,true);
	isPrime[0]=false; 
	isPrime[1]=false; 
	for(int i=2;i<MAXN;++i){
		if(!isPrime[i])continue;
		Prime.push_back(i);
		for(int j=i*i;j<MAXN;j+=i){
			isPrime[j]=false;
		}
	}
	return ;
}

int main(){
	initial();
	int n;
	while(cin>>n){
		int count=0;
		for(int i=0;i<Prime.size()&&Prime[i]<n;++i){
			if(Prime[i]%10==1){
				++count;
				cout<<Prime[i]<<" ";
			}
		}
		if(count==0)cout<<"-1";
		cout<<endl;
	} 

	return 0;
}

