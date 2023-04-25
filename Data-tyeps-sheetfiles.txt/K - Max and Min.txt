#include <iostream>
#include<string.h>
using namespace std;
int main()
{
  
	long long A, A1 ,A2 ,max,min;
	cin >> A >> A1>>A2;
	if (A >= A1 && A >= A2 )
	{
		max = A;
		
	}
	else if(A1 >= A && A1 >= A2)
	{
		max = A1;
	}
	else if (A2 >= A1 && A2 >= A)
	{
		max = A2;
	}
 
	if (A <= A1 && A <= A2)
	{
		min = A;
 
	}
	else if (A1 <= A && A1 <= A2)
	{
		min = A1;
	}
	else if (A2 <= A1 && A2 <= A)
	{
		min = A2;
	}
 
	cout << min <<" " << max;
}