#include"Header.h"
using namespace std;

int main()
{
	SPhanSo a = { 1,3 }, b = { -2,5 };
	float n = -1;

	//cout << "\na (phan so): ";														//Nhập xuất
	//cin >> a;
	//cout << "\nb (phan so): ";
	//cin >> b;
	//cout << "\nn (so nguyen): ";
	//cin >> n;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "n = " << n << endl;
	
	SPhanSo a_copy = a;
	cout << "\n=====TANG GIAM PHAN SO=====" << endl;									//Tăng giảm phân số (++,--)
	a_copy++;
	cout << "a++, a = " << a_copy << endl;
	a_copy = a;
	a_copy--;
	cout << "a--, a = " << a_copy << endl;
	a_copy = a;
	++a_copy;
	cout << "++a, a = " << a_copy << endl;
	a_copy = a;
	--a_copy;
	cout << "--a, a = " << --a_copy << endl;
	a_copy = a;

	cout << "\n=====NGHICH DAO PHAN SO=====" << endl;									//Nghịch đảo phân số (~)
	cout << "~a = " << ~a << endl;

	cout << "\n=====DOI DAU PHAN SO=====" << endl;										//Đổi dấu ps (-a)
	cout << "-a = " << -a << endl;

	cout << "\n=====PHAN SO - PHAN SO=====" << endl;
	cout << "a + b = " << a << " + " << b << " = " << a + b << endl;					//+,-,*,/ a(ps)-b(ps)
	cout << "a - b = " << a << " - " << b << " = " << a - b << endl;
	cout << "a * b = " << a << " * " << b << " = " << a*b << endl;
	cout << "a / b = " << a << " / " << b << " = " << a / b << endl;
	cout << a << ((a > b) ? " > " : ((a == b) ? " = " : " < ")) << b << endl;			//so sánh(>,<,=) a(ps)-b(ps)
	
	cout << "\n=====PHAN SO - SO NGUYEN=====" << endl;
	cout << "a + n = " << a << " + " << n << " = " << a + n << endl;					//+,-,*,/ a(ps)-n(số nguyên)
	cout << "a - n = " << a << " - " << n << " = " << a - n << endl;
	cout << "a * n = " << a << " * " << n << " = " << a*n << endl;
	cout << "a / n = " << a << " / " << n << " = " << a / n << endl;
	cout << a << ((a > n) ? " > " : ((a == n) ? " = " : " < ")) << n << endl;			//so sánh(>,<.=) a(ps)-n(số nguyên)

	cout << "\n=====SO NGUYEN - PHAN SO=====" << endl;
	cout << "n + b = " << n << " + " << b << " = " << n + b << endl;					//+,-,*,/ a(ps)-n(số nguyên)
	cout << "n - b = " << n << " - " << b << " = " << n - b << endl;
	cout << "n * b = " << n << " * " << b << " = " << n*b << endl;
	cout << "n / b = " << n << " / " << b << " = " << n / b << endl;
	cout << n << ((n > b) ? " > " : ((a == b) ? " = " : " < ")) << b << endl;			//so sánh(>,<.=) a(số nguyên)-n(ps)
	
	cout << "\n=====PHAN SO (+=,-=,*=,/=) PHAN SO=====" << endl;						//+=,-=,*=,/= a(ps)-b(ps)
	cout << "a += b, a = " << (a_copy += b) << endl;
	a_copy = a;
	cout << "a -= b, a = " << (a_copy -= b) << endl;
	a_copy = a;
	cout << "a *= b, a = " << (a_copy *= b) << endl;
	a_copy = a;
	cout << "a /= b, a = " << (a_copy /= b) << endl;
	a_copy = a;

	cout<< "\n=====PHAN SO (+=,-=,*=,/=) SO NGUYEN=====" << endl;						//+=,-=,*=,/= a(ps)-n(số nguyên)
	cout << "a += n, a = " << (a_copy += n) << endl;
	a_copy = a;																			//không thay đổi a để tiếp tục các lệnh dưới
	cout << "a -= n, a = " << (a_copy -= n) << endl;
	a_copy = a;
	cout << "a *= n, a = " << (a_copy *= n) << endl;
	a_copy = a;
	cout << "a /= n, a = " << (a_copy /= n) << endl;
	a_copy = a;
	
	cout << "\n=====SO NGUYEN (+=,-=,*=,/=) PHAN SO=====" << endl;						//+=,-=,*=,/= n(số nguyên)-a(ps)
	float n_copy = n;
	cout << "n += a, n = " << (a_copy += a) << endl;
	n_copy = n;
	cout << "n -= a, n = " << (a_copy -= a) << endl;
	n_copy = n;
	cout << "n *= a, n = " << (a_copy *= a) << endl;
	n_copy = n;
	cout << "n /= a, n = " << (a_copy /= a) << endl;
	n_copy = n;

	system("pause");
	return 0;
}