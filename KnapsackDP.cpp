#include <bits/stdc++.h>
using namespace std;

int a, x, t, y, matrix[100][100];
int n = 4, m = 8;
int p[] = {0, 1, 2, 5, 6};
int wt[] = {0, 2, 3, 4, 5};

/*  int n = 4, m = 5;
    int p[] = {0, 12, 10, 20, 15};
    int wt[] = {0, 2, 1, 3, 2}; */

void PrintWeights();

int main()
{
    //Initialise 
    for (int j = 0; j < m; j++)
        matrix[0][j] = 0;
    for (int i = 0; i < n; i++)
        matrix[i][0] = 0;
   
    for (int i = 1; i <= n; i++)
        for (int w = 1; w <= m; w++)
        {
            if (wt[i] <= w)
                matrix[i][w] = max((p[i] + matrix[i - 1][w - wt[i]]), matrix[i - 1][w]);

            else matrix[i][w] = matrix[i - 1][w];
        }

    cout << "\nOptimal Solution for this knapsack is " << matrix[n][m] << endl;

    PrintWeights();

    return 0;
}


void PrintWeights()
{
    int i=n,j=m;
    cout << "Weights: (1 means taken):\n";
    while( i>0 && j > 0)
    {
        if(matrix[i][j] == matrix[i-1][j])
            i--;
            // cout << i << " = 0\n";

        else
        {
            cout << i << " = 1\n";
            j = j - wt[i];
            i--;
        }
    }
}
