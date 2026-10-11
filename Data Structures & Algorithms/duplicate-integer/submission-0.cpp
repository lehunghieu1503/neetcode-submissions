class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s;
        for(const int&x : nums){
            if(!s.count(x))
                s.insert(x);
            else
                return true;
        }

        return false;
    }
};