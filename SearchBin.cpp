#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int low, high, mid;
    low = 0, high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << " enter the value whose index you want to  get: ";
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key);

    return 0;
}