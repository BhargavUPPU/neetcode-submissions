class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1=s1.length();
        int l2=s2.length();
        vector<int> expected_freq(26,0);
        vector<int> window_freq(26,0);
        int right=0;
        int left=0;
        if(l1>l2){
            return false;
        }
        for(char c:s1){
            expected_freq[c-'a']++;
        }
        while(right<l2){
            window_freq[s2[right]-'a']++;
            if((right-left+1)==l1){
                if(expected_freq==window_freq){
                    return true;
                }
                window_freq[s2[left]-'a']--;
                left++;
            }
            right++;
        }
        return false;
    
    }
};
