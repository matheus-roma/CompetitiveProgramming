#include <bits/stdc++.h>
using namespace std;

int main(){

	int value;
	int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;	
	
	scanf ("%d", &value);
	printf("%d\n", value);

	nota100 = value/100;
	value = value % 100;

	nota50 = value/50;
	value = value % 50;

	nota20 = value/20;
	value = value % 20;

	nota10 = value/10;
	value = value % 10;

	nota5 = value/5;
	value = value % 5;

	nota2 = value/2;
	value = value % 2;

	nota1 = value;
	
	
	printf("%d nota(s) de R$ 100,00\n", nota100);
	printf("%d nota(s) de R$ 50,00\n", nota50);
	printf("%d nota(s) de R$ 20,00\n", nota20);
	printf("%d nota(s) de R$ 10,00\n", nota10);
	printf("%d nota(s) de R$ 5,00\n", nota5);
	printf("%d nota(s) de R$ 2,00\n", nota2);
	printf("%d nota(s) de R$ 1,00\n", nota1);

	return 0;
}
