class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> expected_frequency(26,0);
        vector<int> window_frequency(26,0);
        for(char c:t){
            expected_frequency[c-'a']+=1;
        }
        for(char c:s){
            window_frequency[c-'a']+=1;
        }
        if(expected_frequency!=window_frequency){
            return false;
        }
        return true;
        
    }
};
