#include<bits/stdc++.h>
using namespace std;
     // Given an array of size N. The task is to find the first repeating element in the array of integers, i.e, an element that occurs more than once
     // and whose index of first occurence is the smallest

                //     AMAZON, ORACLE me pucha gya svaal
                

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
    int N= 1e3;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i]=-1;
    }
    int minIdx= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]]!=-1)
        {
                minIdx=min(minIdx, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }
        
        
    }
    if (minIdx==INT_MAX)
    {
            cout<<"NO REPEATING ELEMENT FOUND\n";
    }
    else{
        cout<<"The real index of the first repeating element is "<<minIdx+1;
    }
    
    

    
    return 0;
}