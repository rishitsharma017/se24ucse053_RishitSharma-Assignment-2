#include <stdio.h>

#define MAX 5

int queue[MAX], front = -1, rear = -1;
int visited[MAX] = {0};

void enqueue(int v) {
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    return queue[front++];
}

void bfs(int graph[MAX][MAX], int start) {
    int i;

    enqueue(start);
    visited[start] = 1;

    while (front <= rear) {
        int v = dequeue();
        printf("%d ", v);

        for (i = 0; i < MAX; i++) {
            if (graph[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
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

    bfs(graph, 0);

    return 0;
}