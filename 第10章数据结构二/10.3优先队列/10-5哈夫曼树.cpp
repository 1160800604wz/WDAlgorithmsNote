#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
/**����������ʹ�����ȶ��г�ȡ�����й��죩 
*��������У������м����Ȩֵ�ͣ���Ϊ�˹��������Ĵ�Ȩ·���� 
*priority_queue<int,vector<int>,greater<int>>����С���ѣ�С����ǰ�� 
*/
int main(){
	int n,x;
	int result=0;
	int a,b;
	while(cin>>n){
		priority_queue<int,vector<int>,greater<int> > q;
		result=0;
		while(n--){
			cin>>x;
			q.push(x);
		}
		while(q.size()>1){
			a = q.top();
			q.pop();
			b = q.top();
			q.pop();
			result+=a+b;
			q.push(a+b);
		}
		cout<<result<<endl;
		
	}

	return 0;
}

