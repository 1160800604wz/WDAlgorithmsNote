#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
/**���������� 
*˼·���ص����ڸ�����ĿҪ����һ�ö��������� 
*�ص㶨���insert���� 
*/

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int c):data(c),left(NULL),right(NULL){};
};
//���������������insert 
Node* Insert(Node* root,int x){
	if(root == NULL)root = new Node(x);
	else if(x<root->data)
		root->left = Insert(root->left,x);
	else if(x>root->data)
		root->right = Insert(root->right,x);
	return root;
}

void InOrder(Node* root){
	if(root == NULL)return ;
	InOrder(root->left);
	cout<<root->data<<" ";
	InOrder(root->right);
	return ;
} 

void PreOrder(Node* root){
	if(root == NULL)return ;
	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
	return ;
} 

void PostOrder(Node* root){
	if(root == NULL)return ;
	PostOrder(root->left);
	PostOrder(root->right);
	cout<<root->data<<" ";
	return ;
} 

int main(){
	int n;int x;
	while(cin>>n){
		Node* root = NULL;
		for(int i=0;i<n;++i){
			cin>>x;
			root = Insert(root,x);
		}
		PreOrder(root);cout<<endl;
		InOrder(root);cout<<endl;
		PostOrder(root);cout<<endl;
	}

	return 0;
}

