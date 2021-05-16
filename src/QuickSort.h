#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <stdexcept>

template <typename T>
void QuickSort(T* arr, size_t size)
{
	T& mid = arr[size / 2];

	int i = 0;
	int j = size - 1;
	
	do
	{
		while (arr[i] < mid)
			i++;
	
		while (arr[j] > mid)
			j--;
	
		if (i <= j)
			std::swap(arr[i++], arr[j--]);
	}
	while (i <= j);
	
	if (j > 0)
		QuickSort<T>(arr, j + 1);
	
	if (i < size)
		QuickSort<T>(arr + i, size - i);
}

#endif