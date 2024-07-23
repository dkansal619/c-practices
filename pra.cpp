#include<iostream>
using namespace std;
                                // Given an unsorted array A of size N of non-negative integers, find a continuous
                                // subarray which adds to a given number S.

int main()
{
   int n,s;
    cout << "Enter the size of the array :"<<endl;
    cin >> n;
    cout<<"Enter the value of the sum: ";
    cin>>s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // int sum=0;
    // for (int i = 0; i <n ; i++)
    // {
    //     sum=0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum=sum+arr[j];
    //         if (sum==s)
    //         {
    //             cout<<i<<" "<<j;
    //             exit(0);
    //         }
            
    //     }
        
    // }
    // cout<<"COULDN'T FIND THE SUM";
    
    
    
    return 0;
}