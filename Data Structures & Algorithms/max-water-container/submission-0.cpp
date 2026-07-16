class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int max_water=0;
        while(left<right){
            int capacity=min(heights[left],heights[right])*(right-left);
            max_water=max(capacity,max_water);
            if(heights[left]<heights[right]){
                left++;
            }else if(heights[right]<heights[left]){
                right--;
            }else{
                left++;
                right--;
            }
        }
        return max_water;
        
    }
};
