#include<iostream>
#include<string>
#include<vector>
#include<math.h>

using namespace std;
/**
��������Ϊ1000λ����ͨ�����޷��洢
**/

//�ַ�������
string divide(string str,int x) {
    int remainder=0;//��������
    for(int i=0; i<str.size(); i++) {
        int current=str[i]-'0'+remainder*10;
        str[i]=current/x+'0';
        remainder=current%x;
    }
    int index=0;
    while(str[index]=='0')index++;
    return str.substr(index);
}

//�ַ����˷�
string mutiple(string str,int x) {
    int carry=0;//�����λ
    for(int i=str.size()-1; i>=0; i--) {
        int current=x*(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if(carry!=0) {
        str="1"+str;
    }
    return str;
}

//�ַ����ӷ�
string add(string str,int x) {
    int carry=x;
    for(int i=str.size()-1; i>=0; i--) {
        int current=(str[i]-'0')+carry;
        str[i]=current%10+'0';
        carry=current/10;
    }
    if(carry!=0) {
        str="1"+str;
    }
    return str;
}

int main() {
    string str;
    while(getline(cin,str)) {
        vector<int> binary;
        while(str.size()!=0) {
            //���λ����
            int last=str[str.size()-1]-'0';
            //ȡģ����
            binary.push_back(last%2);
            //��������
            str=divide(str,2);
        }
        string answer="0";
        for(int i=0; i<binary.size(); i++) {
            answer=mutiple(answer,2);//�˷�����
            answer=add(answer,binary[i]);//�ӷ�����
        }
        cout<<answer<<endl;
    }

    return 0;
}
