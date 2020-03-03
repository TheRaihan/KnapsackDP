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
    int p[] = {0,1, 2, 5, 6};
    int w[] = {0,2, 3, 4, 5};

    for (int j = 0; j < m; j++)
        matrix[0][j] = 0;

    for (int i = 0; i < n; i++)
        matrix[i][0] = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}