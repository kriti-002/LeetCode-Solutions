class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> hash1(26,0), hash2(26, 0);
        for(auto x: word1){
            hash1[x-'a']++;
        }
        for(auto x: word2){
            hash2[x-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if((hash1[i]>0 && hash2[i]==0)or (hash1[i]==0 && hash2[i]>0)) return false;
        }
        sort(hash1.begin(), hash1.end());
        sort(hash2.begin(), hash2.end());
        for(int i=0;i<26;i++){
            if(hash1[i]!= hash2[i])
                return false;
        }
        return true;
    }
};