class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int i=0,j=numbers.size()-1;
        while(j>i){
          int ans=numbers[i]+numbers[j];
          if(ans>target) j--;
          else if (ans<target) i++;
          else return {++i,++j};
        }
      return {};
    }
};