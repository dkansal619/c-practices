#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number in decimal :";
    cin >> n;

    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        ans = ans + (n % 2) * x;
        n = n / 2;
        x = x * 10;
    }
    cout << ans;
    return 0;
}