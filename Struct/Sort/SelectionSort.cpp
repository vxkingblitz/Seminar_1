#include "SelectionSort.h"

template<typename T>
void SelectionSort(T arr[], int n) {
	for (int i = 0; i < n; i++)
	{

		int min_poz = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[min_poz]) {
				min_poz = j;

			}
		}
		if (arr[i] != arr[min_poz]) {
			T tmp = arr[i];
			arr[i] = arr[min_poz];
			arr[min_poz] = tmp;

		}

	}
}

template void SelectionSort<int>(int[], int);
template void SelectionSort<double>(double[], int);