#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
<<<<<<< HEAD

=======
>>>>>>> parent of 6dd9bdd... 更新6-2，6-3
using namespace std;
/**ʮ����������� 
*˼·��ʮ����ת�����ƣ����������򣬶�����תʮ���ƣ���һ����ͬ��10ָ������ӣ� 
*ע�⣺���������Խϴ�1000λ���� 
*/

string divide2(const string &s){
	//ģ���ֶ�����2
	const int n=s.size();
	string res(n,'0');
	int bias=0;
	for(int i=0;i<n;++i){
		res[i]=(s[i]-'0'+10*bias)/2+'0';
		bias=(s[i]-'0'+10*bias)%2;
	}
	int index=0;
	while(res[index]=='0')++index;
	return res.substr(index);
}

string multiple(string str,const int& x,int carry){
	carry=0;//�洢��λ
	for(int i=str.size()-1;i>=0;--i){
		int curr=x*(str[i]-'0')+carry;
		str[i]=curr%10+'0';
		carry = curr/10;
	} 
	if(carry!=0)str=(char)('0'+carry)+str;
	return str;
}

string add(string str,int x){
	return multiple(str,1,x);
}


int main(){
	vector<int> v;
	string A;
	int last;
	while(cin>>A){
		while(A.size()!=0){
			last = A[A.size()-1]-'0';
			v.push_back(last%2);
			A = divide2(A);	
		}
		string ans = "0";
		for(int i=0;i<v.size();++i){
			ans = multiple(ans,2,0);
			ans = add(ans,v[i]);
			cout<<ans<<endl;
		} 
		cout<<ans<<endl;
		
	}
	//v������ԭ������������

	return 0;
}

