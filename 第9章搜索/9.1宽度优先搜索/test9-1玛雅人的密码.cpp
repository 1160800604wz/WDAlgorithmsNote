#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
#include<set>
using namespace std;
/**�����˵����� 
*˼·�������ƶ�����T��Ϊ״̬��һ���֣�����ͨ���ж��Ƿ�����Ӵ�����Ϊ��ֹ���� 
*
*/

struct Status{
	string s;
	int T;
	Status(string s,int T):s(s),T(T){};
};

string shiftString(string &s,const int &i){
	char temp=s[i];
	s[i]=s[i+1];
	s[i+1]=temp;
	return s;
}

int BFS(const string &s,const int &N){
	queue<Status> q;
	set<string> v;//����ȥ�� 
	q.push(Status(s,0));
	while(!q.empty()){
		Status curr=q.front();
		v.insert(curr.s);
//		cout<<curr.s<<" "<<curr.T<<endl;
		if(curr.s.find("2012")!=string::npos){
			return curr.T;
		}
		
		q.pop();
		for(int i=0;i<N-1;++i){
			Status next(curr.s,curr.T+1);
			if(v.find(shiftString(next.s,i))==v.end()){
				q.push(next);
				v.insert(next.s);
			}
			else
				continue;
		}
	}
	return -1;
}




int main(){
	//����ʹ��string���룬�����޹�
	int N;cin>>N;
	string s;cin>>s;
	cout<<BFS(s,N);

	return 0;
}

