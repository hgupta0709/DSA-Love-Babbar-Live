//clearer explanation: https://leetcode.com/problems/sort-colors/discuss/1256365/C%2B%2B-oror-Easy-to-understand-oror-full-explanation
//or striver https://www.youtube.com/watch?v=oaVa-9wmpns

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        
        while(mid<=high){
            switch (nums[mid]){
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                        break;
            }
        }
    }
};