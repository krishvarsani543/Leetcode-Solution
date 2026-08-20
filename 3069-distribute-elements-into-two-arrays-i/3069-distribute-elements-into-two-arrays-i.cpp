class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        stack<int>s1;
        stack<int>s2;
        int n=nums.size();
        s1.push(nums[0]);
        s2.push(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(s1.top()>s2.top()){
                s1.push(nums[i]);
            }
            else{
                s2.push(nums[i]);
            }
        }
        int pos=n-1;
        vector<int>ans(n);
        while(!s2.empty()){
       ans[pos]=s2.top();
       s2.pop();
       pos--;
        }
           while(!s1.empty()){
       ans[pos]=s1.top();
       s1.pop();
       pos--;
        }
        return ans;
    }
};