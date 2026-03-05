#include <stdio.h>

#define MAX 100

typedef struct {
    int x, y;
} State;

State queue[MAX];
int front = 0, rear = 0;
int visited[5][5];

void enqueue(State s) {
    queue[rear++] = s;
}

State dequeue() {
    return queue[front++];
}

void bfs() {
    State start = {0,0};
    enqueue(start);
    visited[0][0] = 1;

    while(front < rear) {
        State s = dequeue();
        printf("(%d,%d)\n", s.x, s.y);

        if(s.x == 2) {
            printf("Goal reached!\n");
            return;
        }

        State next[6] = {
            {4, s.y},          
            {s.x, 3},          
            {0, s.y},          
            {s.x, 0},          
            {s.x - (3-s.y < s.x ? 3-s.y : s.x), s.y + (3-s.y < s.x ? 3-s.y : s.x)}, 
            {s.x + (4-s.x < s.y ? 4-s.x : s.y), s.y - (4-s.x < s.y ? 4-s.x : s.y)}
        };

        for(int i=0;i<6;i++) {
            int x = next[i].x;
            int y = next[i].y;

            if(!visited[x][y]) {
                visited[x][y] = 1;
                enqueue(next[i]);
            }
        }
    }
}

int main() {
    printf("BFS Water Jug Problem\n");
    bfs();
}