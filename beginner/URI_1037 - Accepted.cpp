#include <bits/stdc++.h>
using namespace std;

int main(){

	double input;
	scanf("%lf", &input);

	if (input < 0 ){
		printf("Fora de intervalo\n");
		return 0;
	}
	else
		if (input < 25 || input == 25){
			printf("Intervalo [0,25]\n");
			return 0;
		}
		if (input > 25 && (input < 50 || input == 50)){
			printf("Intervalo (25,50]\n");
			return 0;
		}
		if (input > 50 && (input < 75 || input == 75)){
			printf("Intervalo (50,75]\n");
			return 0;
		}
		if (input > 75 && (input < 100 || input == 100)){
			printf("Intervalo (75,100]\n");
			return 0;
		}
		else
			printf("Fora de intervalo\n");
	return 0;
}


