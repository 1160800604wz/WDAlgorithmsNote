#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
/**����ƥ�����⣬��λ����ƥ����������� 
*˼·��������ջ����¼λ�úţ�ͬʱƥ�����ջ����ƥ�����¼���� 
*
*/
int main(){
	string s;cin>>s;
	int n=s.size();
	//��̬���鲻��ֱ����������Թ̶�һ��string 
	string c(n,' ');
	stack<char> sta;
	for(int i=0;i<n;++i){
		char temp=s[i];
		if(temp=='('){
			sta.push(i);
			continue;
		}
		else if(temp==')'){
			if(sta.empty()){
				c[i]='?';
			}
			else{
				sta.pop();
			}
		}
	}
	while(!sta.empty()){
		c[sta.top()]='$';
		sta.pop();
	}
	cout<<s<<endl;
	cout<<c<<endl;

	return 0;
}

