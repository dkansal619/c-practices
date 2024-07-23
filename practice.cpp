#include <iostream>
// #include <cmath>
#include <iomanip>
using namespace std;

int main()
{ // double num=1000, ans;
  //     ans=sqrt(num);
  //     cout<<ans;
  // int numb;                          // define loop variable
  // for (numb = 1; numb <= 10; numb++) // loop from 1 to 10
  // {                                  // using setw manipulator by including iomanip header file
  //     cout << setw(4) << numb;       // display 1st column

    //     int cube = numb * numb * numb;   // calculate cube
    //     cout << setw(6) << cube << endl; // display 2nd column
    long dividend, divisor;
    char ch;
    do // start of do loop
    {  // do some processing
        cout << "Enter dividend : ";
        cin >> dividend;
        cout << "Enter divisor : ";
        cin >> divisor;
        cout << "Quotient is " << dividend / divisor;
        cout << " remainder is " << dividend % divisor;
        cout << "\nDo another ? (y / n) : "; // do it again?
        cin >> ch;
    } while (ch != 'n');
    unsigned long n, j;

    // cout << “Enter a number : “;
    // cin >> n;                    // get number to test
    // for (j = 2; j <= n / 2; j++) // divide by every integer from
    //     if (n % j == 0)          // 2 on up; if remainder is 0,
    //     {                        // it’s divisible by j
    //         cout << “It’s not prime; divisible by “ << j << endl;
    //         exit(0); // exit from the program
    //     }
    // cout << “It’s prime\n”

        return 0;
}