#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	long long  Fn, Sn;
	char ch;
	cin >> Fn >> ch >> Sn;
 
	if (ch=='>')
	{
		if (Fn>Sn)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (ch=='<')
	{
		if (Fn < Sn)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
	else if (ch == '=')
	{
		if (Fn == Sn)
		{
			cout << "Right";
		}
		else
		{
			cout << "Wrong";
		}
	}
}