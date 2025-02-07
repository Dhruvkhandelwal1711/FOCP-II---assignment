/*print a spiral pattern for matrix=4*4    
Spiral Number Pattern

Print a spiral pattern of numbers for a given size n.

Example for 4 (4x4 matrix)

1  2  3   4
12 13 14  5
11 16 15  6
10 9  8   7

*/

#include<iostream>
using namespace std;
int main(){
int n=4;
int spiral[4][4]={0};
int x=0,x2=n-1,y=0,y2=n-1;//x=top,x2=bottom,y=left y2=right
int num=1;
while(num<=n*n){
    for(int i=y;i<=y2;i++){
        spiral[x][i]=num;
        num++;
    }
    x++;
    for(int i=x;i<=x2;i++){
        spiral[i][y2]=num;
       num++;
    }
    y2--;
    for(int i=y2;i>=y;i--){
        spiral[x2][i]=num;
        num++;
    }
    x2--;
    for(int i=x2;i>=x;i--){
        spiral[i][y]=num;
        num++;
    }
    y--;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<spiral[i][j]<<" \t";
    }
    cout<<endl;
}
return 0;
}

