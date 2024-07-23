#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int low, mid, high;
    low= 0, high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]==key)
        { return mid;
            /* code */
        }
        else if( arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
    }
    return -1;
}
int main()
{
    
    int n, key;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];

    }
    cout<<"enter the element whose index you want to find: ";
    cin>>key;
    cout<<binarySearch(arr,n,key);

    
    return 0;
}