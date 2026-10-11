#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int cost[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 10, 6, 5},
        {0, 10, 0, 0, 15},
        {0, 6, 0, 0, 4},
        {0, 5, 15, 4, 0}
    };

    int visited[5] = {0};
    int edges = 0, total = 0;
    int minCost, u = 0, v = 0;

    visited[1] = 1;

    cout << "Minimum Spanning Tree:\n";

    while (edges < n - 1) {
        minCost = 9999;

        for (int i = 1; i <= n; i++) {
            if (visited[i]) {
                for (int j = 1; j <= n; j++) {
                    if (!visited[j] && cost[i][j] != 0 &&
                        cost[i][j] < minCost) {
                        minCost = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        if (minCost == 9999) {
            cout << "Graph is disconnected\n";
            return 0;
        }

        cout << u << " - " << v
             << " : " << minCost << endl;

        total += minCost;
        visited[v] = 1;
        edges++;
    }

    cout << "Minimum cost = " << total;

    return 0;
}
