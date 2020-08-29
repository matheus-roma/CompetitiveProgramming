#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;

int main() { 
	double 	radius, volume;
	
	scanf("%lf", &radius);
	volume = (4.0/3)*pi*radius*radius*radius;
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}
