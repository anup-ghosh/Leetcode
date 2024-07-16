class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        string ans = "";
        int n = s.size();
        k = k%n;
        for(int i=0 ; i<n ; i++){
            
            int d = i+k;
            ans+=s[(d%n)];
            
        }
        return ans;
    }
};