class Solution {
public:
    int countPrimes(int n) {
        if(n <= 0) {
            return 0;
        }
        vector<bool> a(n, true); // Use vector<bool> instead of bool[] for dynamic array
        a[0] = a[1] = false; // 0 and 1 are not prime
        for(int i = 2; i * i < n; i++) {
            if(a[i]) {
                for(int j = i * i; j < n; j += i) {
                    a[j] = false; // Set non-prime indices to false
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++) {
            if(a[i]) {
                count++;
            }
        }
        return count;
    }
};
