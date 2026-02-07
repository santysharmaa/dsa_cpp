vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
    if(m*n != arr.size()){
            return {};
        }
        vector<vector<int>>newArr(m, vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                newArr[i][j] = arr[i*n+j]; 
            }
        }
        return newArr;
    }



    
    