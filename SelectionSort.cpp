#include <iostream>
using namespace std;
void selectionSort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int indexofMin = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin=j;
                // int temp = arr[i];
                // arr[i] = arr[j];
                // arr[j] = temp;

            }
        }
        //swaping of a[i] and a[indexofMin]
        int temp= arr[i];
        arr[i]=arr[indexofMin];
        arr[indexofMin]=temp;

    }
}
int main()
{ // time complexity of the selction sort is O(n*n)
    int arr[] = {8, 0, 7, 1, 3, 88, 2, 5, 52, 999, 400, 74, 32};
    int length = sizeof(arr) / sizeof(int);
    cout << "The lenth of the array is: " << length << endl;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
    cout << "After selection sort the array gets sorted as follows: " << endl;
    selectionSort(arr, length);
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << "   ";
    }

    return 0;
}