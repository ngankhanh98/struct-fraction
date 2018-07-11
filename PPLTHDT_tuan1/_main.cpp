#include"Header.h"
using namespace std;

int main()
{
	SPhanSo a, b;
	int n;
	char key;
	string s;

#pragma region đầu_vào
	//Nhập số 1:
	cout << "\n\tSo thu 1 (phan so): ";
	cin >> a;

	//Nhập số 2:
	cout << "\tPhan so(0) hay so nguyen(1) ?";
	cin >> key;

	if (key == '0')
	{
		cout << "\tSo thu 2 (phan so): ";
		cin >> b;
	}
	else
	{
		cout << "\tSo thu 2 (so nguyen): ";
		cin >> n;
		b = { n,1 };//Khởi tạo 1 phân số: tử = số nguyên, mẫu = 1;
	}
#pragma endregion

#pragma region lựa_chọn_thao_tác
	//Lựa chọn các thao tác hỗ trợ:
	cout << "\n\tCAC THAO TAC HO TRO" << endl;
	cout << "\t1. Tang, giam (++, --)" << endl;
	cout << "\t2. Dao dau (-)" << endl;
	cout << "\t3. Nghich dao (~)" << endl;
	cout << "\t4. Tinh toan (+, -, *, / )" << endl;
	cout << "\t5. So sanh (<, >, =)" << endl;
	cout << "\t0. Thoat" << endl;

	do
	{
		cout << "\n\tChon tu 0 den 5: ";
		cin >> key;

		switch (key)
		{
		case '1'://Tăng giảm ++, --
		{
			SPhanSo t;
			cout << "\tnhap phep toan:";
			cin >> s;
			cout << "\tKet qua: ";

			if (s == "++a")
			{
				t = ++a;
				cout << "t = ++a,";
			}
			else
			{
				t = --a;
				cout << "t = --a, ";
			}
			cout << "\tt = " << t << ",\ta = " << a << endl;
			break;
		}
		case '2'://Đảo dấu
		{
			cout << "\n\t-a = " << -a << endl;
			break;
		}
		case '3'://Nghịch đảo
		{
			cout << "\n\t~a = " << ~a << endl;
			break;
		}
		case '4'://Tính toán (+,-,*,/)
		{
			//Nhập phép toán (+, -, *, /)
			cout << "\n\tNhap phep toan: ";
			cin >> key;
			cout << "\n\tKet qua: ";
			//Dùng switch thực hiện phép toán được chọn
			switch (key)
			{
			case '+':
			{
				cout << a + b << endl;
				break;
			}
			case '-':
			{
				cout << a - b << endl;
				break;
			}
			case '*':
			{
				cout << a*b << endl;
				break;
			}
			case'/':
			{
				cout << a / b << endl;
				break;
			}
			}
			break;
		}
		case '5'://So sánh a b
		{
			cout << "\n\ta " << ((a > b) ? ">" : ((a == b) ? "==" : "<")) << " b" << endl;
			break;
		}
		default://Thoát
			break;
		}
	} while (key!='0');

	system("pause");
	return 0;
#pragma endregion

}


