#include <bits/stdc++.h>
using namespace std;

int main(){

	float total = 0;
	float value;
	int choice, qtd;
	scanf("%d %d", &choice, &qtd);

	switch (choice){
		case (1): value = 4.00; break;
		case (2): value = 4.50; break;
		case (3): value = 5.00; break;
		case (4): value = 2.00; break;
		case (5): value = 1.50;	break;
	}

	total = qtd * value;
	printf("Total: R$ %.2f\n", total);

	return 0;
}


