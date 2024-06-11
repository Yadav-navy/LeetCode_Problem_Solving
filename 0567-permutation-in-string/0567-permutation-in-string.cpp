class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int arr_s1[26] = {0};
        int ascii ;
        int size_1 = s1.size();
        int size_2 = s2.size();
        
        for(int i =0 ; i< s1.length(); i++){
            ascii = s1[i] - 'a';
            arr_s1[ascii]++;
        }
        
//         for (int x =0 ; x < 26 ; x++){
//             cout << arr_s1[x]<<" "; 
//         }
//         cout << endl;

        string sub_string;
        cout << s1.length() << endl;
        for (int i = 0; i<=size_2-size_1 ;i++){
            
            int arr_s2[26] = {0};
            sub_string= s2.substr(i,s1.length());
            
            for(int j =0 ; j< s1.length(); j++){
                ascii = sub_string[j] - 'a';
                arr_s2[ascii]++;        
            }
            
        // cout << i << "th iteration" << " ";
        // for (int x =0 ; x < 26 ; x++){
        //     cout << arr_s2[x]<<" "; 
        // }
        cout << endl;
        
        if (equal(begin(arr_s1),end(arr_s1),begin(arr_s2))){
            return true;
        }
        }
        return false;
        
        
    }
};