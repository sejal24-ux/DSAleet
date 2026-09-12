class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int count=0;
        int i=0;
        while(i<nums.size())
        {
            if(count==0)
            {
                candidate=nums[i];
                count++;
            }
            else if(nums[i]==candidate)
            {
                count++;
            }
            else 
            {
                count--;
            }
            i++;
        }
        return candidate;
    }
};