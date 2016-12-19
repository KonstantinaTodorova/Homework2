#include <iostream>

using namespace std;
void swap (int* pointer1, int* pointer2)
{

  int temp = *pointer1;
  *pointer1 = *pointer2;
  *pointer2 = temp;

}

int main()
{
   // Задача 1
   int x = 5 , y = 9;

   swap (&x, &y);
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;




    return 0;
}
