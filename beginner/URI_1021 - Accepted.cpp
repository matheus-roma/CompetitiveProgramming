#include <bits/stdc++.h>
using namespace std;

int main(){
	
	double valor;
	int valor_int, mantissa;
	int nota100	 = 0, 
		nota50   = 0,
		nota20	 = 0,
		nota10	 = 0,
		nota5	 = 0,
		nota2	 = 0,
		moeda1	 = 0,	
		moeda050 = 0,
		moeda025 = 0,
		moeda010 = 0,
		moeda005 = 0,
		moeda001 = 0;			
	
	scanf ("%lf", &valor);
	
	valor_int = valor;
	mantissa = (valor - valor_int)*100;

	nota100 = valor_int/100;
	valor_int = valor_int % 100;
	
	nota50 = valor_int/50;
	valor_int = valor_int % 50;
	
	nota20 = valor_int/20;
	valor_int = valor_int % 20;

	nota10 = valor_int/10;
	valor_int = valor_int % 10;

	nota5 = valor_int/5;
	valor_int = valor_int % 5;
	
	nota2 = valor_int/2;
	valor_int = valor_int % 2;


	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
	printf("%d nota(s) de R$ 50.00\n", nota50);
	printf("%d nota(s) de R$ 20.00\n", nota20);
	printf("%d nota(s) de R$ 10.00\n", nota10);		
	printf("%d nota(s) de R$ 5.00\n", nota5);
	printf("%d nota(s) de R$ 2.00\n", nota2);

	moeda1 = valor_int;
	

	moeda050	= mantissa/50;
	mantissa 	= mantissa % 50;
	
	moeda025	= mantissa/25;
	mantissa	= mantissa % 25;

	moeda010	= mantissa/10;
	mantissa	= mantissa % 10;

	moeda005	= mantissa/5;
	mantissa 	= mantissa % 5;

	moeda001	= mantissa/1;
	


	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
	printf("%d moeda(s) de R$ 0.50\n", moeda050);
	printf("%d moeda(s) de R$ 0.25\n", moeda025);
	printf("%d moeda(s) de R$ 0.10\n", moeda010);
	printf("%d moeda(s) de R$ 0.05\n", moeda005);
	printf("%d moeda(s) de R$ 0.01\n", moeda001);

	
	
	return 0;
}
