class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result=0;
        int i=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            result=result^i;
            result=result^nums[i];
        }
         result=result^n;  
         return result; 
    }
};