#include <iostream>
using namespace std;

const int MAX_N = 100; // Define a maximum size for the maze

// Check if a cell is valid
bool isValid(int row, int col, char maze[MAX_N][MAX_N], int N, int M) {
    return (row >= 0 && row < N && col >= 0 && col < M && maze[row][col] == 'O');
}

// Find path from source (0, 0) to destination (N-1, M-1)
bool findPath(int row, int col, char maze[MAX_N][MAX_N], int path[MAX_N][MAX_N], int N, int M) {
    // If we have reached the destination, mark the cell and return true
    if (row == N - 1 && col == M - 1) {
        path[row][col] = 1;
        return true;
    }

    // Mark the current cell as part of the path
    path[row][col] = 1;

    // Try all possible directions: right, down, left, up
    if (isValid(row, col + 1, maze, N, M) && path[row][col + 1] == 0) {
        if (findPath(row, col + 1, maze, path, N, M)) return true;
    }
    if (isValid(row + 1, col, maze, N, M) && path[row + 1][col] == 0) {
        if (findPath(row + 1, col, maze, path, N, M)) return true;
    }
    if (isValid(row, col - 1, maze, N, M) && path[row][col - 1] == 0) {
        if (findPath(row, col - 1, maze, path, N, M)) return true;
    }
    if (isValid(row - 1, col, maze, N, M) && path[row - 1][col] == 0) {
        if (findPath(row - 1, col, maze, path, N, M)) return true;
    }

    // Unmark the current cell as part of the path
    path[row][col] = 0;
    return false;
}

// Main function
int main() {
    int N, M;
    cout << "Enter the size of the maze (N M): ";
    cin >> N >> M;

    // Initialize the maze
    char maze[MAX_N][MAX_N];
    cout << "Enter the maze (O for open, X for blocked):" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    // Initialize the path maze
    int path[MAX_N][MAX_N] = {0};

    // Find the path from (0, 0) to (N-1, M-1)
    if (findPath(0, 0, maze, path, N, M)) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NO PATH FOUND" << endl;
    }

    return 0;
}