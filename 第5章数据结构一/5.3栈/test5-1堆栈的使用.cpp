#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
using namespace std;
/**��ջ��ʹ�� 
*������Ҫȥִ��ģ��Ķ�ջ�Ĳ��� 
*
*/
int main(){
	stack<int> s;
	int n;
	char c;
	while(cin>>n){
			while(n--){
			cin>>c;
			switch(c){
			
				case 'P':{
					int num;
					cin>>num;
					s.push(num);
					break;
				}
				case 'O':{
					if(!s.empty()){
						s.pop();
					}
					break;
				}
				case 'A':{
					if(s.empty())cout<<'E'<<endl;
					else cout<<s.top()<<endl;
					break;
				}
			}
		}
		cout<<endl;
	}


	return 0;
}

