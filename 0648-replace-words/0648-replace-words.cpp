class Solution {
public:
    string findRoot(string& word , unordered_set<string>& st){
          for(int l = 1; l<word.size(); l++){
              string root = word.substr(0 , l);
              if(st.count(root)){
                return root;
              }
          }
          return word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> st(begin(dictionary) , end(dictionary));
        stringstream s(sentence);
        string word;
        string res;
        while(getline(s , word , ' ')){
           res += findRoot(word , st) + " ";
        }
         res.pop_back(); // to remove extra space
         return res;
    }
};