#include <iostream>
#include <vector>

#define MAX_NUM 10e5

using namespace std;


int dijkstra(vector <vector <int>> &matrix){
    short int N,S,F;
    cin >> N >> S >> F;
    vector <int> visited(N+1,0);
    vector <int> dist(N+1,MAX_NUM);
    int minn = 700000;
    short int index = -1;
    int now = S;
    dist[S] = 0;
    for (int i = 1; i < N+1; i++)
    {
        visited[now] = 1;
        for (int j = 1; j < N+1; j++)
        {
            if (matrix[now][j]==-1 or matrix[now][j]==0){
                continue;
            }
            dist[j] = min(dist[j], dist[now]+matrix[now][j]);
        }

        minn = 700000;
        for (int i = 1; i < N+1 ; i++)
        {
            if (dist[i]<minn and visited[i]==0)
            {
                minn = dist[i];
                index = i;
            }
            

        }
        if (index==-1){
            break;

        }
        now = index;
    }
    if (dist[F]==MAX_NUM){
        return -1;
    }
    return dist[F];
    
}