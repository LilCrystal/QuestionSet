
//统计一个数字在排序数组中出现的次数。


#include <stdlibc++.h>

using namespace std;



class Solution {
public:
    int search(vector<int>& nums, int target) {
        map<int,int> res;
        for(auto i:nums)
        {
            pair<map<int,int>::iterator, bool> pair_rsturn = res.insert(pair<int, int>(i, 1));
            if(!pair_rsturn.second)
                res[i]++;
        }
        return res.find(target)->second;
    }
};


int main()
{
    Solution a;
    vector<int> b = {1, 2, 3, 5, 3, 2, 1, 3};
    int n;
    cin >> n;
    cout << a.search(b, n) << endl;
}