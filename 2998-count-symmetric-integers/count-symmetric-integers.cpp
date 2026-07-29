class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            string s = to_string(i);
            if(s.size()%2==0)
            {
                 int mid=s.size()/2;
                 int sum1=0;
                 int sum2=0;
                 for(int j=0;j<mid;j++)
                 {
                     sum1+=s[j]-'0';
                 }
                 for(int j=mid;j<s.size();j++)
                 {
                     sum2+=s[j]-'0';
                 }
                 if(sum1==sum2)
                 {
                    count++;
                 }
            }
        }
        return count;
    
    }
};