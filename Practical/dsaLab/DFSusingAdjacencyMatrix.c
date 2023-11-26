#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Function to perform Depth-First Search (DFS) traversal
void dfs(int matrix[MAX][MAX], int visited[MAX], int n, int current) {
    int i;
	printf("%d ", current);
    visited[current] = 1;

    for (i = 0; i < n; i++) {
        if (matrix[current][i] == 1 && !visited[i]) {
            dfs(matrix, visited, n, i);
        }
    }
}

// Function to initialize the adjacency matrix
void initializeMatrix(int matrix[MAX][MAX], int n) {
    int i,j;
	for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
}

// Function to add an edge to the adjacency matrix
void addEdge(int matrix[MAX][MAX], int start, int end) {
    matrix[start][end] = 1;
    matrix[end][start] = 1; // For undirected graph
}

// Driver program
int main() {
    int matrix[MAX][MAX], visited[MAX], n, i, j;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    initializeMatrix(matrix, n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initializing visited array
    for (i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("DFS Traversal starting from vertex 0: ");
    dfs(matrix, visited, n, 0);
    printf("\n");

    return 0;
}
