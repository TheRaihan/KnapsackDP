#include <bits/stdc++.h>
#define inf 1 / 0.0
#define fin freopen("input.txt", "r", stdin)
#define fout freopen("output.txt", "w", stdout)
#define mem(a, b) memset(a, b, sizeof(a))
#define err cout << "OK" << endl;
#define PI 2 * acos(0.0)
#define F first
#define S second
#define gcd(x, y) __gcd(x, y)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define MOD 100000007
using namespace std;

int main()
{

    int a, x, t, y, matrix[100][100];
    int n = 4, m = 8;
    int p[] = {0, 1, 2, 5, 6};
    int wt[] = {0, 2, 3, 4, 5};

    // int n = 4, m = 5;
    // int p[] = {0, 12, 10, 20, 15};
    // int wt[] = {0, 2, 1, 3, 2};

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

    cout << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Optimal Solution for this knapsack is " << matrix[n][m] << endl;

    int i=n,j=m;
    while( i>0 && j > 0)
    {
        if(matrix[i][j] == matrix[i-1][j])
        {
            cout << i << " = 0\n";
            i--;
        }
        else
        {
            cout << i << " = 1\n";
            j = j - wt[i];
            i--;
        }

    }

    return 0;
}