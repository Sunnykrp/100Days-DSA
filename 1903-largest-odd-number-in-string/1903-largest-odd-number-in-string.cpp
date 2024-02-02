class Solution {
public:
    string largestOddNumber(string num) {
        //fast; 
        int len = num.size(); 
        bool append = false; 
        string res = ""; 
        for (int i = len - 1; i >=0; i--){
            if((num[i] - '0')&1) // convert from string digit to integer, then check it is odd, as the LSB must be 1
                append = true; 
            if (append)
                res+=num[i]; 
        }
        reverse(res.begin(), res.end());
        return  res;
    }
};