class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> s1;
        int l=s.length();
        int maxSum=0;
        int left=0;
        int right=0;
        while(right<l){
            while(s1.find(s[right])!=s1.end()){
                s1.erase(s[left]);
                left++;
            }
            maxSum=max(maxSum,right-left+1);
            s1.insert(s[right]);
            right++;

        }
        return maxSum;
        
    }
};
