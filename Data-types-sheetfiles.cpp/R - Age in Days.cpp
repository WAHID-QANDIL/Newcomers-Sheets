#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	int d, years, months, dayes ;
	cin >> d;
	years = d / 365;
	d = d % 365;
	months = d / 30;
	dayes = d % 30;
	cout << years << " years" << endl << months << " months" << endl << dayes << " days" << endl;
 
}