#include <stdio.h>

#define MAX 5

int visited[MAX] = {0};

void dfs(int graph[MAX][MAX], int v) {
    int i;
    
    printf("%d ", v);
    visited[v] = 1;

    for(i = 0; i < MAX; i++) {
        if(graph[v][i] == 1 && visited[i] == 0) {
            dfs(graph, i);
        }
    }
}

int main() {

    int graph[MAX][MAX] = {
        {0,1,1,0,0},
        {1,0,0,1,1},
        {1,0,0,0,0},
        {0,1,0,0,0},
        {0,1,0,0,0}
    };

    dfs(graph, 0);   // start DFS from vertex 0

    return 0;
}