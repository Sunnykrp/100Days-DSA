class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=findFirst(nums,target);
        int last=findlast(nums,target);
        return{first,last};
    }
    private:
    int findFirst(vector<int>nums,int target)
    {
        int index=-1,start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                index=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    return index;
    }
    int findlast(vector<int>nums,int target)
    {
        int index=-1,start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                index=mid;
                start=mid+1;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    return index;
    }
};