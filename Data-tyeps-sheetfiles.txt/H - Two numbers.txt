#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	double Fn, Sn;
	cin >> Fn >> Sn;
	cout << "floor " << Fn << " / " << Sn << " = " << floor(Fn / Sn)<<endl;
	cout << "ceil " << Fn << " / " << Sn << " = " << ceil(Fn / Sn)<<endl;
	cout << "round " << Fn << " / " << Sn << " = " << round(Fn / Sn)<<endl;
 
}