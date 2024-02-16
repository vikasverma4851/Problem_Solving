#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int secondArray[size];
    for (int i = 0; i < size; i++)
    {
        secondArray[i] = arr[size - 1 - i];
    };

    // print ing the reversed array
    for (int j = 0; j < size; j++)
    {
        cout << secondArray[j] << " ";
    };
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // print reverse array
    reverseArray(arr, size);
};
