#include <iostream>
/*

Best: O(n^2)
Average: O(n^2)
Worst: O(n^2)
Space auxiliar: O(1)

*/



void selectionSort(int *arr, int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    
}