#include <cmath>     
#include <iostream>  
#include <stack>     
#include <algorithm> 
#include <stdexcept> 
#include <string>    

using namespace std;

stack<int> aStack;
stack<int> maxStack;
stack<int> minStack;

int getMax(stack<int> in)
{
    int max;

    max = 20;

    
    return max;
}

int getMin(stack<int> in)
{
    int min;

    min = 1;


    return min;
}

void pushStack(int n)
{

}
int main()
{
    stack<int> aStack;
    int n;
    while(cin >> n)
    {
        aStack.push(n);

        cout<<"Now the min number is " <<getMin(aStack)<<endl;

        cout<<"Now the max number is " <<getMax(aStack)<<endl;

    }

}