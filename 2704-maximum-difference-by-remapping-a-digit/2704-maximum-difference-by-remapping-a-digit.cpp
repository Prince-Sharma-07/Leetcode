class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int i = 0;
        while(s[i] == '9') i++;
        char f1 = s[i];

        while(i<s.size()){
            if(s[i] == f1){
                s[i] = '9';
            }
            i++;
        }
        
    

        int num1 = stoi(s);

        s = to_string(num);
        char f2 = s[0];
        for(auto &i : s){
            if(i == f2) i = '0';
        }
       
        int num2 = stoi(s);
        return num1-num2;
    }
};