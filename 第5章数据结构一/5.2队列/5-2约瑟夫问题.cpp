#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
/**Լɪ������ 
*˼·��ѭ������ʵ�֣�����ʹ����ͨ����ģ��ʵ��ѭ�����У����׳��Ӻ�ѹ���β�� 
*
*/
int main(){
	int n,p,m;
	queue<int> children;
	//���������ⶨ��ṹ��Ҫע������ÿһ��ʱ����ǳ�ʼ����״̬ 
	while(cin>>n>>p>>m){
		if(n==0&&p==0&&m==0)break;
		//�����������
		for(int i=0;i<n;++i){
			//Tips:��-1����+1������ֲ�[1,n] 
			children.push((p+i-1)%n+1);
		} 
		//��ʼ��������m����/�����
		int count=1;
		while(children.size()!=1){
			if(count!=m){
				children.push(children.front());
				children.pop();
				++count;
			}
			else{
				cout<<children.front()<<",";
				children.pop();
				count=1;
			}	
		}
		cout<<children.front()<<endl;
		children.pop();
	}

	return 0;
}

