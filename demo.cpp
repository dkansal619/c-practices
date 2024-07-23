#include <iostream>
using namespace std;

int main()
{
   //    int x=5;
   //   // float y=14/(float)x;
   //    float y = 14/static_cast<float>(x);
   //    cout<<endl<<y;
   int ans;
   int a[] = {2, 4, 5, 9, 1};
   bool arr[] = {false, false, false, false, false};
   for (int i = 0; i < 5; i++)
   {
      if (a[i] >= 0)
      {
         arr[a[i]] = true;
      }
   }
   for (int i = 1; i < 5; i++)
   {
      if (arr[i] == false)
      {
         ans = i;
         break;
      }
   }
   cout << "The missing number is: " << ans;
}
