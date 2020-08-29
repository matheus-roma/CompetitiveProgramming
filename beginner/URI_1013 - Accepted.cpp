#include <bits/stdc++.h>
using namespace std;

int MaiorAB (int a, int b){
	int maior;
	maior = (a+b+abs(a-b))/2;
	return maior;
}
int main(){
	int A,B,C, Maior;
	
	scanf("%d %d %d", &A, &B, &C);
	if (MaiorAB (A,B) == A) Maior = MaiorAB(A,C);
	else Maior = MaiorAB(B,C);
	
	printf("%d eh o maior\n", Maior);
	return 0;
}
