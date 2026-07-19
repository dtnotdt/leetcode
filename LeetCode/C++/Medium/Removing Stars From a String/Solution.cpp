class Solution {
public:
    string removeStars(string s) {
        int n= s.length();

        stack<char> st;

        for (char ch:s){

            if(ch=='*'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
    string ans="";

    while(!st.empty()){
        ans= ans+ st.top();
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;


    }
};