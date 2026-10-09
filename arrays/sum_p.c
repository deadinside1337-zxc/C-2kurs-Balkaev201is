//сумма положительных
#include <stdio.h>

int main() {
	int a[100];
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			sum += a[i];
		}
	}
	
	printf("%d", sum);
	return 0;
}
