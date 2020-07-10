#include<iostream>
#include<algorithm>
#include<string.h>
#include<stack>
#include<cctype> 
using namespace std;
/**������ʽ�������޿ո����� 
*˼·����Ϊ����ջ����ֵջ������ջ�������ȼ�С��ջ���������ȼ�ʱ������ջ��������ر��ʽ 
*���룺һ�������ֵ���ĸ�ͷ��ţ�������ʹ���Զ���������ʶ��Ҳ����ֱ�ӵ����ж�ÿ���е�ÿ���ַ���
*���ݵĶ�ȡ��������һ���ѵ� 
*/

int getPriority(const char& c){
	
	switch(c){
		case '#':return 0;
		case '$':return 1;
		case '+':return 2;
		case '-':return 2;
		default:return 3;
	}
}

double getNumber(const string &str, int &index){
	double number = 0;
	while(isdigit(str[index])){
		number = number * 10 + str[index]-'0';
		++index;
	}
	return number;
}

double Calculate(const double& x,const double& y,const char& op){
	double result = 0;
	switch(op){
		case '+':result = x+y;break;
		case '-':result = x-y;break;
		case '*':result = x*y;break;
		case '/':result = x/y;break;
	}
	return result ;
}

int main(){
	stack<char> sta_op;
	stack<double> sta_num;
	string str;
	while(getline(cin,str)){
		//indexά��һ����ȡָ��
		int index = 0;
		sta_op.push('#');//���ȼ���ͣ���ζ�ű��ʽ����
		str+='$';
		while(index<str.size()){
			if(isdigit(str[index])){
				sta_num.push(getNumber(str,index));
			}
			else{
				if(getPriority(sta_op.top())<getPriority(str[index])){
					sta_op.push(str[index]);
					++index;
				}
				else{
					//��ջ�������ȼ�С��ջ�����ȼ������ȼ���ջ���漰������ 
					double y= sta_num.top();
					sta_num.pop();
					double x = sta_num.top();
					sta_num.pop();
					sta_num.push(Calculate(x,y,sta_op.top()));
					sta_op.pop();
				}
			}
		} 
		printf("%d\n",(int)sta_num.top());
	}
	
	return 0;
}

