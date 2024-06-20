#include<bits/stdc++.h>
using namespace std;

void printList(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Iterate until n-1 to avoid extra comma
        cout << p[i] << ", ";
    }
    // Print the last element with a full stop
    cout << p[n - 1] << ".";
}

int main()
{
    int n=10;

    int *a = new int[n];

    //ifstream fin("1k.txt");

    for(int i=0; i<n; i++)
    {
        //>>a[i];
        cin>>a[i];
    }
    cout<<"The output of the following number is: ";
    printList(a,n);

    return 0;
}
