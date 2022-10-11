#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    int count = 0;
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
        }
        arr[j + 1] = key;
    }
    cout << "the freaquency is" << count << endl;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void random_input(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        arr[i] = rand();
    }

    insertionSort(arr, a);
    printArray(arr, a);
    // N = sizeof(arr) / sizeof(arr[0]);
}

void ascending_input(int arr[], int a)
{
    cout << "**********************************************************************" << endl
         << "ascending inputs" << endl;
    insertionSort(arr, a);
    printArray(arr, a);
}
void descending_input(int arr[], int a)
{
    cout << "**********************************************************************" << endl
         << "descending inputs" << endl;
    int arr1[a];
    for (int i = a, j = 0; i >= 0, j < a; i--, j++)
    {
        arr1[j] = arr[i];
    }
    insertionSort(arr1, a);
    printArray(arr1, a);
}

int main()
{

    int loop_is_on = 1;
    int a;
    cout << "enter the number of elements in array";
    cin >> a;
    int arr[a];

    while (loop_is_on == 1)

    {
        cout << "enter 1  for sorting analysis" << endl;
        cout << "enter 2  to end the loop " << endl;
        int prompt;
        cin >> prompt;
        switch (prompt)
        {
        case 1:
            random_input(arr, a);
            ascending_input(arr, a);
            descending_input(arr, a);
            break;
        case 2:
            loop_is_on = 0;
        }

        // insertionSort(arr, N);
        // printArray(arr, N);
    }
    return 0;
}
