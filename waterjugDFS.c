#include <stdio.h>

int visited[5][5];

void dfs(int x, int y) {

    if(visited[x][y])
        return;

    visited[x][y] = 1;

    printf("(%d,%d)\n", x, y);

    if(x == 2) {
        printf("Goal reached!\n");
        return;
    }

    dfs(4, y);   
    dfs(x, 3);   
    dfs(0, y);   
    dfs(x, 0);   

    int pour = (3-y < x) ? 3-y : x;
    dfs(x-pour, y+pour);

    pour = (4-x < y) ? 4-x : y;
    dfs(x+pour, y-pour);
}

int main() {
    printf("DFS Water Jug Problem\n");
    dfs(0,0);
}