#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array :"<<endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // main logic for printing the sum of the subarray of the given array
    //
    
    int sum = 0;
    for (int i = 0; i < n; i++)//outer loop for passes
    {
        sum = 0;//need to do that because every time we complete one pass, we start again with sum = 0;
        for (int j = i; j < n; j++)// main loop for calculating the sum 
        {
            sum = sum + arr[j];
            cout << sum << endl;
            
        }
    }

    return 0;
}