#include <stdio.h>

int printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", arr[i]);
	}
}
int razeni(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int bubbleSort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				razeni(&arr[i], &arr[i + 1]);
			}
		}
	}
}
int main() {
	int pole[] = { 1, 7, 9, 5, 3};
	int pole1[] = { 7, 3, 5, 1, 9};
	int kolik = sizeof(pole) / sizeof(pole[0]);
	int kolik1 = sizeof(pole1) / sizeof(pole1[0]);
	bubbleSort(pole, kolik);
	bubbleSort(pole1, kolik1);
	printf("Obe pole obsahuji cisla: ");
	for (int i = 0; i < kolik; i++) {
		for (int j = 0; j < kolik1; j++) {
			if (pole[i] == pole1[j]) printf("%d, ", pole[i]);
		}
	}
}