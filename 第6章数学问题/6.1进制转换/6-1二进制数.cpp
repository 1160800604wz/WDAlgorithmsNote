#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;
/**�������� 
*��Ҫע����ǣ����γ�2��ȡģ�õ����Ǵӵ�λ����λ�Ľ������Ҫ������� 
*
*/

int change(const int& num){
	return 1;
}

int main(){
	int K;cin>>K;
	int num;
	vector<int> result;
	while(K--){
		cin>>num;
		while(num!=0){
			result.push_back(num%2);
			num/=2;
		}
		for(int i=result.size()-1;i>=0;--i)cout<<result[i];
		cout<<endl;
		result.clear();
	}

	return 0;
}

