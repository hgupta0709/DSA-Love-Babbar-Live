class Solution {                                                  //Solved In Leetcode
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());                           //we will sort the array first because if there will be [1,2,3,2,4] it will become [1,2,2,3,4]
        for(int i = 1;i< nums.size(); i++){                       //we will then check if the previous number is equal to the current if yes then return the number
            if(nums[i] == nums[i-1])
                return nums[i];
        }
        return -1;
    }
};