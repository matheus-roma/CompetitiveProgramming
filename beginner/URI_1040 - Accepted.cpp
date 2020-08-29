#include <bits/stdc++.h>
using namespace std;

int main(){

	float n1,n2,n3,n4;
	float pmedia, nexame;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	pmedia = (n1*2 + n2*3 + n3*4 +n4) / 10;
	if ((pmedia > 5 && pmedia < 7) || (pmedia == 5)){
		printf("Media: %.1f\n", pmedia);
		printf("Aluno em exame.\n");
		scanf("%f", &nexame);
		printf("Nota do exame: %.1f\n", nexame);
		pmedia = (pmedia + nexame)/2;

		if (pmedia > 5 || pmedia == 5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", pmedia);
		}
		if (pmedia < 5) {
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", pmedia);
		}
	}
	else
		if (pmedia > 7 || pmedia == 7){
			printf("Media: %.1f\n", pmedia);
			printf("Aluno aprovado.\n");
		}
		if (pmedia < 5) {
			printf("Media: %.1f\n", pmedia);
			printf("Aluno reprovado.\n");
		}
	
	return 0;
}

