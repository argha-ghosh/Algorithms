#include<bits/stdc++.h>
using namespace std;

void Merge(int A[], int B[], int C[], int n, int m)
{
    int i=0, j=0, k=0;


    while (i<=n-1 && j<=m-1)
    {
        if (A[i] > B[j])
        {
            C[k++] = B[j++];
        }
        else
        {
            C[k++] = A[i++];
        }
    }


    while (i<=n-1)
    {
        C[k++] = A[i++];
    }


    while (j<=m-1)
    {
        C[k++] = B[j++];
    }
}

int main(void)
{
    int n = 5;
    int m = 4;

    int A[] = {20, 34, 58, 77, 91};
    int B[] = {12, 43, 60, 87};
    int C[n + m];

    Merge(A, B, C, n, m);


    for (int i=0; i<n+m; i++)
    {
        cout<<C[i]<<" ";
    }

    return 0;
}
