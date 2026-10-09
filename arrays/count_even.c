//ищет кол-во четных в массиве
#include <stdio.h>

int main () {
	int a[100];
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i = i + 1) {
		scanf("%d", &a[i]); //ввод массива
	}
	int quantity = 0; //количество
	for(int i = 0; i < n; i = i + 1) {
		if(a[i] % 2 == 0) {  //если элемент массива при целочисленном деление оставляет остаток 0 (четное) значит прибавляется +1 quantity
			quantity = quantity + 1;
		}
	}
	printf("%d", quantity);
	return 0;
}
