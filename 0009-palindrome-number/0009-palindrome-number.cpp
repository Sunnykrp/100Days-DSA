class Solution {
public:
    bool isPalindrome(int x) {
        int OriginalNum=x;
        
        long reverseNum=0;
        if(x<0)
            {
                return false;
            }
            
        while(x>0)
        {
            int digit=x%10;
            reverseNum=reverseNum*10+digit;
            x=x/10;
        }
        return reverseNum==OriginalNum;
    }
};