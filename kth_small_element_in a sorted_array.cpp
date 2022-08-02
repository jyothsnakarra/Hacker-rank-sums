class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n = mat.size();
    
    if(k > n*n)
    return -1;
    
    // smallest element is the first element of the matrix
    if(k == 1)
    return mat[0][0];
    
    // define array and push contents of the matrix into it
    vector <int> arr;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        arr.push_back(mat[i][j]);
    
    // sort the array and obtain k-th smallest element
    sort(arr.begin(),arr.end());
    
    return arr[k-1];
    }
};
