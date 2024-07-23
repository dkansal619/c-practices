#include <iostream>
using namespace std;
int binaryTodecimal(int num)
{
    int sum = 0;
    int   x = 1;
    while (num > 0)
    {
        int temp = num % 10;
        sum = sum + x * temp;
        num = num / 10;
        x = x * 2;
    }
    return sum;
}

int main()
{
    int binaryNum;
    cout<<"enter the number in binary form whose value you want to find"<<endl;
    cin >> binaryNum;
    int result;
    result = binaryTodecimal(binaryNum);
    cout << "The value of the given binary number in decimal is " << result;
    return 0;
}