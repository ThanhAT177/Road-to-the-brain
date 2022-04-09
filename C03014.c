#include<stdio.h>

int ucln(long long a, long long b) {
	while(a != b) {
		if(a > b)
			a -= b;
		else b -= a;
	}
	return a;
}

int main() {
	unsigned char T;
	long long a, b;
	scanf("%d", &T);

	while(T--) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", (a * b) / ucln(a, b), ucln(a, b));
	}
	return 0;
}
