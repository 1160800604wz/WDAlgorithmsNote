#include<iostream>
#include<algorithm>
using namespace std;

struct Country{
    int id;
    int glod;
    int total;
    int people;
};

int main(){
    int m,n;//n��������m���������Ĺ�����
    while(scanf("%d %d",&n,&m)!=EOF){
        Country country[n];
        for(int i=0;i<n;i++){
            scanf("%d %d %d",&country[i].glod,&country[i].total,&country[i].people)
        }
    }
}
