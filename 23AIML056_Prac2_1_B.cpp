// Implement Selection Sort
#include <iostream>
using namespace std;
void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_idx])
                min_idx = j;
        swap(a[min_idx], a[i]);
    }
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}