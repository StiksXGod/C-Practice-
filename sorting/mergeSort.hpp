#include <iostream>
#include <vector>
using namespace std;
/*

Best: O(n*log n)
Average: O(n*log n)
Worst: O(n*log n)
Space auxiliar: O(n)

*/


void mergeSort(int *a, size_t start, size_t end){
    if (end - start < 2)
    {
        return;
    }else if(end - start==2){
        if (a[start]>a[start+1])
        {
            int temp = a[start];
            a[start] = a[start+1];
            a[start+1] = temp;
        }
        return;
    }
    mergeSort(a, start, start + (end-start)/2);
    mergeSort(a, start + (end-start)/2, end);
    vector<int> b;
    size_t b1 = start;
    size_t e1 = start+(end-start)/2;
    size_t b2 = e1;
    while(b.size()<end-start ){

        if ((a[b2] < a[b1] && b2<end) || b1>=e1)
        {
            b.push_back(a[b2]);
            b2++;
        }else{
            b.push_back(a[b1]);
            b1++;
        }
        
    }
    for (size_t i = start; i < end; i++)
    {
        a[i] = b[i-start];
    }
    
 

    
}
