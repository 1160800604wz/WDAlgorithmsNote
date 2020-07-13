#include<iostream>
#include<queue>

using namespace std;

int main() {
    //n��n��С����p��ʼ������m���
    int n,p,m;
    while(scanf("%d%d%d",&n,&p,&m)!=EOF) {
        if(n==0&&p==0&&m==0) {
            break;
        }
        queue<int> children;
        //��ʼ������
        for(int i=0; i<n; i++) {
            children.push(i+1);
        }
        //ʹ���Ϊp��С��������
        for(int i=1; i<p; i++) {
            children.push(children.front());
            children.pop();
        }
        while(!children.empty()) {
            for(int i=1; i<m; i++) {
                children.push(children.front());
                children.pop();
            }
            if(children.size()==1) {
                printf("%d\n",children.front());
            } else {
                printf("%d,",children.front());
            }
            children.pop();
        }
    }
    return 0;
}
