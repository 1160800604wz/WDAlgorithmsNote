#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**A Knight's Journey
*˼·�� ��ʱ����Ϊ״̬���һ���֣�����������չ 
*ͬʱ����չ�������޳��ظ��㣬��������ܹ��ﵽstep==p*q��˵�����Ա����������̣������� 
*/



#define MAXN 30
int p,q;
bool visited[MAXN][MAXN]={0};

int direction[8][2]={
{-1,-2},{1,-2},{-2,-1},{2,-1},{-2,1},{2,1},{-1,2},{1,2}
};

bool DFS(const int &x,const int &y,const int &step,const string &ans){
	if(p*q==step){
		cout<<ans<<endl<<endl;
		return true;
	} else{
		for(int i=0;i<8;++i){
			int x_n=x+direction[i][0];
			int y_n=y+direction[i][1];
			char col = y_n + 'A';
			char row = x_n + '1';
			//���Խ�磬�򲻲�������
			if(x_n<0||x_n>=p||y_n<0||y_n>=q||visited[x_n][y_n]) continue;
			//��Խ����δ���ʹ�������������������
			visited[x_n][y_n]=true;
			//�˳�����
			if(DFS(x_n,y_n,step+1,ans+col+row)) {
				return true;
			}
			
			//�ڽ�����һ���ھ�ʱ���õ�ȡ�����ʣ���Ȳ���أ�
			visited[x_n][y_n]=false; 
		}
	}
	return false;
}

int main(){
	int n;cin>>n;
	int casenum=0;
	while(n--){
		cin>>p>>q;
		cout<<"Scenario #"<<++casenum<<":"<<endl;
		visited[0][0]=true;
		if(!DFS(0,0,1,"A1")){
			cout<<"impossible"<<endl<<endl;
		}
	}

	return 0;
}

