//print the matrix in spiral form


#include<iostream>
using namespace std;
int main()
{
     int r,c;
      cin>>r>>c;
      int mat[r][c];
       for(int i=0; i<r;i++){
          for(int j=0; j<c; j++){
                cin>>mat[i][j];
          }
       }

       int rowstart = 0, rowend= r-1, columnstart=0, columnend=c-1;
       while(rowstart<=rowend && columnstart<=columnend){
            
            for(int j=columnstart ; j<=columnend; j++){
                cout<<mat[rowstart][j]<<" ";
                
            }
            rowstart++;

            for(int i=rowstart; i<=rowend; i++){
                cout<<mat[i][columnend]<<" ";
                
            }
            columnend--;

            for(int j=columnend; j>=columnstart; j--){
                cout<<mat[rowend][j]<<" "; 
                
            }
            rowend--;

            for(int i=rowend; i>=rowstart; i--){
                cout<<mat[i][columnstart]<<" ";
                
            }
            columnstart++;

       }


     return 0;
}