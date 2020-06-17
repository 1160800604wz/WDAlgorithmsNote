#include<iostream>

using namespace std;

const int MAXL=10001;
//bool������ģ����·������false��û��true
bool road[MAXL];

int main() {
    int l,m;
    while(scanf("%d %d",&l,&m)!=EOF) {
        int trees=l+1;
        while(m--) {
            int left,right;
            scanf("%d %d",&left,&right);
            for(int i=left; i<=right; ++i) {
                if(!road[i]) {
                    road[i]=true;
                    trees--;
                }
            }
        }
        printf("%d\n",trees);
    }
    return 0;
}
