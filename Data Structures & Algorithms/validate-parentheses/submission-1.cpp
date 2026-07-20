class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,char> myParentheses={{'[',']'},{'(',')'},{'{','}'}};
        stack<char> st;
        for(char c:s){
            if(myParentheses.find(c)!=myParentheses.end()){
                st.push(c);
            }else{
                if(!st.empty() && myParentheses[st.top()]== c){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};
