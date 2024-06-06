class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int size = s.size();
        int j ;
        cout << "size" << size << endl;
        
        if (size % 2 == 0){         //even number of elements
            for (int i=0 ; i< (size)/2 ; i++){
            j = size - i - 1;
            cout << i << " " << j << endl;
            swap(s[i],s[j]); }    
        }
        else{
            for (int i=0 ; i< (size-1)/2 ; i++){
            j = size - i - 1;
            cout << i << " " << j << endl;
            swap(s[i],s[j]); }
        }

    }
};