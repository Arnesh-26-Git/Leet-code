class Solution {
public:
    string smallestSubsequence(string s) {
        int count[26] = {0};
        bool used[26] = {false};
        string ans = "";
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
        }
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            count[ch - 'a']--;
            if (used[ch - 'a']){
                continue;
            }
            while(ans.length()>0 && ans.back()>ch && count[ans.back()-'a']>0){
                used[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(ch);
            used[ch-'a']=true;
        }
        return ans;
    }
};