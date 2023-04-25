#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	long long Fn, Sn;
	char x;
	cin >> Fn >> x >> Sn;
	switch (x) {
	case '+':
		cout << Fn + Sn;
		break;
	case '-':
		cout << Fn - Sn;
		break;
	case '*':
		cout << Fn * Sn;
		break;
	case '/':
		cout << Fn / Sn;
		break;
	default:
		cout << "error";
	}
}