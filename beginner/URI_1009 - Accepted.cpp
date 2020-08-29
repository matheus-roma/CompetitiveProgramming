#include <bits/stdc++.h>

using namespace std;

int main() { 
	double salary, amount, total;
	string name;

	getline(cin, name);

	scanf("%lf", &salary);
	scanf("%lf", &amount);

	total = salary + (amount * 0.15);
	printf("TOTAL = R$ %.2f\n", total);	

  return 0;
}
