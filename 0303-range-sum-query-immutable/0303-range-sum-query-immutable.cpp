class NumArray {
public:
vector<int>pre;
    NumArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            pre.push_back(nums[i]);
        }
        sol(pre);
    }

    void sol(vector<int>& pre){
        for(int i=1;i<pre.size();i++){
            pre[i]=pre[i]+pre[i-1];
        }
    }
    
    int sumRange(int left, int right) {
          if (left == 0) {
            return pre[right];
        }
        return pre[right]-pre[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */