class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;
        int n=nums.size();
        vector<int> ans;
        for(int i=0 ;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue <pair<int,int>> pq;
        for(auto &it : freq){
            pq.push({it.second,it.first});
        }
        while(!pq.empty() && k>0){
            int temp=pq.top().second;
            ans.push_back(temp);
            pq.pop();
            k--;
        }
        return ans;
    }
};
