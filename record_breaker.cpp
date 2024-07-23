#include<iostream>

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
                    //ANOTHER APPROACH FOR RECORD BREAKING
    int mx=arr[0];
    int RecBr;
    int counter=1;
    for (int i = 0; i < n; i++)
    {
        mx=max(arr[i], mx);
        if((mx==arr[n-1] || arr[i]> counter) && arr[i]>= mx)
        {
            RecBr= counter;
            cout<<RecBr<<endl;
        }
        counter++;
    }
    


                     //APPROAACH BY APNA COLLEGE 

    // int mx=arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]>mx && arr[i]> arr[i+1])
    //     {
    //         mx=max(mx, arr[i]);
    //     }
        
    // }
    // cout<<"Record breaking day is : "<<
    
    return 0;
}