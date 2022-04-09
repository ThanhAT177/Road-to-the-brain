#include<stdio.h>

int ucln(int a, int b) {
	while(a != b) {
		if(a > b)
			a -= b;
		else b -= a;
		}
	return a;
}

int bcnn(int a, int b) {
	int i = 1, tich;
	for(; i < b; i++) {
		tich = a * i;
		if(tich % b == 0)
			return tich;
	}
	return a * b;
}

int main() {
	int T, a, b;
	do
		scanf("%d", &T);
	while(T < 1 || T > 100);
	while(T--) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", bcnn(a, b), ucln(a, b));
	}
	return 0;
}
