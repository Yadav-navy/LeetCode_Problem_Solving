class Solution {
public:
    string removeOccurrences(string s, string part) {
        int size_part = part.length();
        int size_s = s.length();
        int i = 0;
        
        while(i <= (size_s - size_part)){
            cout << s.substr(i,size_part) << endl;
            if (s.substr(i,size_part)==part){
                s.erase(i,size_part);
                cout << "after erasing " << s << endl;
                i=0;
                size_s = s.length();
                cout << s << endl;
                continue;        
            }
            else{
                i++;
            }
        }
        return s;
        
    }
};