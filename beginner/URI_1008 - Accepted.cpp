#include <bits/stdc++.h>

using namespace std;
 
int main() { 
	double salary, Enum, timeWorked, amount;
	scanf("%f", &Enum);
	scanf("%f", &timeWorked);
	scanf("%f", &amount);
	salary = timeWorked * amount;
	printf("NUMBER = %.2f \nSALARY = U$ %.2f\n", Enum, salary);	
  return 0;
}
