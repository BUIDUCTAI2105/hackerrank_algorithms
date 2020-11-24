// bai tap them nhieu items - phuong phap su dung docFile ket hop Cay nhi phan
//	B1: khai bao cau truc cua cay nhi phan ( bao gom khai bao, kiem tra rông, tao node moi cho cay, them gia tri vao cay, duyet cay - theo kieu node-left-right(NLR), 
//														huy cay)
//	B2: viet ham doc file tren cay nhi phan

#include <stdio.h>
#include <conio.h>

struct TNode
{
	int key;
	TNode * left, * right;
};

void initTree( TNode* &root)
{
	root = NULL;
}
TNode* createTNode(int x)
{
	TNode* p= new TNode;
	if(p != NULL)
	{
		p->key = x;
		p->left = p->right = NULL;
	}
	return p;
}

void insertNode(TNode* &root, int x)
{
	if(root != NULL)
	{
		//so sanh x va gia tri cua node hien tai
		if(x == root->key)
			return;
		else if(x > root->key)
			insertNode(root->right, x);
		else
			insertNode(root->left, x);
	}
	else{
		root = createTNode(x);
	}
}
void NLR(TNode* root)
{
	if(root != NULL){
		printf("%d", root->key);
		NLR(root->left);
		NLR(root->right);
	}
}
void removeTree(TNode* root)
{
	if(root != NULL){
		removeTree(root->left);
		removeTree(root->right);

		delete root;
	}
}

void inputTree_file(TNode* & root, char* finame)
{
	FILE* f = fopen(finame, "rt");

	if(f == NULL){
		printf("loi doc file");
		return;
	}
	else{
		int x;
		while(!feof(f)){
			// doc du lieu
			if(fscanf(f,"%d", &x)==-1) break;

			//them 1 node vao cay
			insertNode(root, x);
		}
	fclose(f);
	}
}

void main(){
	// khai bao 1 cay
	TNode* root;
	//khoi tao
	insertNode(root);
	inputTree_file(root, "Text.txt");
	// duyet cay
	NLR(root);

	//huy cay
	removeTree(root);
	
	getchar();
}
