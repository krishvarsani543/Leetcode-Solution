class Solution {
public:
int first(vector<int>& nums, int target){
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
           ans=mid;
           e=mid-1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}
int second(vector<int>& nums, int target){
    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
           ans=mid;
           s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int x=first(nums,target);
        int y=second(nums,target);
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};