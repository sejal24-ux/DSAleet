class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot=i;
                break;
            }
        }
         if(pivot==-1)
        {
             reverse(nums.begin(), nums.end());
             return;
        }
        for(int j=nums.size()-1;j>pivot;j--)
        {
            if(nums[pivot]<nums[j])
            {
                swap(nums[pivot],nums[j]);
                break;
            }
        }
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};