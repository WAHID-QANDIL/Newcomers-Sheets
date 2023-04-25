	#include <iostream>
	using namespace std;
	int main()
	{
		long long l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
 
		if (l1 >= l2 &&  r1<=r2)
		{
			if (l1 > r1)
			{
				cout << "-1";
			}
			else
			{
				cout << l1 << ' ' << r1;
			}
		}
		else if (l1 <= l2 && r1 <= r2)
		{
			if (l2 > r1)
			{
				cout << "-1";
			}
			else
			{
				cout << l2 << ' ' << r1;
			}
		}
		else if (l1 <= l2 && r1 >= r2)
		{
			if (l2 > r2)
			{
				cout << "-1";
			}
			else
			{
				cout << l2 << ' ' << r2;
			}
		} 
		else if (l1 >= l2 && r1 >= r2)
		{
			if (l1 > r2)
			{
				cout << "-1";
			}
			else
			{
				cout << l1 << ' ' << r2;
			}
		}
 
 
	}