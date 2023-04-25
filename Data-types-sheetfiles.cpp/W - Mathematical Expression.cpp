#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	double Fn, Sn, res;
	char ch, Rch;
	cin >> Fn >> ch >> Sn >> Rch >> res;
	if (ch=='+')
	{
		if (Fn + Sn ==res)
		{
			cout << "Yes";
		}
		else
		{
			cout << Fn + Sn;
		}
 
	}
	else if (ch=='*')
	{
		if (Fn * Sn == res)
		{
			cout << "Yes";
		}
		else
		{
			cout << Fn * Sn;
		}
 
	}
	else if (ch=='-')
	{
		if (Fn - Sn == res)
		{
			cout << "Yes";
		}
		else
		{
			cout << Fn - Sn;
		}
	}
	
 
 
}