#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>>&matrix){
    int index;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();i++){
            if(matrix[i][j]==0){
                index=i-1;
                while(index>=0){
                    matrix[index][j]=-1;
                }
                index=i+1;
                while(index<matrix.size()){
                    matrix[index][j]=-1;
                }
                index=j-1;
                while(index>=0){
                    matrix[i][index]=-1;
                }
                index=j+1;
                while(index<matrix.size()){
                    matrix[i][index]=-1;
                }

            }
        }
    }
     for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();i++){
            if(matrix[i][j]<=0){
                matrix[i][j]=0;
            }
        
        }
        }

}
// int main(){
//     vector<vector<int>> arr={
//         {1,1,1},
//         {1,0,1},
//         {1,1,1}
//     };
//     setZeros(arr);
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();i++){
//         cout<<arr[i][j]<<" ";
        
//         }
//         cout<<endl;
//     }

// }