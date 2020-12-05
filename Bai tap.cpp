//Kiểm tra tính chẵn lẻ của một số .
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	if (n % 2 == 0)
		cout << n << " la mot so chan !";
	else
		cout << n << " la mot so le !";
	return 0;
}
#endif
//Giá trị ASCII của một kí tự
#if 0
#include<iostream>
using namespace std;
int main()
{
	char kitu;
	cout << "Nhap vao mot ki tu: ";
	cin >> kitu;
	if (int(kitu) != 27) {
		cout << "Ma ASCII cua ki tu" << kitu << " la: " << int(kitu) << endl;

	}
}
#endif
//Tìm số nguyên tố trong một phạm vi 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n1, n2, flag_var, i, j;
	cout << "Nhap vao so bat dau: ";
	cin >> n1;
	cout << "Nhap vao so ket thuc: ";
	cin >> n2;

		cout << "Cac so nguyen to tu " << n1 << " den " << n2 << "la: \n";
		for (i = n1 + 1; i < n2; ++i)
		{
			flag_var = 0;
			for (j = 2; j <= i / 2; ++j)
			{
				if (i % j == 0)
				{
					flag_var = 1;
					break;

				}
			}
			if (flag_var == 0)
				cout << i << endl;

		}
		return 0;
}
#endif
//Tính tổng n số tự nhiên đầu tiên 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n, i;
	long tong = 0;
	cout << "Nhap vao so tu nhien n: ";
	cin >> n;
	cout << "Cac so tu nhien can tinh la: \n";
	for (i = 1; i <= n; ++i )
	{
		tong = tong + i;
		cout << i<<"\n"<<endl;

	}
	cout << "Tong cua " << n << " so tu nhien dau tien la: " << tong;
	return 0;
}
#endif 
//Tìm số lớn nhất trong ba số
#if 0
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap vao so thu nhat: ";
	cin >> a;
	cout << "Nhap vao so thu hai: ";
	cin >> b;
	cout << "Nhap vao so thu ba: ";
	cin >> c;
	if ((a > b) && (a > c))
		cout << a << " la so lon nhat";
	if ((b > a) && (b > c))
		cout << b << " la so lon nhat";
	if ((c > a) && (c > b))
		cout << c << " la so lon nhat";
	return 0;
}
#endif

//Kiểm tra số âm dương 
#if 0
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap vao so n: ";
	cin >> n;
	if (n > 0)
		cout << n << " la so duong";
	else if (n < 0)
		cout << n << " la so am";
	else
		cout << n << " khong la so am vua khong la so duong";
	return 0;
} 
#endif
// Tính chu vi và diện tích tam giác ABC bất kỳ
#if 0
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c;
	double p, s;
/*AB=a, AB=b, BC=c*/
	cout << "Chieu dai AB: ";
	cin >> a;
	cout << "Chieu dai AC: ";
	cin >> b;
	cout << "Chieu dai BC: ";
	cin >> c;
	p = (a + b + c) / 2;
	cout << "Chu vi tam giac ABC la: " << 2 * p << endl;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac ABC la: " << s << endl;
	return 0;
}
#endif
// Giải hệ phương trình tuyến tính 
#if 0
#include<iostream>
#include<conio.h>
#include<math.h>
#define max 100
using namespace std;
// Nhập vào hệ số 
void Nhap(float A[max][max], int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
		{
			cout << "a[" << i << "][" << j << "]=";
			cin >> A[i][j];
		}
}
// Nhap he so tu do
void Nhap(float B[max], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "b[" << i << "]=";
		cin >> B[i];

	}
}
/*Xuat ma tran he so*/
void Xuat(float A[max][max], int n)
{
	cout << "\n";
	for (int i = 0; i < n; ++i)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << A[i][j] << "\t";
	}
}
/*Xuat ma tran he so tu do*/
void Xuat(float B[max], int n)
{
	cout << "(";
	for (int i = 0; i < n - 1; ++i)
		cout << B[i] << ",";
	cout << B[n - 1] << ")";

}

/*Xuat ra nghiem*/
void XuatNghiem(float[X], int n, char* s)
{
	if (A[i][i] != 0)
	{
		if (i == 0)
			X[i] = B[i] / A[i][i];
		else {
			X[i] = B[i];
			for (int j = 0; j < i; ++j)
			{
				X[i] = X[i] - A[i][j] * X[j];
				X[i] = X[i] / A[i][i];
			}
		}
	else
		return 0;
	}
	
		return 1;
}
char HeTamGiacTren(float A[max][max], float B[max], float X[max], int n)
{
	for (int i = n - 1; i >= 0; --i)
	{
		if (A[i][i] != 0)
		{
			if (i == n - 1)
				X[i] = B[i] / A[i][i];
			else
			{
				X[i] = B[i];

			}
		}
	}
}
//CHƯA XONG
#endif
// Tính tổng dãy S(n)=1+2+3+..+(n-1)+n bằng vòng lặp
#if 0
#include<iostream>
using namespace std;
int sum(int n)
{
	int sum = 0;
	for (int i = 0; i <= n; ++i)
		sum += i;
	return sum;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >> n;
	} while (n <= 0);
	cout << "Tong cua day so la: " << sum(n) << endl;
	return 0;
}
#endif
//Tính tổng S(n)=1+2+3+...+(n-1)+n bằng đệ quy
#if 0
#include<iostream>
using namespace std;
int sum(int n)
{
	if (n == 1)
		return 1;
	return sum(n - 1) + n;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >> n;

	} while (n <= 0);
	cout << "Tong cua day so la: " << sum(n) << endl;
	return 0;
}
#endif
#if 0
//Tính tổng của dãy S(n)=1+2^2+3^3+...+(n-1)^(n-1)+n^n
#include<iostream>
using namespace std;
int sum(int n)
{
	if (n == 1)
		return 1;
	return sum(n - 1) + pow(n,n);
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >> n;

	} while (n <= 0);
	cout << "Tong cua day so la: " << sum(n) << endl;
	return 0;
}
#endif
//Tính tổng S(n)=1/2+1/4+1/6+...+1/2n
#if 0
#include<iostream>
using namespace std;
float sum(float n)
{
	if (n == 1)
		return 0.5;
	return sum(n - 1) + 1 / (2 * n);

}
int main()
{
	float n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >> n;
	} while (n <= 0);
	cout << "Tong cua day so la: " << sum(n) << endl;
	return 0;
}
#endif
//Tính tổng 1+1/3+1/5+...+1/(2*n+1)
#if 0
#include<iostream>
using namespace std;
float sum(float n)
{
	if (n == 0)
		return 1;
	return sum(n - 1) + 1 / (2 * n + 1);

}
int main()
{
	float n;
	do
	{
		cout << "Nhap vao n: ";
		cin >> n;
	} while (n < 0);
	cout << "Tong cua day la: " << sum(n) << endl;
	return 0;
}
#endif
//Tính tong S(n)= 1/2 +3/4+5/6+(2n+1)/(2n+2)
#if 0
#include<iostream>
using namespace std;
float sum(float n)
{
	if (n == 0)
		return 0.5;
	return sum(n - 1) + (2 * n + 1) / (2 * n + 2);
}
int main()
{
	float n;
	do
	{
		cout << "Nhap vao n: ";
		cin >> n;

	} while (n < 0);
	cout << "Tong cua day la: " << sum(n) << endl;
	return 0;
}
#endif
//Tính tổng của dãy S(n)=1 + 1*2 +1*2*3+...+1*2*3*...*n
#if 0
#include<iostream>
using namespace std;
long GiaiThua(int n)
{
	if (n == 1)
		return 1;
	return GiaiThua(n - 1) * n;
}
long Tong(int n)
{
	if (n == 1)
		return 1;
	return Tong(n - 1) + GiaiThua(n - 1) * n;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >> n;

	} while (n <= 0);
	cout << "Tong cua day la: " << Tong(n) << endl;
	return 0;
}
#endif
#if 0
// Tính tổng S(x,n)=x+x^2+x^3+...+x^n
#include<iostream>
using namespace std;
float LuyThua(float x, int n)
{
	if (n == 1)
		return x;
	return LuyThua(x, n - 1) * x;
}
float Tong(float x, int n)
{
	if (n == 1)
		return x;
	return Tong(x,n - 1) + LuyThua(x, n - 1) * x;
}
int main()
{
	float x;
	int n;
	do
	{
		cout << "	Nhap vao n: ";
		cin >> n;
		cout << "	Nhap vao x: ";
		cin >> x;
	} while (n < 1);
	cout << "Tong cua day la: " <<Tong(x,n)<< endl;
	return 0;
}
#endif
//Tính tổng S(x,n)= x^2 + x^4 + x^6 +... + x^(2*n) ( ERROR !)
#if 0
#include<iostream>
using namespace std;
float LuyThua(float x, int n)
{
	if (n == 1)
		return pow(x, 2);
	return LuyThua(x, n - 1) * pow(x, 2 * n);

}
float Tong(float x, int n)
{
	if (n == 1)
		return pow(x, 2);
	return Tong(x, n - 1) + LuyThua(x, n - 1) * pow(x, 2 * n);
}
int main()
{
	float x;
	int n;
	do
	{
		cout << "Nhap vao x: ";
		cin >> x;
		cout << "Nhap vao n: ";
		cin >> n;
	} while (n < 1);
	cout << "Tong cua day la: " << Tong(x, n) << endl;
	return 0;
}
#endif
//Tính tổng S(n)=1 +1/(1+2) +1/(1+2+3)+...+1/(1+2+3+...+n)
#if 0
#include<iostream>
using namespace std;
float TongMS(float n)
{
	if (n == 1)
		return 1;
	return TongMS(n - 1) + n;
}
float TongPhanSo(float n)
{
	if (n == 1)
		return 1;
	return TongPhanSo(n - 1) + 1 / (TongMS(n - 1) + n);
}
int main()
{
	float n;
	do
	{
		cout << " Nhap vao n: ";
		cin >> n;

	} while (n < 1);
	cout << "Tong cua day la " <<TongPhanSo(n) << endl;
	return 0;
}
#endif
//Tính tổng các chữ số của số nguyên dương n
#if 0
#include<iostream>
using namespace std;
int Tongchuso(int n)
{
	if (n == 0)
		return 0;
	return Tongchuso(n / 10) + n % 10;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;

	} while (n < 0);
	cout << "Tong cac chu so cua n la: " << Tongchuso(n) << endl;
	return 0;
}
#endif
//Tìm ước lẻ lớn nhất của số nguyên dương n
#if 0
#include<iostream>
using namespace std;
int ULLN(int n)
{
	if (n % 2 == 1)
		return n;
	return ULLN(n / 2);
}
int main()
{
	int n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;

	} while (n <= 0);
	cout << "Uoc le lon nhat cua " << n << "la: " << ULLN(n) << endl;
	return 0;
}
#endif
//Tính tổng S(n)=sqrt(2+sqrt(2+...
#if 0
#include<iostream>
#include<math.h>
using namespace std;
float F(float n)
{
	if (n == 1)
		return sqrt(2);
	return sqrt(F(n - 1) + 2);
}
int main()
{
	float n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;

	} while (n <= 0);
	cout << "Tong cua day so la: " << F(n) << endl;
	return 0;
}
#endif
//Tính S(n)=sqrt(n+sqrt(n-1 +sqrt(n-2 +...sqrt(2+sqrt(1))))
#if 0
#include<iostream>
#include<math.h>
using namespace std;
long double F(long double n)
{
	if (n == 1)
		return 1;
	return sqrt(n + F(n - 1));
}
int main()
{
	long double n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;

	} while (n <= 0);
		cout << "Tong cua day so la: " << F(n) << endl;
		return 0;
}
#endif
//Tính tổng S(n) = 1/(1 + 1/(1 + 1/(1 + 1/(... 1 /(1/(1 + 1/(1 + 1 ))))))) ( n dấu phân số )
#if 0
#include<iostream>
#include<math.h>
using namespace std;
long double Thuong(long double n)
{
	if (n == 1)
		return 1.0 / (1.0 + 1.0);
	return 1 / (1 + Thuong(n - 1));
}
int main()
{
	long double n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	} while (n <= 0);
	cout << "Tong cua day la: " << Thuong(n) << endl;
	return 0;
}
#endif




