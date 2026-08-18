class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(auto word:strs){
            ans+=word+"\t";
        }
        return ans;
    }

    vector<string> decode(string s) {
        int n = s.size();
        string temp;
        vector<string> ans;
        for(int i=0; i<n; i++){
            if(s[i]=='\t'){
                ans.push_back(temp);
                temp="";
            }else{
                temp.push_back(s[i]);
            }
        }
        return ans;
    }
};
