#include<iostream>
#include<vector>
using namespace std;
// 136. Single Number This is the first problem in leetcode which I solved using c++ and I am learning the way to solve problems and also the important part is bitwise operators and every minute things will lead to guide the logics for the difficult answers
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            ans^=i;
        }
        return ans;
    }
};