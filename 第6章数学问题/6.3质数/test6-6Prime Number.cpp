#include<iostream>
#include<vector>

using namespace std;

/**����
*˼·��ʹ������ɸ��
*���弴�����޳������ı���
*/

const int MAXN=100000;
const int MAXK=10000;
bool isPrime[MAXN];
vector<int> Prime;

void init() {
    fill_n(isPrime,MAXN,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2; i<MAXN; i++) {
        if(!isPrime[i])continue;
        Prime.push_back(i);
        for(int j=i*i; j<MAXN; j+=i) {
            isPrime[j]=false;
        }
        if(Prime.size()==MAXK)break;
    }
    return ;
}

int main() {
    init();
    int n;
    while(scanf("%d",&n)!=EOF) {
        cout<<Prime[n-1]<<endl;
    }
    return 0;
}
