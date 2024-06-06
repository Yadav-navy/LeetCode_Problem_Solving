class Solution {
public:
    void reverseString(vector<char>& s) {
//         Now using two pointer approch
        
        int start = 0;
        int end = s.size()-1;
        
        while (start <= end){
            swap(s[start],s[end]);
            start += 1;
            end -= 1;   
        }
    }
};



//         int size = s.size();
//         int j ;
//         cout << "size" << size << endl;
        
//         if (size % 2 == 0){         //even number of elements
//             for (int i=0 ; i< (size)/2 ; i++){
//             j = size - i - 1;
//             cout << i << " " << j << endl;
//             swap(s[i],s[j]); }    
//         }
//         else{
//             for (int i=0 ; i< (size-1)/2 ; i++){
//             j = size - i - 1;
//             cout << i << " " << j << endl;
//             swap(s[i],s[j]); }
//         }

//     }
// };