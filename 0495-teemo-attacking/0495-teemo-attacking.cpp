class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int duration) {
        int count=0;
        for(int i=0;i<t.size();i++){
            if(i==t.size()-1){
                count=count+duration;
            }
            else
            count=count+min(t[i+1]-t[i],duration);
        }
        return count;
    }
};