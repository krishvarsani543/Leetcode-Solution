class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double sum=0;
        double maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
              sum+=nums[i];
             
              if(i-j+1==k){
                 maxi=max(maxi,sum/k);
                sum-=nums[j];
                   j++;
              }
        }
        return maxi;
    }
};