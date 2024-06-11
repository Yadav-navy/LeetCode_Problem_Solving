class Solution {
public:
    string removeDuplicates(string s) {
        int size = s.size();
        int i =0;
        while( i < (size-1) ){
            // cout << s[i] << " " << s[i+1] << endl;
            if (s[i] == s[i+1]){
                s.erase(i,2);
                // cout << s << endl;
                i = 0;
                size = s.size();
                continue;   }
            else{
                i++;    }
        }
        
        return s;
        
    }
};