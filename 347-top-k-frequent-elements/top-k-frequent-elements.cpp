class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //sort(nums.begin(), nums.end());
        map<int, int> mp;
        for (auto i : nums) {
            mp[i]++;
        }
        vector<int>ans;
        // pushing pairs into a p_queue
        priority_queue<pair<int, int>>pq;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            pq.push(make_pair(it->second, it->first));
        }
        // pushing vals to ans
        int i = 0;
        while (i!=k) {
            pair<int, int> top = pq.top();
            // cout << top.first << " " << top.second << endl;
            ans.push_back(top.second);
            pq.pop();
            i++;
        }
        return ans;
    }
};