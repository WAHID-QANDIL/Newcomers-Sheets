#include <iostream>
using namespace std;
int main()
{
  
	long long A, A1;
	cin >> A >> A1;
	if (A % A1 == 0 || A1 % A == 0 )
	{
		cout << "Multiples";
	}
	else
	{
		cout << "No Multiples";
	}
}