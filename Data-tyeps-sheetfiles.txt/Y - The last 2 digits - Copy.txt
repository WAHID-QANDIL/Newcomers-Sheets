#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	long long Fn, Sn, Tn, Forn,result;
	cin >> Fn >> Sn >> Tn >> Forn;
	result = ((Fn % 100) * (Sn % 100) * (Tn % 100) * (Forn % 100)) % 100;
 
	if (result<10)
	{
		cout << '0' << result;
	}
	else
	{
		cout << result;
	}
}