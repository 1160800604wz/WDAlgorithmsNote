#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
/**������ӯ�����廪���ԣ� 
*˼·��vector�䳤����洢��� 
*����ֱ��bool�ͺ����ж�����������ӯ������4,1+2=3<4���������ǣ����Է���sumֵ 
*/

int calSum(const int &num){
	int sum=1;
	//������sumΪ�������Ӻͣ����˱��������1���⣬�������Ӷ���һ��
	//forѭ����һ�뼴�� 
	double sqr=sqrt(num);
	for(int i=2;i<sqr;++i){
		if(num%i==0){
			sum+=i;
			sum+=num/i;
		}
	}
	//����������ȫƽ���� 
	if(sqr==(int)sqr)sum+=(int)sqr;
	return sum;
}

int main(){
	vector<int> Num_E;
	vector<int> Num_G;
	for(int i=2;i<=60;++i){
		if(calSum(i)>i)Num_G.push_back(i);
		else if(calSum(i)==i)Num_E.push_back(i);
	}
	//���¸�ʽ���
	printf("E:");
	for(int i=0;i<Num_E.size();++i)cout<<" "<<Num_E[i];
	printf("\nG:");
	for(int i=0;i<Num_G.size();++i)cout<<" "<<Num_G[i];
	
	

	return 0;
}

