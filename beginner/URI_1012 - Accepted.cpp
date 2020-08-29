#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main(){
	double A,B,C;
	double tri,cir,tra,qua,ret;
	
	scanf("%lf %lf %lf", &A, &B, &C);

	tri = A*C/2;
	cir = C*C*PI;
	tra = (A+B)*C/2;
	qua = B*B;
	ret = A*B;
	
	printf("TRIANGULO: %.3f\n", tri);
	printf("CIRCULO: %.3f\n", cir);
	printf("TRAPEZIO: %.3f\n", tra);
	printf("QUADRADO: %.3f\n", qua);
	printf("RETANGULO: %.3f\n", ret);

	return 0;
}
