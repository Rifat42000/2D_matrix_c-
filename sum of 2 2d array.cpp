#include<iostream>
using namespace std;
int main (){

int arr [3][3]=
                  {   {2,6,5},
                      {7,8,9},
                      {10,14,16}  };


int arr2 [3][3]=
                  {   {2,9,5},
                      {10,5,9},
                      {10,13,16}  };



int sum[3][3]   ={   {0,0,0},
                      {0,0,0},
                      {0,0,0}  };         

for(int r=0 ; r<3;r++){

    for(int c=0; c<3;c++ ){

 sum[r][c] =   arr[r][c]+arr2[r][c];

cout<<sum[r][c]<<" ";

    }
    cout<<endl;
    }

return 0;

}