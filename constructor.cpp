#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex();
    void printNumber(void);
};
void complex::printNumber()
{
    cout<<"the value of a and b is "<<a <<" "<<b<<endl;
}
complex ::complex()
{
    a = 1;
    b = 20;
}
int main()

  {  complex obj1, obj2, obj3;
    obj1.printNumber();
    obj2.printNumber();
    obj3.printNumber();


    return 0;
}