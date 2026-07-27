class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int count=0;
        int middleindex=nums.size()/2;
        int middleelement=nums[middleindex];
        for(int i=0;i<nums.size();i++)
        {
        if(nums[i]==middleelement)
            {
                count++;
            }
        }
        if(count==1) return true;
        else return false;
        
    }
};