class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt1 = 0 , cnt2 = 0 , maxCnt = 0;
        flowerbed.push_back(0);

        for(int i = 1; i<flowerbed.size()-1; i+=2) if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0 ) cnt1++;
        for(int i = 2; i<flowerbed.size()-1; i+=2) if(flowerbed[i-1] == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0 ) cnt2++;

        if(flowerbed[0] == 0 && flowerbed[1] == 0) cnt2++;

        maxCnt = max(cnt1 , cnt2);
    
        return maxCnt >= n;
    }
};