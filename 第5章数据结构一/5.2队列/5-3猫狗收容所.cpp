#include<iostream>
#include<queue>

/*
6
1 1
1 -1
2 0
1 2
2 -1
2 1
*/

using namespace std;

struct Animal {
    int index;
    int id;
    Animal(int a,int b):index(a),id(b) {}
};
int main() {
    int n,m,t,order=0;//order��ʾ����
    scanf("%d",&n);
    queue<Animal> dog;
    queue<Animal> cat;
    for(int i=0; i<n; i++) {
        scanf("%d%d",&m,&t);
        if(m==1) {
            if(t>0) {
                dog.push(Animal(order++,t));
            } else if(t<0) {
                cat.push(Animal(order++,t));
            }
        } else {
            if(t==0&&!dog.empty()&&!cat.empty()) {
                    //��������Ķ���
                if(dog.front().index<cat.front().index) {
                    //�������������С
                    printf("%d ",dog.front().id);
                    dog.pop();
                } else {
                    printf("%d ",cat.front().id);
                    cat.pop();
                }
            } else if(t==0&&dog.empty()&&!cat.empty()) {
                //��������Ķ����Ϊ��
                printf("%d ",cat.front().id);
                cat.pop();
            } else if(t==0&&!dog.empty()&&cat.empty()) {
                //��������Ķ��èΪ��
                printf("%d ",dog.front().id);
                dog.pop();
            } else if(t==1&&!dog.empty()) {
                //������
                printf("%d ",dog.front().id);
                dog.pop();
            } else if(t==-1&&!cat.empty()) {
                //����è
                printf("%d ",cat.front().id);
                cat.pop();
            }
            printf("\n");
        }
    }
    return 0;
}
