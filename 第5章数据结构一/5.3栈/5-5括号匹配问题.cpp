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

<<<<<<< HEAD
//)(rttyy())sss)(
int main() {
    string str;
    while(cin>>str) {
        stack<int> brackets;
        string answer(str.size(),' ');
        for(int i=0; i<str.size(); i++) {
            if(str[i]==')') {
                if(!brackets.empty()) {
                    brackets.pop();
                } else {
                    answer[i]='?';
                }
            } else if(str[i]=='(') {
                brackets.push(i);
            }
        }
        while(!brackets.empty()){
            answer[brackets.top()]='$';
            brackets.pop();
        }
        cout<<str<<endl;
        cout<<answer<<endl;
    }
    return 0;
=======
	return 0;
>>>>>>> parent of 5a874f9... 5-4&5-5
}

