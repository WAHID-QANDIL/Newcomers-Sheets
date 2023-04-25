#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
  
	double R;
	cout.precision(9);
	cout << fixed;
	cin >> R;
	cout << (R*R) * (3.141592652);
	
	return 0;
 
}