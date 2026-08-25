class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int ans;
           int i=1;
        while(1){
         
            if(m.find(k*i)==m.end()){
                    ans=k*i;
                      break;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};