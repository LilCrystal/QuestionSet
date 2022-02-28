#include <stdlibc++.h>

using namespace std;



class Solution {
public:
    string replaceSpace(string s) {
        string array;   
        
        for(auto &c : s){
            if(c == ' '){
                array.push_back('%');
                array.push_back('2');
                array.push_back('0');
            }
            else{
                array.push_back(c);
            }
        }
        return array; 
    }
};


int main()
{
    Solution a;
    string test = "a b c d e";
    cout << a.replaceSpace(test) << endl;
    return 0;
}
