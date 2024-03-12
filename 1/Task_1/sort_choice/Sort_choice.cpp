#include <iostream>
#include <chrono>

void m_swap(int* arr, int i_1, int i_2) {
	int tmp = arr[i_1];
	arr[i_1] = arr[i_2];
	arr[i_2] = tmp;
}

void sort_choice(int arr[], int size) {
	int i_mn = 0;
	for (int i = 0; i < size; ++i) {
		i_mn = i;
		for (int j = i + 1; j < size; ++j) {
			if (arr[j] < arr[i_mn]) {
				i_mn = j;
			}
		}
		if (i != i_mn)
			m_swap(arr, i, i_mn);
	}
}


int quick_recursion(int arr[], int start, int end) {
	int piv = arr[start], cnt = 0;
	for (int i = start + 1; i <= end; ++i) {
		if (arr[i] < piv)
			++cnt;
	}
	int pivIndex = start + cnt;
	m_swap(arr, pivIndex, start);

	int i = start, j = end;
	while (i<pivIndex && j > pivIndex) {
		while (arr[i] <= piv)
			++i;
		while (arr[j] > piv)
			--j;
		if (i<piv && j > pivIndex)
			m_swap(arr, i++, j--);
	}
	return pivIndex;
}

void quick_sort(int arr[], int start, int end) {
	if (start >= end)
		return;
	int p = quick_recursion(arr, start, end);
	quick_sort(arr, start, p - 1);
	quick_sort(arr, p + 1, end);
}

int main() {

	int* arr, size;
	std::cin >> size;
	arr = new int[size];
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	quick_sort(arr, 0,size-1);
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}

	return 0;
}