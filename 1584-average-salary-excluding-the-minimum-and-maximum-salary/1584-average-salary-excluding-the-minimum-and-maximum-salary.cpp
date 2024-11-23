class Solution {
public:
    double average(vector<int>& salary) {
        double size = salary.size();
        double totalSalary = size-2;
        double sumSalary = 0;
        for(int i = 0; i<salary.size(); i++){
           sumSalary += salary[i];
        }
        sumSalary -= *min_element(salary.begin() , salary.end());
        sumSalary -= *max_element(salary.begin() , salary.end());
        double ans = sumSalary/totalSalary;
        return ans;
    }
};