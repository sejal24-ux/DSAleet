class Solution {
public:
    bool isPalindrome(int x) {
        long long rev, sto,lastdigit;
        sto=x;
        rev=0;
        while(x>0)
        {
            int lastdigit=x%10;
            rev=rev*10+lastdigit;
            x=x/10;
        }
        if(sto==rev)
        {
            return true;
        }
        else 
        {
           return false;
        }
     }
};