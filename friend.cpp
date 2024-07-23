#include<iostream>
using namespace std;
class myclass1{
    int a;
    int b;
    public:
    friend class myclass2;
     void setNumber(void)
     {
        a=5;
        b=6;

     }
    
};
class myclass2{
    public: 
         void showNumber(myclass1 obj2)
         {
            cout<<"the value of a is "<<obj2.a<<" and the value of b is "<<obj2.b;
         }
        
};
int main()
{
    myclass1 obj1;
    obj1.setNumber();
    myclass2 obj2;
    obj2.showNumber(obj1);

    return 0;
}