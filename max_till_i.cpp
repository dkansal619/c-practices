#include<iostream>
using namespace std;

int main()
{   // Find the maximum till i and print maximum number
    int a[]={1,0,5,4,6,8};
    int mx=a[0];    //we could have done like this---int max=-99999;
    for (int i = 0; i < 6; i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}   