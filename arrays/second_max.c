//поиск второго по элементу массива за один проход


#include <stdio.h>


int main () {
	int arr[100];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int second_max = arr[1];
	for(int i = 1; i < n; i = i + 1) {
		if(max < arr[i]) {
			second_max = max;
			max = arr[i];
		}
		else if(arr[i] > second_max) {
			second_max = arr[i];
			
		}
	}
	printf("%d %d",max, second_max);
	return 0;
}
