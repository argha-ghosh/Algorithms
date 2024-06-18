#include<bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));

    ofstream fout("10k.txt");

    //int n;

    for(int i=0; i<100;i++)
    {
        //n=rand;
        //cout<<rand()%6+1<<endl;
        fout<<rand()<<endl;
    }
    return 0;

}


