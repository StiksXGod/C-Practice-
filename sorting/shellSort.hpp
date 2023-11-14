#include <iostream>
/*

Best: O(n*log n)
Average: O(n*(log n)^2)
Worst: O(n*(log n)^2)
Space auxiliar: O(1)

*/



void shellSort(int *arr, int n){
    int step = n/2;
    while(step>0){
        for (int i = step; i < n; i++)
        {
            int j = i;
            while(j >= step and arr[j] < arr[j-step]){
                int temp = arr[j];
                arr[j] = arr[j-step];
                arr[j-step] = temp;
                j -= step;
            }
        }
        step = step/2;
    }

}