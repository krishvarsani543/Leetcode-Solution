class Solution {
public:
int binary(vector<int>& nums, int target){
    int low=0;
        int high=nums.size()-1;
        int ans=-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
              ans=mid;
              high=mid-1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

}
int binarylast(vector<int>& nums, int target){
    int low=0;
        int high=nums.size()-1;
        int ans=-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(target==nums[mid]){
              ans=mid;
              low=mid+1;
            }
            else if(target>nums[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

}
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        
        int first=binary(nums, target);
        int last=binarylast(nums,target);
        return {first,last};
       
    }
};