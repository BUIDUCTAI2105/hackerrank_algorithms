// Viet chuong trình nhap 3 canh cua mot tam giác. Hãy cho biet dó là tam giác gì?

#include<stdio.h>
#include<conio.h>

void KiemTraTamGiac(int a, int b, int c)
{
	if(a + b <= c || a + c <= b ||  b + c <= a)
	{
		cout << " khong hop le ";
	}
	else
	{
		cout << "Day la tam giac: ";
	    if((a == b) && (b == c))
		{
			cout << "Deu";
		}
		else
		{
			if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
			{
				cout << "Vuong";
			}
			if(a == b || a == c || b == c)
		    {
			    cout << "Can";
		    }
			else
			{
				cout << "Thuong";
			}
		}
	}
}

int main()
{
	int a, b, c;
	cout << " a = ";
	cin >> a;
	
	cout << " b = ";
	cin >> b;
		
	cout << " c = ";
	cin >> c;
		
	KiemTraTamGiac(a, b, c);

	return 0;
}
