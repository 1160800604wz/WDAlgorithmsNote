#include<queue>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**Catch That Cow
*˼·�������ʱ�������״̬�����⣬�Կ���ͨ����ʱ����Ϊ״̬��һ���� 
*��������״̬��ʹ�ÿ�������������������ȴﵽĿ�ĵ��ʱ�䣬��Ϊ���ʱ�� 
*/

struct Status{
	//�������ʱ���״̬
	int n;
	int T;
	Status(int n,int t):n(n),T(t){} ;
};
#define MAXN 100000
//���ʼ��������bool��Ĭ��ȫ��ֵfalse 
bool visited[MAXN]={0};


int BFS(const int &n,const int &k){
	//��BFSʱ����Ӽ��޸�visit�����޳�����ͬ�ڵ�ͬʱ��ӣ���Ȼ���ⲻ���ܣ�
	//�������У�ʹ���˳����޸�visited����������Ϊ������ 
	queue<Status> q;
	q.push(Status(n,0));
	while(!q.empty()){
		//���зǿգ������һ��������֮
		Status curr=q.front();
//		cout<<curr.n<<" "<<curr.T<<endl;
		visited[curr.n]=true;
		if(curr.n==k)return curr.T;
		
		//���ӣ�ͬʱ����һ������״̬���
		q.pop();
		for(int i=0;i<3;++i){
			Status next(curr.n,curr.T+1);
			switch(i){
				case 1:++next.n;break;
				case 2:--next.n;break;
				case 0:next.n*=2;break;
			}
			if(next.n<0||next.n>MAXN||visited[next.n])continue;
			q.push(next);
		} 
	}
	
	return -1;
}

int main(){
	int n,k;cin>>n>>k;
	cout<<BFS(n,k);
	return 0;
}

