double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> merg;
        for(int i = 0;i<n;i++){
            merg.push_back(nums1[i]);
        }
        for(int i = 0;i<m;i++){
            merg.push_back(nums2[i]);
        }
        sort(merg.begin(),merg.end());
        int total = merg.size();
        if(total%2==1){
            return static_cast <double>(merg[total/2]);
        }
        else{
            int mid1 = merg[total/2-1];
            int mid2 = merg[total/2];
            return (static_cast<double>(mid1) + static_cast<double>(mid2))/2.0;
        }

    }
};