//return middle element of stack

#include<bits/stdc++.h>
using namespace std;

int solve(stack<int>&inputStack, int count, int size)
{
    //base case
    if(count == size/2)
    {
        int num = inputStack.top();
        return num;
    }
    
    //top element side me rkh le
    int num = inputStack.top();
    inputStack.pop();
    
    //recursive call
    solve(inputStack,count+1,size);
    
    //wapas jate tym side me rkha element push krde
    inputStack.push(num);
}

void findMiddle(stack<int>&inputStack, int N){
	
    int count = 0;
    solve(inputStack,count,N);
   
}
