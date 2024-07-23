#include <iostream>
using namespace std;
void insertionSort(int arr[], int length)
{   
    for (int i = 1; i <= length - 1; i++) // for number of passes
    {
        int key, j;
        key = arr[i];

        j = i - 1;
        while (arr[j] > key && j >= 0) // what we are doing in each pass
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {1, 2, 12, 4, 83, 45, 9};
    int length = sizeof(arr) / sizeof(int);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    cout << "After insertion sort the array gets sorted as follows: " << endl;
    insertionSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "   ";
    }
    return 0;
}