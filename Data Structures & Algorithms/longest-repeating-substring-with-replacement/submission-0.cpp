class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> freq;
        int left=0;
        int right=0;
        int maxlen=0;
        int highfreq=0;
        while(right<s.length()){
            freq[s[right]]++;
            highfreq=max(highfreq,freq[s[right]]);
            int num_char_replace=(right-left+1)-highfreq;
            if(num_char_replace>k){
                freq[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,(right-left+1));
            right++;
        }
        return maxlen;
    }
};
