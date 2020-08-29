#include <bits/stdc++.h>
using namespace std;

int main(){

	int time, hr, min, seg;
	
	scanf ("%d", &time);
	hr = time/3600;
	time = time % 3600;
	min = time/60;
	time = time % 60;
	seg = time;
	printf("%d:%d:%d\n", hr, min, seg);
	
	return 0;
}
