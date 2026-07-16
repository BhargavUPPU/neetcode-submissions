class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[n-1-i]<=8){
                digits[n-1-i]+=1;
                break;
            }else if (digits[n-i-1]==9){
                digits[n-1-i]=0;
            }
        }
        if(!digits[0]){
            digits.insert(digits.begin(),1);
            return digits;
        }
        return digits;
}
};
