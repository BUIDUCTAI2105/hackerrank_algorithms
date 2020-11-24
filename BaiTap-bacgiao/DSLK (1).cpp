// tang them item cho chuong trinh
// y tuong su dung doc file ket hop voi danh sach lien ket don 
//	uu diem là không cân bô nho lien tiep 
//	B1: Khai bao cau truc cho danh sach lien ket( khai bao diem dau danh sach goi la head va diem cuoi goi la tail)
//	B2: viet ham khoi tao danh sach lien ket( cho danh sach rông)
//		viet ham kiem tra danh sach co rong khong (de dien phan tu vao danh sach)
//	B3: viet ham cap phat 1 node cho danh sach lien ket
//	B4: viet ham them node vao dau va vao cuoi( addHead và addTail)
//	B5: viet ham tao danh sach 
//	B6: viet ham docFile cho danh sach lien ket
//	B7: viet ham showList de hien thi danh sach da doc ra man hinh

#include <stdio.h>
#include <stdlib.h>

//Khai bao cau truc DSLK
struct Node
{
	int info;
	Node* next;
};

struct SList
{
	Node* head;
	Node* tail;
};

//ham khoi tao
void initSList(SList& sl)
{
	sl.head = sl.tail = NULL;
}
//kiem tra rong
bool isEmpty(SList sl)
{
	return sl.head == NULL;
}

//cap phat 1 node
Node* createNode(int x)
{
	//1. cap phat vung nho kieu node
	Node* p = new Node;

	//2. neu cap phat thanh cong thi gan du lieu cho node
	if (p != NULL)
	{
		p->info = x;
		p->next = NULL;
	}
	return p;
}
//them 1 node
void addHead(SList& sl, Node* p)
{
	if (p == NULL) return;

	if (isEmpty(sl))
	{
		sl.head = sl.tail = p;
	}
	else
	{
		p->next = sl.head;
		sl.head = p;
	}
}

void addTail(SList& sl, Node* p)
{
	if (p == NULL) return;

	if (isEmpty(sl))
	{
		sl.head = sl.tail = p;
	}
	else
	{
		sl.tail->next = p;
		sl.tail = p;
	}
}

//tao ds
void inputSList(SList& sl)
{
	do
	{
		//nhap du lieu vao x
		int x;
		printf("Nhap x = ");
		scanf("%d", &x);

		if (x == -1) break;

		//Them x vao ds
		Node* p = createNode(x);
		addHead(sl, p);

	} while (true);
}

void inputSList_file(SList& sl, char* fileName)
{
	FILE* f = fopen(fileName, "rt");
	if (f == NULL)
	{
		printf("Loi doc file!");
		return;
	}
	else
	{
		while (!feof(f)) //trong khi chua gap ki tu ket thuc file
		{
			//doc du lieu va gan vao x
			int x;
			fscanf(f, "%d", &x);

			//Them x vao ds
			Node* p = createNode(x);
			//addHead(sl, p);
			addTail(sl, p);
		}

		fclose(f);
	}
}

// duyet
void showList(SList sl)
{
	Node* p = sl.head;
	while (p != NULL)
	{
		printf("%d ->", p->info);
		p = p->next;
	}
	printf("NULL\n");
}

void main()
{
	//Khai bao ds
	SList sl;
	//Khoi tao
	initSList(sl);

	//Tao ds
	//inputSList(sl);
	inputSList_file(sl, "input.txt");
	showList(sl);



	system("pause");
}
