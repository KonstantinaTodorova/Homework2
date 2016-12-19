#include <iostream>

using namespace std;
const int ROWS = 100, COLS = 100;

void initArray(int arr[][COLS], int rows, int cols)
{
 for (int i = 0; i < rows; i++)
   {
       for (int j = 0; j < cols; j++)
          {
              cout << "arr[" << i << "][" << j << "] = ";
              cin >> arr[i][j];
          }
          cout << endl;
   }

}
void printArray(int arr[][COLS], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << "    ";
    }
    cout << endl;
  }
}
void transposeArray(int arr[][COLS], int rows, int cols)
{
    for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                arr[j][i] == arr[i][j];
                cout << arr[j][i] << "  ";

            }
            cout << endl;
        }

}

int main()
{
   int arr[ROWS][COLS];
   int rows, cols;
   cout << "Enter the number of the rows of the matrix : " ;
   cin >> rows;
   cout << "Enter the number of the cols of the matrix : " ;
   cin >> cols;

   initArray(arr, rows, cols);
   cout << endl;

   printArray(arr, rows, cols);
   cout << endl;

   transposeArray(arr, rows, cols);
   cout << endl;




    return 0;
}
