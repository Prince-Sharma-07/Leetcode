class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count = 0;

        for(int i = 0; i<sentences.size(); i++){
            int n = 0;
            for(int j = 0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    n++;
                }
            }
            count = max(count, n+1);
        }
        return count;
    }
};