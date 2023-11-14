#include <iostream>
/*

Best: O(n)
Average: O(n^2)
Worst: O(n^2)
Space auxiliar: O(1)

*/

void insertionSort(int *arr, int n){
    int element, j;
    for (int i = 1; i < n; i++)
    {
        element = arr[i];
        j = i;
        while(j>0 and arr[j-1]>element){
            arr[j] = arr[j-1];
            j = j-1;
        }
        arr[j] = element;
    }
}