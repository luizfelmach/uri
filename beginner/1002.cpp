#include <bits/stdc++.h>

#define PI 3.14159
using namespace std;

int main() {
	double radius;
	cin >> radius;
	double area = PI * radius * radius;
	cout << "A=" << fixed << setprecision(4) <<  area << endl;
	return 0;
}
