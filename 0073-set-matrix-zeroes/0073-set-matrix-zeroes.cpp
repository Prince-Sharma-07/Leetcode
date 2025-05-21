class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        // for(int i = 0; i<r; i++){            //Brute Force
        //     for(int j = 0; j<c; j++){
        //         if(matrix[i][j]==0){
        //             for(int k = 0; k<r; k++){
        //                if(matrix[k][j]!=0)
        //                matrix[k][j]=INT_MIN;
        //             }
        //             for(int l = 0; l<c; l++){
        //                if(matrix[i][l]!=0)
        //                matrix[i][l]=INT_MIN;  
        //             }
        //         }
        //     }
        // }
        // for(int i = 0 ; i<r; i++){
        //     for(int j = 0; j<c; j++){
        //         if(matrix[i][j]==INT_MIN) matrix[i][j]=0;
        //     }
        // }

    //    vector<int> row(r,0);             //better
    //    vector<int> col(c,0);

    //    for(int i = 0; i< r; i++){
    //    for(int j = 0; j<c; j++){
    //     if(matrix[i][j] == 0){
    //         row[i] = 1;
    //         col[j] = 1;
    //     }
    //    }
    //    }

       
    //    for(int i = 0; i< r; i++){
    //    for(int j = 0; j<c; j++){
    //     if(row[i] == 1 || col[j] == 1){
    //        matrix[i][j] = 0;
    //     }
    //    }
    //    }
 
 int col0 = 1;         //extra column so row column do not overlap
 for(int i = 0 ; i<r; i++){
    for(int j = 0; j<c; j++){
        if(matrix[i][j]==0){
          matrix[i][0] = 0;   
        if(j!=0) matrix[0][j]=0;
        else col0 = 0;
        }
    }
 }

 for(int i = 1; i<r; i++){
    for(int j=1; j<c; j++){
        if(matrix[i][j]!=0){
        if(matrix[i][0] == 0 || matrix[0][j]==0){
         matrix[i][j]=0;
         }
        }
    }
 }
   if(matrix[0][0] == 0){
        for(int j = 0; j<c; j++) matrix[0][j] = 0;
    }
    if(col0 == 0){
        for(int i = 0; i<r; i++) matrix[i][0] = 0;
    }
}
};