#include <iostream>
/*

Best: O(n*log n)
Average: O(n*log n)
Worst: O(n^2)
Space auxiliar: O(log n)/O(n)

*/


void quickSort(int arr[], int left, int right){
    if(left>right) return;
    int pivot = arr[((left+right)/2)];
    int i = left;
    int j = right;
    while(i<=j){
        while(arr[i]<pivot) i++;
        while(arr[j]>pivot) j--;
        if (i<=j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--; 
        }
        
    }
    quickSort(arr,left,j);
    quickSort(arr,i,right);
    
}