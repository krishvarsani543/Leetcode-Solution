class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }
        arr.clear();
        for (auto it = m.begin(); it != m.end(); it++) {
            arr.push_back(it->second);
        }
        m.clear();
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }
        for(auto i : m){
            if(i.second>1){
                return false;
            }
        }

        return true;
    }
};