class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>s(nums.begin(),nums.end());
        int x=*min_element(nums.begin(),nums.end());
        int y=*max_element(nums.begin(),nums.end());
        while(x<y){
            if(s.count(x)==0){
                ans.push_back(x);
            }
            x++;
        }
        return ans;
    }
};