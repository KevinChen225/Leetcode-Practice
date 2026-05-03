#include<iostream>
#include<string>
#include<vector>
int main(){
    std::string s = "hello";
    std::vector<std::string> s_set = {};
    std::string goal = "lohel";

    if(s.size()!=goal.size()){  //長度不一樣
        return false;
    }

    for(int j = 0;j < s.size();++j){ 
        int temp = s[0];
        for(int i = 0;i < s.size() - 1 ;++i){    //把每個結果放到vector
            s[i] = s[i+1];
        }
        s[s.size() - 1] = temp;
        s_set.push_back(s);

        if(goal == s){
            return true;
        }
    }

    /*for(auto i : s_set)
        std::cout << i << " ";
    */
    
    
    //std::cout << s;
    
    return false;
}