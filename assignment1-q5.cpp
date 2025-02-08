/*rotate square matrix 90 degree 
1    2     3               7    4    1
4    5     6        <=>    8    5    2
7    8     9               9    6    3
*/
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int rotated_matrix=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=rotated_matrix;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int rotated_matrix=matrix[i][j];
            matrix[i][j]=matrix[i][n-j-1];
            matrix[i][n-j-1]=rotated_matrix;
        }
    }
    cout<<"90 degree rotated matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}