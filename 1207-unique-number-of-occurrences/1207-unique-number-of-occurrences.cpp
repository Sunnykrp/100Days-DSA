
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        vector<int> res;
        int x=0;
        for(int i=0; i<arr.size(); i++) {
            if(map.find(arr[i])==map.end()) {
                map.insert({arr[i], x});
                res.push_back(1);
                x++;
            } else {
                res[map.at(arr[i])]++;
            }
        }
        vector<int> check;
        for(int i=0; i<res.size(); i++) {
            if(find(check.begin(), check.end(), res[i]) == check.end()) {
                check.push_back(res[i]);
                cout << res[i];
            }
        }
        return res == check;

    }
};