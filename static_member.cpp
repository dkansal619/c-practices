#include <iostream>
using namespace std;
class test
{
private:
    int no;
    static int count;

public:
    void set_no(void);
    void disp_no(void);
    static void dispcount(void);
};
void test::set_no(void)
{
    no = ++count;
}
void test::disp_no(void)
{
    cout << "object number  " << no << endl;
}
void test::dispcount(void)
{
    cout << "counter" << count << endl;
}
int test ::count;
int main()
{
    test obj1, obj2, obj3;
    obj1.set_no();
    obj2.set_no();
    test::dispcount();
    obj3.set_no();
    test::dispcount();
    obj1.disp_no();
    obj2.disp_no();
    obj3.disp_no();

    return 0;
}