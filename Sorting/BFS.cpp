#include <bits\stdc++.h>
#include <queue>
using namespace std;

#define NEG_INF -999999
#define WHITE 1 //unvisited node
#define GRAY 2  //current node
#define BLACK 3 //visited node

int adj[100][100]; // For store neighbor
int color[100];    // Store defined color code
int parent[100];   // Store parent
int dis[100];      // Store distance from parent to current node

int node, edge; //

void bfs(int start)
{
    for (int i = 1; i <= node; ++i)
    {
        color[i] = WHITE;
        dis[i] = NEG_INF;
        parent[i] = -1;
    }

    parent[start] = -1; // There is no perent of starting node so initialize it by -1
    dis[start] = 0;     // distance from starting node to starting node is obviously 0

    queue<int> q;
    q.push(start); //Push starting node in queue

    while (!q.empty()) // as long as queue is not empty
    {
        int x;
        x = q.front();
        q.pop();
        color[x] = GRAY;

        printf("Visited node: %d\n", x);

        for (int i = 1; i <= node; ++i) // this loop is for checking neighbor
        {
            if (adj[x][i] == 1) // neighbor of x is i
            {
                if (color[i] == WHITE) // x node is the parent of i node
                {
                    dis[i] = dis[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }
        color[x] = BLACK;
    }
}

int main()
{
    cout << "Enter Number of node and edge: ";
    scanf("%d %d", &node, &edge);

    int n1, n2;

    for (int i = 1; i <= edge; i++) //checking neighbor
    {
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    /*for (int i = 1; i <= edge; i++)  //adjacent table
    {
        for (int j = 1; j <= node; j++)
        {
            printf("%d  ", adj[i][j]);
        }
        printf("\n");
    }*/

    int start;
    printf("Enter starting node: ");
    scanf("%d", &start);

    bfs(start); //call bfs function with starting node

    for (int i = 1; i <= node; i++)
    {
        printf("Parent of node %d is: %d\n", i, parent[i]);
    }

    for (int i = 1; i <= node; i++)
    {
        printf("Distance from starting node %d to %d: %d\n", start, i, dis[i]);
    }
}
/*
input:
8 7
1 2
1 3
2 4
3 5
3 6
4 7
4 8
*/