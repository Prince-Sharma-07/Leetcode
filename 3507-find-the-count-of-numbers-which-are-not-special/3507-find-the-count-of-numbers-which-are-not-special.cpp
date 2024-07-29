class Solution {
public:
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

    int nonSpecialCount(int l, int r) {
        vector<int> ans;
        int count = 0;
        for(int i = sqrt(l); i<=sqrt(r); i++){
             if(isPrime(i)) ans.push_back(i);
        }
        for(int i = 0; i<ans.size(); i++){
            if(ans[i]*ans[i] >= l && ans[i]*ans[i]<=r)
            count++;
        }

      return (r-l+1)-count;
    }
};