#include <iostream>

using namespace std;
const int SIZE = 100;
void initArray(int arr[], int size)
{
    for(int i = 0; i < size ; i++)
    {
        cout << "arr [" << i << "]=";
        cin >> arr[i];
    }
}
int* findTheNumber(int* arr , int size, int num)
{
    int min = 0, max = size - 1;
    while(min <= max)
    {
        int mid = (min + max) / 2;
        if(arr[mid] > num)
        {
            max == mid - 1;
        }
        if (arr[mid] < num)
        {
            min == mid - 1;
        }
        else
        {
            return &arr[mid];
        }
    }
    return NULL;
}

int main()
{
    int arr[SIZE] , size, num;
    cout << "Enter the size of the array : " ;
    cin >> size;
    cout << "Now enter a integer number : " ;
    cin >> num;
    initArray(arr, size);
    cout << findTheNumber(arr, size, num);

    return 0;
}
