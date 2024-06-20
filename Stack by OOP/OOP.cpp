#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int n;
    int top;
    int *s;

public:
    Stack(){
        n=5;
        top=-1;
        s= new int[n];
    }
    Stack(int n){
        this->n=n;
        top=-1;
        s=new int[n];
    }
    bool isFull(){
        return top==n-1?true:false;
    }
    bool isEmpty(){
        return top==-1?true:false;
    }
    void push(int x){
        if (isFull()){
            cout<<"This stack is full"<<endl;
        }else{
            s[++top]=x;
        }
    }
    void pop(){
        if (isEmpty()){
            cout<<"Empty"<<endl;
            return;
        }else{
            top--;
        }
    }
    void printStack(){
        for (int i=top; i>=0; i--){
            cout<<s[i]<<endl;
        }
        cout<<"==========="<<endl;
    }
};

int main(){
    Stack a(2);
    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    a.printStack();

    return 0;
}

