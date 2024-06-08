class Solution {
public:
    
    char tolower(char ch){
        char temp = ch - 'A'+ 'a';
        return temp;
    }
    
    bool isPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;
        
        while (st < e){
            cout << s[st]<< " " << s[e] << endl;
            cout << st << " " << e << endl;
            
            if (s[st] >='A' && s[st] <= 'Z'){
                s[st] = tolower(s[st]);  }
            if (s[e] >='A' && s[e] <= 'Z'){
                s[e] = tolower(s[e]);    }
            
            if ((s[st] >= 'a' && s[st]<='z')|| (s[st] >= '0' && s[st]<= '9')){
                st = st;    }
            else {
                st++;
                continue;}
            
            if ((s[e] >= 'a' && s[e]<= 'z')|| (s[e] >= '0' && s[e]<= '9')){
                e = e;  }
            else {
                e--;
                continue;}

            if (s[st] != s[e]){
                     return 0;  }
            else{   
                st++;
                e--; }
        }
        
        return 1;
        
    }
};