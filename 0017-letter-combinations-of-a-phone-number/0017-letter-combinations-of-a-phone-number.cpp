class Solution {
    
private:
    void Solve(string digits, int index, string output, vector<string>& ans, string arr[] ){
        if(index >= digits.size()){
            ans.push_back(output);
            return;
        }
        int digit = digits[index] - 48;
        string digit_string = arr[digit];
        cout << digit << " " << digit_string<< endl;
    
        string temp = output;
        for (int j = 0;j < digit_string.size(); j++){
            output = temp;
            output = output + digit_string[j];
            Solve(digits, index+1, output, ans,arr);
            
        }
        
    }

        
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.size() == 0){
            return ans;
        }
        string arr[10]={" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        int index = 0;
        Solve(digits, index, output, ans, arr);
        
        return ans;
        
        
    }
};