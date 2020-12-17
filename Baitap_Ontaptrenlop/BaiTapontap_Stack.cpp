// bai tap on tap stack _chuyen doi bieu thuc

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char sTemp[100];
struct Node
{
	char info;
	Node *next;
};

struct Stack
{
	Node *top;
};

void khoiTaoStack(Stack &s)
{
	s.top = NULL;
}

bool kiemTraRong(Stack s)
{
	return s.top == NULL;
}

Node *taoNode(char c)
{
	Node *p = new Node;
	if (p != NULL)
	{
		p->info = c;
		p->next = NULL;
	}
	return p;
}

void push(Stack &s, char c)
{
	Node *p = taoNode(c);
	if (p == NULL) return;
	if (kiemTraRong(s))
		s.top = p;
	else
	{
		p->next = s.top;
		s.top = p;
	}
}

char pop(Stack &s)
{
	if (kiemTraRong(s)) return '/0';
	else
	{
		char c;
		Node *p = s.top;
		s.top = p->next;
		c = p->info;
		return c;
		delete p;
	}
}

int doUuTien(char c)
{
	if (c == '+' || c == '-')
		return 1;
	if (c == '*' || c == '/')
		return 2;
	if (c == '^')
		return 3;
	return 0;
}

void chuyenDoiBieuThuc(Stack &stack, char s[], int n)
{
	khoiTaoStack(stack);
	char c;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		{
			sTemp[j] = s[i];
			j++;
		}
		else
		{
			if (s[i] == '(')
				push(stack, s[i]);
			else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
			{
				if (kiemTraRong(stack))
					push(stack, s[i]);
				else if (stack.top->info == '(')
					push(stack, s[i]);
				else
				{
					if (doUuTien(stack.top->info) >= doUuTien(s[i]))
					{
						c = pop(stack);
						sTemp[j] = c;
						j++;
						push(stack, s[i]);
					}
				}
			}
			else if (s[i] == ')')
			{
				while (!kiemTraRong(stack) && stack.top->info != '(')
				{
					c = pop(stack);
					sTemp[j] = c;
					j++;
				}
			}
		}
	}
	while (!kiemTraRong(stack))
	{
		c = pop(stack);
		if (c == '(' || c == ')')
			continue;
		else
		{
			sTemp[j] = c;
			j++;
		}
	}
}

void main()
{
	Stack stack;
	char s[100];
	printf("Nhap bieu thuc trung to: ");
	scanf("%s", s);
	int n = strlen(s);
	chuyenDoiBieuThuc(stack, s, n);
	for (int i = 0; i < strlen(sTemp); i++)
	{
		printf("%c", sTemp[i]);
	}
	printf("\n");
	system("pause");
}
