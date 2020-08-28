#include<iostream>
\*Bài gi?ng Th?y Nguyen Tran Tan Minh Khang*\
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
int DemNguyenTo(int a[][100], int m, int n)
{
	int Dem = 0;
	int KtNguyenTo;
	for (int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(KtNguyenTo (a[i][j]))
				Dem++;
		return Dem;
}
int TongChinhPhuong(int a[][100], int m, int n)
{
	int s = 0;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(KtChinhPhuong(a[i][j]))
			s = s + a[i][j];
		return s;
}	
float TongAm(int a[][100], int m, int n)
{
	float s;
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(a[i][j]<0)
			s = s + a[i][j];
		return s;
}	
int TongNguyenTo(int a[][100], int m, int n)
{
	int s = 0;
	int KtNguyenTo;
	for (int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(KtNguyenTo (a[i][j]))
			s = s + a[i][j];
		return s;
}

