#include <bits/stdc++.h>
using namespace std;

int main(){	
	double A, B, C, delta, R1, R2;
	scanf("%lf %lf %lf", &A, &B, &C);
	
	delta = B*B - 4*A*C;
	if (delta < 0){ 
		printf ("Impossivel calcular\n");
	}

	if (A == 0) {
		printf ("Impossivel calcular\n");
		return 0;
	}
	if (delta == 0) {
		R1 = B * (-1)/(2 * A);
		R2 = R1;

		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}

	if (delta > 0){
		R1 = ((B * (-1)) + sqrt (delta) )/(2 * A);
		R2 = ((B * (-1)) - sqrt (delta) )/(2 * A);
		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}

	return 0;
}
