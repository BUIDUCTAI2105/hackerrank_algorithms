#include<iostream>

struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;

void nhap(PHANSO &x)
{
	cout << "nhap tu: ";
	cin >> x.tu;
	cout << "nhap mau: ";
	cin >> x.mau;
}

void xuat(PHANSO x)
{
	cout << "Tu: " << x.tu;
	cout << "Mau: " << x.mau;
}

void nhap(PHANSO a[][100], int &m, int &n)
{
	cout << "nhap m: ";
	cin >> m;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
		{
		cout << "nhap a["<< i <<"] ["<< j <<"]";
		nhap a[i][j];
		}			
}

void xuat(PHANSO a[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		xuat a[i][j];
		cout << "\n";
	}
}
		
