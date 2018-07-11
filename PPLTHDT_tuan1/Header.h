#pragma once
#include<iostream>
#include<string>
using namespace std;

struct SPhanSo
{
	int tu, mau;
};

istream& operator>>(istream& is, SPhanSo &a);
ostream& operator<<(ostream& os, SPhanSo a);

SPhanSo operator++(SPhanSo &a, int n);
SPhanSo operator--(SPhanSo & a, int n);
SPhanSo operator++(SPhanSo & a);
SPhanSo operator--(SPhanSo &a);

SPhanSo operator-(SPhanSo b);

SPhanSo operator~(SPhanSo a);

SPhanSo operator+(SPhanSo a, SPhanSo b);
SPhanSo operator+(SPhanSo a, int n);
SPhanSo operator+(int n, SPhanSo a);

SPhanSo operator-(SPhanSo a, SPhanSo b);
SPhanSo operator-(SPhanSo a, int n);
SPhanSo operator-(int n, SPhanSo a);

SPhanSo operator*(SPhanSo a, SPhanSo b);
SPhanSo operator*(SPhanSo a, int n);
SPhanSo operator*(int n, SPhanSo a);

SPhanSo operator/(SPhanSo a, SPhanSo b);
SPhanSo operator/(SPhanSo a, int n);
SPhanSo operator/(int n, SPhanSo a);

SPhanSo operator+=(SPhanSo &a, SPhanSo b);
SPhanSo operator+=(SPhanSo &a, int n);
SPhanSo operator+=(float &n, SPhanSo a);

SPhanSo operator-=(SPhanSo &a, SPhanSo b);
SPhanSo operator-=(SPhanSo & a, int n);
SPhanSo operator-=(float & n, SPhanSo a);

SPhanSo operator*=(SPhanSo &a, SPhanSo b);
SPhanSo operator*=(SPhanSo & a, int b);
SPhanSo operator*=(float & a, SPhanSo b);

SPhanSo operator/=(SPhanSo &a, SPhanSo b);
SPhanSo operator/=(SPhanSo & a, int n);
SPhanSo operator/=(float & n, SPhanSo a);

bool operator>(SPhanSo a, SPhanSo b);
bool operator<(SPhanSo a, SPhanSo b);
bool operator<=(SPhanSo a, SPhanSo b);
bool operator>=(SPhanSo a, SPhanSo b);
bool operator==(SPhanSo a, SPhanSo b);
bool operator!=(SPhanSo a, SPhanSo b);

bool operator>(SPhanSo a, int b);
bool operator<(SPhanSo a, int b);
bool operator<=(SPhanSo a, int b);
bool operator>=(SPhanSo a, int b);
bool operator==(SPhanSo a, int b);
bool operator!=(SPhanSo a, int b);

bool operator>(int a, SPhanSo b);
bool operator<(int a, SPhanSo b);
bool operator<=(int a, SPhanSo b);
bool operator>=(int a, SPhanSo b);
bool operator==(int a, SPhanSo b);
bool operator!=(int a, SPhanSo b);
