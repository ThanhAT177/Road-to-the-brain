#include<stdio.h>

int main() {
	int i, j, n, k, m, l, o = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			l = 0;
			for(m = 1; m < j; m++) {
				l += m;
			}
//			printf("%d ", l);
//			if(j == 1)
				printf("%d ", i - l                  + (j - 1)*n);
//			if(j == 2)
//				printf("%d ", i - 0 - 1             +  1*n);
//			if(j == 3)
//				printf("%d ", i - 0 - 1 - 2         + 2*n);
//			if(j == 4)
//				printf("%d ", i - 0 - 1 - 2 - 3     + 3*n);
//			if(j == 5)
//				printf("%d ", i - 0 - 1 - 2 - 3 - 4 + 4*n);
		}
		printf("\n");
	}
	return 0;
}
