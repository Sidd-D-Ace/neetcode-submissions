class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i=0; i<tokens.size(); i++){
            int a,b,ans;
                    if(tokens[i]=="+"){
                        if(st.size()>=2){
                            a = st.top();
                            st.pop();
                            b = st.top();
                            st.pop();
                            ans = a+b;
                            st.push(ans);
                        }
                    }
                    else if(tokens[i]=="-"){
                    if(st.size()>=2){
                        a = st.top();
                        st.pop();
                        b = st.top();
                        st.pop();
                        ans = b-a;
                        st.push(ans);
                    }
                    }
                    else if(tokens[i]=="*"){
                    if(st.size()>=2){
                        a = st.top();
                        st.pop();
                        b = st.top();
                        st.pop();
                        ans = b*a;
                        st.push(ans);
                    }
                    }
                    else if(tokens[i]=="/"){
                    if(st.size()>=2){
                       a = st.top();
                        st.pop();
                        b = st.top();
                        st.pop();
                        ans = b/a;
                        st.push(ans);
                    }
                    }
                    else{
                        st.push(stoi(tokens[i]));
                    }
        }
        return st.top();
    }
};
