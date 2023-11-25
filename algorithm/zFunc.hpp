#include <iostream>
#include <vector>
using namespace std;


vector<int> zFunc(string s){
    int size = s.size();
    vector <int> z(size,0);
    int l = 0, r = 0;
    for (int i = 1; i < size; i++)
    {
        if (i<=r)
        {
            z[i] = min(r-i+1, z[i-l]);
        }
        while(z[i]+i<size && s[z[i]]==s[z[i]+i]){
            z[i]++;
        }
        if (z[i]+i-1>r)
        {
            r = z[i]+i-1;
            l = i;
        }
        
        
    }

}