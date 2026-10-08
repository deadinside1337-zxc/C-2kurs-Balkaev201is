#include <stdio.h>

/* Вывод массива на экран */
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/* Сортировка массива методом пузырька */
void sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int a[10];
	int n;
	
	printf("Введите количество элементов (1-10): ");
	if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
		printf("Некорректный ввод\n");
		return 1;
	}
	
	printf("Введите %d чисел: ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	sort(a, n);
	print(a, n);
	
	return 0;
}
