#include<iostream>
using namespace std;
//                                              GOOGLE KICKSTART QUESTION 
//                                          LONGEST ARITHMETIC SUBARRAY LENTH
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
    int ans=2;
    int curr=2;
    int j=2;
    int pd=arr[1]-arr[0];
    while (j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
    
        ans=max(ans,curr);
        j++;
    }

    
    cout<<"The length of the longest arithmatic subarray is :"<<ans;
    return 0;
}