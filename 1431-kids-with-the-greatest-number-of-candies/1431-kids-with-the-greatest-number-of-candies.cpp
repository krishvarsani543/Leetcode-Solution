class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extraC) {
        vector<bool>ans;
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<c.size();i++){
            maxi=max(maxi,c[i]);
        }
        for(int i=0;i<c.size();i++){
           sum=c[i]+extraC;
            ans.push_back(maxi<=sum);
        }
        return ans;
    }
};