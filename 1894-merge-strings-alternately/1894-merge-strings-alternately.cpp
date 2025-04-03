class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge = "";
        for(int i = 0; i< word1.size()+word2.size(); i++){
            if(i<word1.size()){
                merge = merge + word1[i];
            }
            if(i<word2.size()){
                merge = merge + word2[i];
            }
       }
       return merge;
    }
};