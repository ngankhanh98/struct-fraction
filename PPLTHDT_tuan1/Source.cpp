#include"Header.h"
using namespace std;

#pragma region NhapXuat
istream& operator>>(istream& is, SPhanSo &a)
{
	is >> a.tu >> a.mau;
	return is;
}

ostream& operator<<(ostream& os, SPhanSo a)
{
	os << a.tu << "/" << a.mau;
	return os;
}
#pragma endregion

#pragma region TangGiam
SPhanSo operator++(SPhanSo &a, int n)							//a++
{
	SPhanSo _re = a;
	a.tu = a.tu + a.mau;
	return _re;
}
SPhanSo operator--(SPhanSo &a, int n)							//a--
{
	SPhanSo _re = a;
	a.tu = a.tu - a.mau;
	return _re;
}
SPhanSo operator++(SPhanSo &a)									//++a
{
	a.tu = a.tu + a.mau;
	return a;
}
SPhanSo operator--(SPhanSo &a)									//--a
{
	a.tu = a.tu - a.mau;
	return a;
}
#pragma endregion

#pragma region DaoDau
SPhanSo operator-(SPhanSo b)
{
	SPhanSo _re;
	_re.tu = -b.tu;
	_re.mau = b.mau;
	return _re;
}
#pragma endregion

#pragma region NghichDao
SPhanSo operator~(SPhanSo a)
{
	SPhanSo _re;
	_re.tu = a.mau;
	_re.mau = a.tu;
	return _re;
}
#pragma endregion

#pragma region TinhToan
SPhanSo operator+(SPhanSo a, SPhanSo b)							
{
	return { a.tu*b.mau + b.tu*a.mau, a.mau*b.mau };
}
SPhanSo operator+(SPhanSo a, int n)
{
	return { a.tu + a.mau*n, a.mau };
}
SPhanSo operator+(int n, SPhanSo a)
{
	return { a.tu + a.mau*n, a.mau };
}

SPhanSo operator-(SPhanSo a, SPhanSo b)
{
	return { a.tu*b.mau - b.tu*a.mau,a.mau*b.mau };
}
SPhanSo operator-(SPhanSo a, int n)
{
	return { a.tu - a.mau*n, a.mau };
}
SPhanSo operator-(int n, SPhanSo a)
{
	return { n*a.mau - a.tu, a.mau };
}

SPhanSo operator*(SPhanSo a, SPhanSo b)
{
	return { a.tu*b.tu, a.mau*b.mau };
}
SPhanSo operator*(SPhanSo a, int n)
{
	return { a.tu*n, a.mau };
}
SPhanSo operator*(int n, SPhanSo a)
{
	return { n*a.tu,a.mau };
}

SPhanSo operator/(SPhanSo a, SPhanSo b)
{
	return { a.tu*b.mau, a.mau*b.tu };
}
SPhanSo operator/(SPhanSo a, int n)
{
	return { a.tu, a.mau*n };
}
SPhanSo operator/(int n, SPhanSo a)
{
	return { n*a.mau, a.tu };
}

SPhanSo operator+=(SPhanSo &a, SPhanSo b)
{
	a.tu = a.tu*b.mau + b.tu*a.mau;
	a.mau = a.mau*b.mau;
	return a;
}
SPhanSo operator+=(SPhanSo &a, int n)
{
	a.tu = a.tu + n*a.mau;
	return a;
}
SPhanSo operator+=(float &n, SPhanSo a)
{
	n = (float)((n*a.mau + a.tu) / a.mau);
	return { (int)(n*a.mau + a.tu) , a.mau};

}

SPhanSo operator-=(SPhanSo &a, SPhanSo b)
{
	a.tu = a.tu*b.mau - b.tu*a.mau;
	a.mau = a.mau*b.mau;
	return a;
}
SPhanSo operator-=(SPhanSo &a, int n)
{
	a.tu = a.tu - n*a.mau;
	return a;
}
SPhanSo operator-=(float &n, SPhanSo a)
{
	n = (float)((n*a.mau + a.tu) / a.mau);
	return { (int)(n*a.mau + a.tu) , a.mau };
}

SPhanSo operator*=(SPhanSo &a, SPhanSo b)
{
	a.tu *= b.tu;
	a.mau *= b.mau;
	return a;
}
SPhanSo operator*=(SPhanSo &a, int b)
{
	a.tu *= b;
	return a;
}
SPhanSo operator*=(float &a, SPhanSo b)
{
	a = (float)a*b.tu / b.mau;
	return { (int)a*b.tu, b.mau };
}

SPhanSo operator/=(SPhanSo &a, SPhanSo b)
{
	a.tu *= b.mau;
	a.mau *= b.tu;
	return a;
}
SPhanSo operator/=(SPhanSo &a, int n)
{
	a.mau *= n;
	return a;
}
SPhanSo operator/=(float &n, SPhanSo a)
{
	n = (float)(n*a.mau / a.tu);
	return { (int)n*a.mau,a.tu };
}
#pragma endregion

#pragma region SoSanh
bool operator>(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu / a.mau) > ((float)b.tu / b.mau);
}
bool operator<(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu / a.mau) < ((float)b.tu / b.mau);
}
bool operator<=(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu / a.mau) <= ((float)b.tu / b.mau);
}
bool operator>=(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu / a.mau) >= ((float)b.tu / b.mau);
}
bool operator==(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu/ a.mau) == ((float)b.tu/ b.mau);
}
bool operator!=(SPhanSo a, SPhanSo b)
{
	return ((float)a.tu / a.mau) != ((float)b.tu / b.mau);
}

bool operator>(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) > b;
}
bool operator<(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) < b;
}
bool operator<=(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) <= b;
}
bool operator>=(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) >= b;
}
bool operator==(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) == b;
}
bool operator!=(SPhanSo a, int b)
{
	return ((float)a.tu / a.mau) != b;
}

bool operator>(int a, SPhanSo b)
{
	return a > ((float)b.tu / b.mau);
}
bool operator<(int a, SPhanSo b)
{
	return a < ((float)b.tu / b.mau);
}
bool operator<=(int a, SPhanSo b)
{
	return a <= ((float)b.tu / b.mau);
}
bool operator>=(int a, SPhanSo b)
{
	return a >= ((float)b.tu / b.mau);
}
bool operator==(int a, SPhanSo b)
{
	return a == ((float)b.tu / b.mau);
}
bool operator!=(int a, SPhanSo b)
{
	return a != ((float)b.tu / b.mau);
}
#pragma endregion



