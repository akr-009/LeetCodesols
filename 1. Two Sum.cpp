class Solution {
public:
   vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        
        vector<int> result;
        int flag =0;
        
        while (flag==0) {
            int sum = numbers[i] + numbers[j];
            if (sum < target) {
                i++;
            } else if (sum > target) {
                j--;
            } 
            else if(i>j)
                {
                    i++;
                    j=numbers.size()-1;
                }
            else {
                result.push_back(i );
                result.push_back(j );
                flag++;
                break;
            }
        }
        
        return result;
    }
};
