class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++){
            switch (s[i]){
                case '(':
                    st.push(s[i]);
                    break;
                case '{':
                    st.push(s[i]);
                    break;
                case '[':
                    st.push(s[i]);
                    break;
                case ')':
                    if(st.size()<=0 || st.top()!='('){
                        return false;
                    }
                    st.pop();
                    break;
                case '}':
                    if(st.size()<=0 || st.top()!='{'){
                        return false;
                    }
                    st.pop();
                    break;
                case ']':
                    if(st.size()<=0 || st.top()!='['){
                        return false;
                    }
                    st.pop();
                    break;
            }
        }

        if(st.size()==0) return true;
        else return false;
    }
};
