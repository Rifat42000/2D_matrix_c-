#include<iostream>
using namespace std;
int main (){

int arr [3][3]=
                  {   {2,6,5},
                      {7,8,9},
                      {10,14,16}  };





int transpose[3][3] ;   

for(int r=0 ; r<3;r++){

    for(int c=0; c<3;c++ ){

 transpose[r][c] =   arr[c][r];

cout<<transpose[r][c]<<" ";

    }
    cout<<endl;
    }

return 0;

}