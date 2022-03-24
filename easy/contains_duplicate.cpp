#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

class Solution{

    public:

    bool containsDuplicate(vector<int>& nums){
        map<int, int> count_map;
        for(int i = 0; i < nums.size(); i++){
            count_map[nums[i]] = 0;
        }
        for(int i = 0; i < nums.size(); i++){
            count_map[nums[i]] += 1;
            if(count_map[nums[i]] > 1){
                return true;
            }
            cout << count_map[nums[i]] << "\n";
        }
        return false;
    }

    bool containsDuplicateFaster(vector<int>& nums){
        unordered_map<int, int> count_map;
        for (auto n:nums){
            count_map[n]++;
        }
        for (auto n:nums){
            if (count_map[n] > 1){
                return true;
            }
        }
        return false;
    }

};

int main(){
    Solution soln = Solution();
    vector<int> ints{1, 2, 3, 1};
    std::cout << soln.containsDuplicate(ints) << " = " << true;
    std::cout << soln.containsDuplicateFaster(ints) << " = " << true;
    
    return 0;
}