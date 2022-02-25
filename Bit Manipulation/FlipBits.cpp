//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1#

//TC - O(log n)
//SC - O(1)

#include<iostream>
using namespace std;

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int ans = a^b;
        int count = 0;
        
        while(ans)
        {
            if(ans&1)
                count++;
             
            ans = ans>>1;    
            
        }
        return count;
    }
};