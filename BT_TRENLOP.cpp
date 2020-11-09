// bai tap danh sach lien ket don
//Tao 1 cau trúc DSLK don luu tru so nguyên.
//
//a. Viet hàm khoi tao
//b. Viet hàm kiem tra rong
//c. Viet hàm tao mot node moi
//d. Viet hàm thêm mot node moi vào dau dslk.
//e. Viêt hàm thêm mot node moi vào cuoi dslk.
//f. Viêt hàm thêm môt node moi vào 1 vi trí bat kì dslk.
//
//g.Viet hàm duyet dslk.
//h.Viet hàm xuat các so nguyên to trong dslk.
//i.Viet hàm dem các so nguyên chính phuong trong dslk.
//i.Viet hàm tính tong các so nguyên chan trong dslk.
//
//k.Viet hàm tìm mot phan tu có giá tri x trong dslk
//l.Viet hàm tìm mot phan tu có giá tri nho nhat trong dslk
//
//m. Viet hàm sap xep dslk theo thu tu tang dan (interchange sort, selection sort).
//n. Viet hàm xóa 1 node dau dslk
//o.Viet hàm xóa 1 node có giá tri bang x trong dslk
//p.Viet hàm xóa tât ca node có giá tri bang x trong dslk

#include <stdio.h>
#include <conio.h>
#include <math.h>


struct node{
	int info;
	node *next;
};
struct List
{
	node* head;
	node* tail;
};

node *createNode(int x){
    node *p = new node;
	if(p == NULL){
		printf("Error");
		return NULL;
	}
	else{
		p -> info = x;
		p -> next = NULL;
		return p;
	}
}
void nhapDS(List &l)
{
	int n; 
	printf("\n Nhap so luong node: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++){
		int x;
		printf("\n Nhap vao du lieu:");
		scanf("%d", &x);

		node *p = createNode(x);
		addTail(l,p);
	}
}
void xuatDS(List l)
{
	for(node *p = l.head; p != NULL; p=p->next){
		printf("%4d", p->info);
	}
}
void addHead(List &l, node*p)
{
	if(l.head == NULL){
		l.head = l.tail = p;
	}
	else{
		if(p == NULL){
			return;
		}
		else{
			p ->next = l.head;
			l.head = p;
		}
	}
}
void addTail(List &l, node *p)
{
	if(l.head == NULL){
		l.head = l.tail = p;
	}
	else{
		if( p == NULL){
			return;
		}
		else{
			l.tail -> next = p;
			l.tail = p;
		}
}
}
void addAfterNode(List &l, node *q, node *p)
{
	if(l.head == NULL)
	{
		l.head = l.tail = p;
	}
	else{
		if(q == NULL)
		{
			addHead(l,p);
		}
		else
		{
			if(p == NULL){
				return ;
			}
			else{
				if( q == l.tail){ // q là node cu?i 
					addTail;
				}
				else {
					p ->next = q ->next;
					q ->next = p;
				}
			}
		}
	}
}

void duyetDSLK(List l)
{
	if (l.head == NULL){
		return;
	}
	node *p = l.head;
	while( p != NULL){
		printf("%4d", p ->info);
		p = p ->next;
	}
}
bool KiemTraNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i < sqrt(float(n)); i++)
	{
		if( n % i == 0){
			return false;
		}
	}
	return true;
}
int xuatNguyenTo(List l)
{
	for (node *p = l.head; p != NULL; p=p->next){
		if(KiemTraNguyenTo(p->info)){
			printf("%4d", p->info);
		}
	}
}
bool kiemTraChinhPhuong(int x){
	int sqr = sqrt(float(x));
	return (sqr * sqr == x );
 }
int demChinhPhuong(List l)
{
	int count = 0;
	for(node *p = l.head; p != NULL; p=p->next){
		if(kiemTraChinhPhuong(p->info)){
			count ++;
		}
	}
	return count;
}
int sumChan(List l)
{
	int sum = 0;
	for(node *p = l.head; p != NULL; p=p->next){
		if(p->info % 2 == 0){
			sum = p->info;
		}
	}
	return sum;
}
int TimxList(List l, int x)
{
	for(node* p = l.head; p != NULL; p=p->next){
		if( p->info = x){
			return p->info;
		}
	}
	return NULL;
}
int TimMin(List l)
{
	node* Min = l.head;
	for(node *p = l.head; p != NULL; p=p->next){
		if(Min -> info > p->info){
			Min = p;
		}
	}
	return 0;
}

void InterchangeList_Incre(List l)
{
	for(node *p = l.head; p != NULL; p=p->next){
		for(node *q = p->next; q != NULL; q=q->next){
			if(p->info > q->info){
				int t = p->info;
	            p->info = q->info;
	            q->info = t;
		}
	}
}
}
void SelectionList(List l)
{
	for(node *p = l.head; p != NULL; p=p->next){
		int min = p->info;
		for(node *q = p->next; q != NULL; q=q->next){
			    int t = p->info;
	            p->info = q->info;
	            q->info = t;
		}
	}
}
void deleteHead(List &l)
{
	if(l.head == NULL){
		return;
	}
	else{
		node *p = l.head;
		if(l.head == l.tail){
			l.head = l.tail = NULL;
			delete(p);
		}
		else{
			l.head = p->next;
			p->next = NULL;
			delete(p);
		}
	}
}
int main()
{
	node*p;
	node*q;
	List l;
	int x;
	nhapDS(l);
	xuatDS(l);
	duyetDSLK(l);

	addHead(l, p);
	addTail(l, p);
	addAfterNode(l,p,q);

	xuatNguyenTo(l);
	demChinhPhuong(l);
	sumChan(l);
	
	printf("\n Nhap x :");
	scanf("%d", &x);
	int KQ = TimxList(l,x);
		printf("\n Tim thay x tai %d: ", KQ);
	int k = TimMin(l);
		printf("\n gia tri min la %d:", k);
    
	SelectionList(l);
		printf("\n danh sach duoc sap xep :");	
	InterchangeList_Incre(l);
		printf("\n danh sach duoc sap xep :");	

	deleteHead(l);

	getchar();
	return 0;


}
