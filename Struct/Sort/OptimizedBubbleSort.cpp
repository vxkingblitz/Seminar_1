#include "OptimizedBubbleSort.h"

template<typename T> void OptimizedBubbleSort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swapped = true;
			}
		}
		if (!swapped)
			break;

	}
}

template void OptimizedBubbleSort<int>(int[], int);
template void OptimizedBubbleSort<double>(double[], int);