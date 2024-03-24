class Solution {
public:
    int next(int n){
        int r = 0;
        while(n > 0){
            r+=(n%10)*(n%10);
            n/=10;
        }
        return r;
    }
    bool isHappy(int n) {
        int fast = n;
        int slow = n;
        do{
            slow = next(slow);
            fast = next(next(fast));
        }while(fast!=slow);
        return slow==1;
    }
};