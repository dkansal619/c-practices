#include<iostream>
using namespace std;
// returning by refrence
int x;
int& ref(void){
    return x;
}
int main()
{
    ref()=78;
    cout<<"the value of x is : "<< x<<endl;
    
    return 0;
}