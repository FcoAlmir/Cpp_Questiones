#include <algorithm>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1, sum;
        vector<int> res;

        while(i <= j) {
            sum = nums[i] + nums[j];
            if(sum > target) {
                if(nums[j] > target) j--;
            }

            else if(sum == target) {
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
        return res;
    }
};