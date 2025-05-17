#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findPivotIndex(vector<int> arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        
        // Handle empty array
        if (n == 0)
            return -1;
        
        // Handle single element array
        if (n == 1)
            return 0;
            
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            // If we've narrowed down to a single element
            if (start == end) {
                return start;
            }
            
            // Check if mid is pivot (with boundary check)
            if (mid+1 < n && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            
            // Check if element before mid is pivot (with boundary check)
            else if (mid > 0 && arr[mid] < arr[mid - 1]) {
                return mid - 1;
            }
            
            // Decide which half to search
            else if (arr[start] > arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return -1;
    }
    
    int binarySearch(vector<int> arr, int target, int start, int end) {
        int ans = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            }
            if (arr[mid] > target) {
                // go left
                end = mid - 1;
            } else {
                // go right
                start = mid + 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        
        int pivot = findPivotIndex(nums);
        
        // Handle non-rotated array or pivot not found
        if (pivot == -1 || pivot == n-1) {
            return binarySearch(nums, target, 0, n-1);
        }
        
        int ans = -1;
        if (nums[0] <= target && nums[pivot] >= target) {
            ans = binarySearch(nums, target, 0, pivot);
        } else {
            ans = binarySearch(nums, target, pivot + 1, n - 1);
        }
        return ans;
    }
};