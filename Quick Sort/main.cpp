#include <iostream>
using namespace std;

int partition(int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}
void quickSort(int *arr, int low, int high)
{
	int pivot;
	if (low < high)
	{
		pivot = partition(arr, low, high);
		quickSort(arr, low, pivot - 1);
		quickSort(arr, pivot + 1, high);
	}

}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}

int main()
{
	int size = 0;
	int* arr = new int[size];
	cout << "Enter the number of values you'd like to sort: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter value " << i + 1<<": ";
		cin >> *(arr + i);
	}
	cout << "Unsorted Array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "   ";
	}


	quickSort(arr, 0, size - 1);
	cout << endl<< "Sorted Array: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "   ";
	}
}
