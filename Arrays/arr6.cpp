// Union of two arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n;
        cin >> m;
        int A[n];
        int B[m];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> B[i];
        }
        sort(A, A + n);
        sort(B, B + m);
        int x = 0, z = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] != A[i + 1])
            {
                A[x] = A[i];
                x++;
            }
        }
        A[x] = A[n - 1];
        for (int i = 0; i < m - 1; i++)
        {
            if (B[i] != B[i + 1])
            {
                B[z] = B[i];
                z++;
            }
        }
        B[z] = B[m - 1];
        n = x + 1;
        m = z + 1;

        int C[m + n];
        int i = 0, j = 0, k = 0;
        while (i < n && j < m)
        {
            if (A[i] == B[j])
            {
                C[k++] = A[i++];
                j++;
            }
            else if (A[i] < B[j])
            {
                C[k++] = A[i++];
            }
            else
            {
                C[k++] = B[j++];
            }
        }
        for (; i < n; i++)
        {
            C[k++] = A[i];
        }
        for (; j < m; j++)
        {
            C[k++] = B[j];
        }
        // for (int i = 0; i < k; i++) {
        // 	cout << C[i] << " ";
        // }
        cout << k << "\n";
    }

    return 0;
}
