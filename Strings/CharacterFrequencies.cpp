vector<int> Solution::solve(string A) {
    std::unordered_map<char,int> mp;
    for(auto i:A)
    {
        mp[i]++;
    } 
    std::vector<int> ans;
    for(auto i:mp)
    {
        ans.push_back(i.second);
    }
    reverse(ans.begin(),ans.end()); 
    return ans;
}