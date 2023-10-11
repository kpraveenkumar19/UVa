#include<stdio.h>
int main() {
	int n = 0, A[10001], tmp, i;
	while(scanf("%d", &tmp) == 1) {
		for(i = n-1; i >= 0; i--)
			if(A[i] > tmp)
				A[i+1] = A[i];
			else	break;
		A[i+1] = tmp;
		n++;
		if(n&1)
			printf("%d\n", (A[n/2-1] + A[n/2])/2);
		else
			printf("%d\n", A[n/2-1]);
	}
    return 0;
}
