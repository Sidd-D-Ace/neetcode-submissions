class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
                if(s[left]==' '|| !isalnum(s[left])){
                    left++;
                }else if(s[right]==' ' || !isalnum(s[right])){
                    right--;
                }
                else{
                    if(tolower(s[left]) == tolower(s[right])){
                        left++;
                        right--;
                    }else{
                        return false;
                    }
                }
        }
        return true;
    }
};
