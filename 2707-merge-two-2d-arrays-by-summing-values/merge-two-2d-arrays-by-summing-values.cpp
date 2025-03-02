class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>m;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(m.find(nums1[i][0])!=m.end())
            {
                m[nums1[i][0]]+=nums1[i][1];
            }
            else 
            {
                m[nums1[i][0]]=nums1[i][1];
            }
            if(m.find(nums2[j][0])!=m.end())
            {
                m[nums2[j][0]]+=nums2[j][1];
            }
            else
            {
                m[nums2[j][0]]=nums2[j][1];
            }
            i+=1;
            j+=1;
        }
        while(i<nums1.size())
        {
            if(m.find(nums1[i][0])!=m.end())
            {
                m[nums1[i][0]]+=nums1[i][1];
            }
            else 
            {
                m[nums1[i][0]]=nums1[i][1];
            }
            i+=1;
        }
        while(j<nums2.size())
        {
            if(m.find(nums2[j][0])!=m.end())
            {
                m[nums2[j][0]]+=nums2[j][1];
            }
            else
            {
                m[nums2[j][0]]=nums2[j][1];
            }
            j+=1;
        }
        vector<vector<int>>res;
        for(auto &it:m)
        {
            res.push_back({it.first,it.second});
        }
        return res;
        
    }
};