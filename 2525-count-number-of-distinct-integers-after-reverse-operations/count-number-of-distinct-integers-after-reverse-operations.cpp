class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++)
        {
        st.insert(nums[i]);
        int original=nums[i];
        long long rev=0;
         while(original>0)
         {
            int lastdigit = original%10;
            rev=rev*10+lastdigit;
            original=original/10;
         }
          st.insert(rev);
        }
       return st.size();
    }
};