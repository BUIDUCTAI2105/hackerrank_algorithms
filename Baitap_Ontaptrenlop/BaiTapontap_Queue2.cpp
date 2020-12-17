// bai tap on tap ve Queue

#include<conio.h>
#include<stdio.h>
#include<string>
struct ThongTin
{
	char CMND[12];
	char hoTen[21];
	int namSinh;
};
typedef ThongTin itemtype;
struct QueueNode
{
	itemtype Info;
	QueueNode *Next;
};
struct Queue
{
	QueueNode *Head,*Tail;
};
void initQueue(Queue &q)
{
	q.Head=q.Tail=NULL;
}
QueueNode *createQueueNode(itemtype x)
{
	QueueNode *p=new QueueNode;
	if(p==NULL)
		return NULL;
	p->Info=x;
	p->Next=NULL;
	return p;
}
int insertTail(Queue &q,QueueNode *p)
{
	if(p==NULL)
		return 0;
	if(q.Head==NULL)
		q.Head=p;
	else
		q.Tail->Next=p;
	q.Tail=p;
	return 1;
}
int deleteHead(Queue &q,itemtype &x)
{
	if(q.Head==NULL)
		return 0;
	QueueNode *p=q.Head;
	q.Head=q.Head->Next;
	if(q.Head==NULL)
		q.Tail=NULL;
	x=p->Info;
	delete p;
	return 1;
}
int getHead(Queue q,itemtype &x)
{
	if(q.Head==NULL)
		return 0;
	x=q.Head->Info;
	return 1;
}
int getTail(Queue q,itemtype &x)
{
	if(q.Head==NULL)
		return 0;
	x=q.Tail->Info;
	return 1;
}
void nhapTT(itemtype &x)
{
	printf("Nhap vao so cmnd:");
	scanf("%s",&x.CMND);
	printf("Nhap vao ho ten:");
	fflush(stdin);
	gets(x.hoTen);
	printf("Nhap vao nam sinh:");
	scanf("%d",&x.namSinh);
}
void createQueue(Queue &q)
{
	initQueue(q);
	int n;
	printf("Nhap vao so luong:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		itemtype x;
		printf("Nhap thong tin thu %d\n",i+1);
		nhapTT(x);
		insertTail(q,createQueueNode(x));
	}
}
void xuatTT(itemtype x)
{
	printf("%s\t%s\t%d\n",x.CMND,x.hoTen,x.namSinh);
}
void showQueue(Queue q)
{
	QueueNode *p=q.Head;
	while (p)
	{
		xuatTT(p->Info);
		p=p->Next;
	}
}
int find(Queue q,itemtype x)
{
	QueueNode *p=q.Head;
	while (p)
	{
		if(strcmp(p->Info.CMND,x.CMND)==0&&strcmp(p->Info.hoTen,x.hoTen)==0&&p->Info.namSinh==x.namSinh)
			return 1;
		p=p->Next;
	}
	return 0;
}
void deleteAll(Queue &q)
{
	while (q.Head)
	{
		itemtype x;
		printf("Phan tu vua lay ra\n");
		deleteHead(q,x);
		xuatTT(x);
	}
	printf("Da lay ra all phan tu trong queue");
}
void main()
{
	Queue q;
	itemtype x;
	createQueue(q);
	showQueue(q);
	printf("Nhap vao thong tin muon them vao hang doi\n");	
	nhapTT(x);
	insertTail(q,createQueueNode(x));
	printf("Sau khi them\n");
	showQueue(q);
	printf("Thong tin phan tu o dau hang doi\n");
	getHead(q,x);
	xuatTT(x);
	printf("Thong tin phan tu o cuoi hang doi\n");
	getTail(q,x);
	xuatTT(x);
	printf("Nhap vao thong tin phan tu can xem\n");
	nhapTT(x);
	if(find(q,x)==0)
		printf("Phan tu khong co trong hang doi\n");
	else
		printf("Tim thay\n");
	deleteHead(q,x);
	printf("Phan tu vua lay ra\n");
	xuatTT(x);
	deleteAll(q);
	getch();
}
