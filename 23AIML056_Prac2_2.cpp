// Sort an array in linear time if all of its items are in ascending order except for two swapped elements.
#include <iostream>
using namespace std;
void sort(int a[], int n)
{
    int swaps = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
            swaps++;
            if (swaps == 1)
                break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    int array[n];
    cout << "Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}