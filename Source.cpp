#include <iostream>
using namespace std;
int main() {
	int seccond, hour, min;
	cout << "please inter you time in seccond mode\n";
	cin >> seccond;
	hour = seccond / 3600;
	seccond = seccond % 3600;
	min = seccond / 60;
	seccond = seccond % 60;
	cout << "your time is "<<hour <<" hour and "<<min<<" min and "<<seccond<<" seccond." ;
	}

