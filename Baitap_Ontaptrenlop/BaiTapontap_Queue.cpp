// bai tap on tap hang doi Queue


#include <stdio.h>
#include <stdlib.h>



struct HangHoa{
	char ma[10];
	char ten[20];
	char dvt[10];
	int soLuong;
};
typedef HangHoa ItemType;

struct Node{
	ItemType info;
	Node* next;
};

struct Queue{
	Node* head;
	Node* tail;
};

//khoi tao
void initQueue(Queue& q)
{
	q.head = q.tail = NULL;
}
//kiem tra rong
bool isEmpty(Queue& q)
{
	return q.head == NULL;
}
//cap phat 1 node
Node* createNode(ItemType x)
{
	Node* p = new Node;
	if (p != NULL)
	{
		p->info = x;
		p->next = NULL;
	}
	return p;
}
//them 1 node vao queue -> them cuoi
void enQueue(Queue& q, Node* p)
{
	if (p == NULL) return;

	if (isEmpty(q))
	{
		q.head = q.tail = p;
	}
	else
	{
		q.tail->next = p;
		q.tail = p;
	}
}

//lay 1 phan tu trong queue -> xoa dau
void deQueue(Queue& q, ItemType& x)
{
	if (!isEmpty(q))
	{
		Node* p = q.head;
		q.head = p->next;

		x = p->info;

		delete p;
	}
}
//xem phan tu dau
void getHead(Queue q, ItemType& x)
{
	if (!isEmpty(q))
	{
		x = q.head->info;
	}
}
//xem phan tu cuoi
void getTail(Queue q, ItemType& x)
{
	if (!isEmpty(q))
	{
		x = q.tail->info;
	}
}

void printNode(ItemType x)
{
	//Hang hoa
	printf("%10s%20s%10s%5d\n", x.ma, x.ten, x.dvt, x.soLuong);
}
//in queue ra man hinh
void printQueue(Queue q)
{
	Node* p = q.head;
	while (p != NULL)
	{
		printNode(p->info);
		p = p->next;
	}
}

void input_file(Queue& q, char* fileName)
{
	FILE* f = fopen(fileName, "rt");
	if (f == NULL)
	{
		printf("Loi doc file");
		return;
	}
	else
	{
		int n;
		fscanf(f, "%d", &n);
		for (int i = 0; i < n; i++)
		{
			HangHoa x;
			fscanf(f, "%s%s%s%d", &x.ma, &x.ten, &x.dvt, &x.soLuong);  

			Node* p = createNode(x);
			enQueue(q, p);
		}
	}
}

void nhap1HH(HangHoa &x)
{
	printf("Nhap vao ma hang:");
	scanf("%s",&x.MaHang);
	printf("Nhap vao ten hang:");
	fflush(stdin);
	gets(x.tenHang);
	printf("Nhap vao don vi tinh:");
	scanf("%s",&x.DVT);
	printf("Nhap vao so luong:");
	scanf("%d",&x.sl);
}

void menu()
{
	printf("\n0.Thoat");
	printf("\n1.Doc file");
	printf("\n2.Xem cac mat hat trong ds");
	printf("\n3.Them 1 hang hoa");
	printf("\n4.Lay 1 hang hoa");
	printf("\nChon: ");
}
void main()
{
	Queue q;
	initQueue(q);

	int chon = 0;
	do
	{
		system("cls");
		menu();
		scanf("%d", &chon);

		switch (chon)
		{
		case 0: break;
		case 1: 
		{
				  input_file(q, "dshh.txt");
				  break;
		}
		case 2:
		{
				  printQueue(q);
				  break;
		}
		case 3:
		{
				  HangHoa x;
				  nhap1HH(x);

				  Node *p = createNode(x);
				  enQueue(q, p);

				  break;
		}
		case 4:
		{
				  HangHoa x;
				 
				  deQueue(q, x);
				  printf("HH vua lay: \n");
				  printNode(x);

				  break;
		}
		default:
			break;
		}


	} while (chon != 0);

	input_file(q,"dshh.txt");
	printQueue(q);



	system("pause");
}


