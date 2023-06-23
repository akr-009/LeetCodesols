class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
        vector <int> counts;
        for(auto it=mp.begin(); it!=mp.end(); ++it)
            {
                counts.push_back( (*it).second);
            }
        sort (counts.begin(),counts.end());
        reverse(counts.begin(),counts.end());
        vector <int> res ={};
        int a=0;
        while ( res.size()!=k)
            {  for(auto it=mp.begin(); it!=mp.end(); ++it)
                if( (*it).second==counts[a] && a<k)
                   { res.push_back( (*it).first);
                     a++;
                   }
            }
        return res;
    }
};
