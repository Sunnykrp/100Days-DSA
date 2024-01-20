class Solution {
public:
    int FindPivot(vector<int> arr) {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (s == e) {
                return s;
            }
            if (mid <= e && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            if (mid - 1 >= s && arr[mid - 1] > arr[mid]) {
                return mid - 1;
            }
            if (arr[s] > arr[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return mid;
    }
    int BinarySearch(vector<int> arr, int target, int s, int e) {
        int mid = s + (e - s) / 2;
        while (s <= e) {
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] > target) {
                e = mid - 1;
            } else {
                s = mid+1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = FindPivot(nums);
        int ans = 0;
        if (target >= nums[0] && target <= nums[pivotIndex]) {
            ans = BinarySearch(nums,target, 0, pivotIndex );

        } else {
            ans = BinarySearch(nums,target, pivotIndex + 1,nums.size()-1 );
        }
        return ans;
    }
};