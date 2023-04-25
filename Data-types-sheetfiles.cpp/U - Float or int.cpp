#include <iostream>
using namespace std;
int main(){
	double n;
	cin >> n;
	if (((int)n)-(n)==0)
	{
		cout << "int " << (int)n;
	}
	else
	{
		cout << "float " << (int)n << ' ' << n - ((int)n);
	}
 
}