#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**������к�,dp 
*����dp[i]��ʾ��Ai��β�����е����� 
*��dp[i]=max{Ai,dp[i-1]+Ai} ,eg.
*/
int main(){
	int N;
	while(cin>>N){
		int *p = new int[N];
		int *dp = new int[N];
		for(int i=0;i<N;++i)cin>>p[i];
		dp[0]=p[0];
		int maxn=-99999;
		for(int i=1;i<N;++i){
			dp[i]=max(p[i],(dp[i-1]+p[i]));
			maxn=max(maxn,dp[i]);
		}
		cout<<maxn<<endl;
	}

	return 0;
}

