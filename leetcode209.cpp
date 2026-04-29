#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
int main(){
    int target = 7;
    std::vector<int> nums = {2,3,1,2,4,3};
    int sum = 0;
    int length = 0;
    int result = INT_MAX;
    for(int i = 0,j = 0; i < nums.size(); ++i){
        sum = sum + nums[i];
        while(sum >= target){
            length = (i - j + 1);
            result = std::min(result,length);
            sum = sum - nums[j++];
        }
    }
    if (result == INT_MAX) {
        result = 0;
    }
    std::cout << result;

    return 0;
}