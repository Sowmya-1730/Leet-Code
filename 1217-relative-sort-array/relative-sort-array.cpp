class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
        sort(arr1.begin(),arr1.end());
        map<int,int>m;
        for(int it:arr1)
        {
            m[it]++;
        }
        for(int i:arr2)
        {
            if(m[i]>0)
            {
                v.insert(v.end(),m[i],i);
                m[i]=0;
            }
        }
        for(const auto& it:m)
        {
            if(it.second>0)
            {
                v.insert(v.end(),it.second,it.first);
            }
        }
        return v;
        
    }
};