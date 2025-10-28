bool search(vector<int>& nums, int target) {
    int n = nums.size();

    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]== target) return true;
        if(nums[low] == nums[mid] && nums[mid]== nums[high]){
            low++;
            high--;
            continue;
        }

        //CHECKING WHICH HALF IS SORTED

        //LEFT HALF IS SORTED
        if(nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid]) high = mid-1;
            else low= mid+1; 
        }

        //RIGHT HALF IS SORTED

        else{
            if(nums[mid] < target && target <= nums[high]) low = mid+1;
            else high = mid-1;
        }
    }
    return false;
    
}