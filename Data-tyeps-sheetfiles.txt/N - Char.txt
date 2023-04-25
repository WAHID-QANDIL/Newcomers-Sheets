#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch>=97 && ch<= 122)
	{
		ch -= 32;
	}
	else if (ch>=65 && ch<=90)
	{
		ch += 32;
 
	}
	cout << ch;
}