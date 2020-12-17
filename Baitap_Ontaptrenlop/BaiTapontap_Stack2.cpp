// bai tap on tap stack_ tinh hau to

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include <ctype.h>


struct Snode
{
	char info;
	Snode* next;
};
struct Stack
{
	Snode* Top;
};


Snode* TaoNode(char x);
void NewStack(Stack &s);
bool kiemTraRong(Stack s);
void TaoStack(Stack &s);
void push(Stack &s, Snode* p);
void xuat(Stack s);
char pop(Stack &s);
void XoaStack(Stack &s);
int UuTien(char x);
void HauTo(char TTo[], char HTo[]);
int TinhHt(char HT[]);

void main()
{
	char *a = (char*)malloc(sizeof(char));
	gets(a);
	printf("%s", a);
	char b[100];
	HauTo(a, b);
	printf("\n%s", b);
	printf("\nGia tri: %d", TinhHt(b));
	getch();
}

Snode* TaoNode(char x)
{
	Snode* p = new Snode;
	p->info = x;
	p->next = NULL;
	return p;
}

void NewStack(Stack &s)
{
	s.Top = NULL;
}

bool kiemTraRong(Stack s)
{
	if (s.Top == NULL) return true;
	return false;
}

void push(Stack &s, Snode* p)
{
	if (s.Top == NULL) s.Top = p;
	else
	{
		p->next = s.Top;
		s.Top = p;
	}
}

void xuat(Stack s)
{
	for (Snode* p = s.Top; p != NULL; p = p->next)
	{
		printf("%c -> ", p->info);
	}
	printf("NULL\n");
}

char pop(Stack &s)
{
	if (s.Top == NULL) return NULL;
	Snode* p = s.Top;
	char a = s.Top->info;
	s.Top = s.Top->next;
	delete p;
	return a;
}

void XoaStack(Stack &s)
{
	while (s.Top != NULL)
	{
		Snode* p = s.Top;
		s.Top = s.Top->next;
		delete p;
	}
}


int UuTien(char x)
{
	if (x == '+' || x == '-')
		return 1;
	if (x == '*' || x == '/')
		return 2;
	if (x == '^')
		return 3;
}

void HauTo(char TTo[], char HTo[])
{
	Stack S;
	char x, token;
	int i = 0, j = 0;
	NewStack(S);
	for (i = 0; TTo[i] != '\0'; i++)
	{
		token = TTo[i];
		if (isalnum(token))
			HTo[j++] = token;
		else
		{
			if (token == '(')
				push(S, TaoNode('('));
			else if (token == ')')
			{
				x = pop(S);
				while (x != '(')
				{
					HTo[j++] = x;
					x = pop(S);
				}
				x = pop(S);
			}
			else
			{
				while (!kiemTraRong(S) && UuTien(token) <= UuTien(S.Top->info))
				{
						x = pop(S);
						HTo[j++] = x;
				}
				push(S, TaoNode(token));
			}
		}
	}
	while (!kiemTraRong(S))
	{
		x = pop(S);
		HTo[j++] = x;
	}
	HTo[j] = '\0';
}
int TinhHt(char HT[])
{
	Stack s;
	NewStack(s);
	for (int i = 0; HT[i] != '\0'; i++)
	{
		if (isalnum(HT[i])) push(s,TaoNode(HT[i]));
		if (HT[i] == '+')
		{
			int a = (int)pop(s)-48;
			int b = (int)pop(s) - 48;
			printf("%d", b);
			push(s, TaoNode(char(b + a)));
		}
		if (HT[i] == '-')
		{
			int a = (int)pop(s) - 48;
			int b = (int)pop(s) - 48;
			push(s, TaoNode(char(b - a)));
		}
		if (HT[i] == '*')
		{
			int a = (int)pop(s) - 48;
			int b = (int)pop(s) - 48;
			push(s, TaoNode(char(b * a)));
		}
		if (HT[i] == '/')
		{
			int a = (int)pop(s) - 48;
			int b = (int)pop(s) - 48;
			push(s, TaoNode(char(b / a)));
		}
		if (HT[i] == '^')
		{
			int a = (int)pop(s) - 48;
			int b = (int)pop(s) - 48;
			push(s, TaoNode(char(pow(float(b),a))));
		}
	}
	return int(pop(s));
}
