#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**���������� 
*˼·���ص����ڸ�����ĿҪ����һ���� 
*������Ƕ�Ӧ�Ľ��з��ʣ���㲻�� 
*/

struct Node{
	char data;
	Node* left;
	Node* right;
	Node(char c):data(c),left(NULL),right(NULL){};
};
//�Ӹ��������ַ�����ʼ�����������ظ��ڵ� 
Node* BuildTree(int &position,const string &str){
	char c=str[position++];
	if(c=='#')return NULL;
	Node *node = new Node(c);
	node->left = BuildTree(position,str);
	node->right = BuildTree(position,str);
	return node;
}

void InOrder(Node* root){
	if(root == NULL)return ;
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
	return ;
} 

int main(){
	string str;
	while(cin>>str){
		int position = 0;
		Node* root = BuildTree(position,str);
		InOrder(root);
		cout<<endl;
	}

	return 0;
}

