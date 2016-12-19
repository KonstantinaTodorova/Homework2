#include <iostream>

using namespace std;
const int SIZE = 100;
void initArray (int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr [" << i << "]=";
        cin >> arr[i];
    }
}
void reverseArray (int* arr, int size)
{

   for (int i = size - 1; i >= 0; i--)
   {
      cout << arr[i];
   }
}
int main()
{
  int arr [SIZE],size;
  cout << "Enter a number: ";
  cin >> size;
  initArray(arr,size);
  reverseArray(arr,size);

    return 0;
}
