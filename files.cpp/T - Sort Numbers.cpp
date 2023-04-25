#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	long long  Fn, Sn, Tn, min, mid, max;
	char ch;
	cin >> Fn >> Sn >> Tn;
 
	if (Fn>=Sn&&Fn>=Tn)
	{
		max = Fn;
		if (Sn >= Tn)
		{
			mid = Sn;
			min = Tn;
		}
		else if (Sn < Tn)
		{
			mid = Tn;
			min = Sn;
		}
	}
	else if(Sn >= Fn && Sn >= Tn)
	{
		max = Sn;
		if (Fn >= Tn)
		{
			mid = Fn;
			min = Tn;
		}
		else if (Fn < Tn)
		{
			mid = Tn;
			min = Fn;
		}
	}
	else if (Tn >= Fn && Tn >= Sn)
	{
		max = Tn;
		if (Sn >= Fn)
		{
			mid = Sn;
			min = Fn;
		}
		else if (Sn < Fn)
		{
			mid = Fn;
			min = Sn;
		}
	}
	cout << min << endl << mid << endl << max << endl;
	cout << endl << Fn << endl << Sn << endl << Tn << endl;
}