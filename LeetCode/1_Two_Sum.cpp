//Solved in O(Nlog(N))
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp(nums);
        sort(temp.begin(), temp.end());
        int i = 0, j = temp.size() - 1, sum;
        vector<int> res;
        bool test1 = true, test2 = true;

        while(i <= j) {
            sum = temp[i] + temp[j];
            if(sum > target) j--;
            else if(sum < target) i++;
            else {
                int v1, v2;
                for(int k = 0 ; k < nums.size(); k++) {
                    if(nums[k] == temp[i] && test1) {
                        v1 = k;
                        test1 = false; 
                    }
                    else if(nums[k] == temp[j] && test2) {
                        v2 = k;
                        test2 = false;
                    }
                    if(!(test1 || test2)) {
                        res.push_back(v1); res.push_back(v2);
                        return res;
                    }
                }
            }
        }
        return res;
    }
};