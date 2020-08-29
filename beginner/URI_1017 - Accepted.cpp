#include <bits/stdc++.h>
using namespace std;

int main(){

	int time, speed, distance;
	float fuel;
	scanf ("%d", &time);
	scanf ("%d", &speed);
	
	distance = time * speed;
	fuel = distance / 12.0;
	
	printf("%.3f\n", fuel);
	return 0;
}
