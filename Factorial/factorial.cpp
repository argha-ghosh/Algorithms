#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)

        return 1;

    else

        return n * factorial(n-1);


}
int main(void)
{
    int num;
    cout<<"Enter the integer : ";
    cin>>num;
    cout<<"The factorial of the integer is : "<<factorial(num);

    getch();
}
