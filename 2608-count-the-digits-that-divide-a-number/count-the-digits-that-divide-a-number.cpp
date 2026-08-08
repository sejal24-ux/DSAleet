class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int original=num;
        while(num>=1)
        {
            int lastdigit=num%10;
            if(original%lastdigit==0)
            {
                count++;
            }
            num=num/10;
        }
        return count;
    }
};