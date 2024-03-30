class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int ans=0;
     
      for(int i=0;i<nums.size();i++){
         int cnt=0;
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt==1){
ans=nums[i];
        }
      }  
      return ans;
    }
};