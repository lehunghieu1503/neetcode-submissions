class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char,int> m;

        for(const char& c : s)
            m[c]++;
        
        for(const char& c : t)
            m[c]--;
        
        for(const auto& [k,v] : m){
            if(v != 0)
                return false;
        }

        return true;
    }
};
