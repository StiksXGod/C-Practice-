#include <iostream>
/*

Best: O(n)
Average: O(n^2)
Worst: O(n^2)
Space auxiliar: O(1)

*/


void shakerSort(int *mass, int size){
    int low = 0, up = size-1;
    int last;

    while(low<up){
        last = -1;
        for (int i = low; i < up; i++)
        {
            if (mass[i]>mass[i+1])
            {
                int temp = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = temp;
                last = i; 
            }
            
        }
        if (last==-1) break;
        up = last;
        
        for (int i = up; i >= low; i--)
        {
            if (mass[i]>mass[i+1])
            {
                int temp = mass[i];
                mass[i] = mass[i+1];
                mass[i+1] = temp;
                last = i; 
            }
        }
        low = last+1;

    }
}