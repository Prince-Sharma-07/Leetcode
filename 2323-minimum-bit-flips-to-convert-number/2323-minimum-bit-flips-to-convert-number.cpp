class Solution {
public:
    int minBitFlips(int start, int goal) {
        string B1 , B2;
        while(start){
            B1 += to_string(start%2);
            start/=2;
        }
        while(goal){
            B2 += to_string(goal%2);
            goal/=2;
        }

        reverse(B1.begin() , B1.end());
        reverse(B2.begin() , B2.end());
        
        if(B1.size() > B2.size()){ 
            while(B2.size()!=B1.size()){
                B2 = '0' + B2;
            }
        }
        else{
            while(B1.size()!= B2.size()){
                B1 = '0' + B1;
            }
        }

        int count = 0;
        for(int i = 0 ; i<B1.size(); i++){
            if(B1[i] != B2[i]) count++;
        }
        cout<<B1<<endl;
        cout<<B2;
        return count;
    }
};