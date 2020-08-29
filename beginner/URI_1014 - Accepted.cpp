#include <bits/stdc++.h>
using namespace std;

int main(){
	int X;
	float Y, consume;
	
	scanf ("%d", &X);
	scanf ("%f", &Y);
	
	consume  = X/Y;
	printf("%.3f km/l\n", consume);
	return 0;
}
