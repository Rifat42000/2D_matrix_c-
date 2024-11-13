#include<iostream>
using namespace std;
int main (){

int arr [3][3]=
                  {   {2,6,5},
                      {7,8,9},
                      {10,14,16}  };





int sum =0;
for(int r=0 ; r<3;r++){

    for(int c=0; c<3;c++ ){

if ( r!=0 && c!=0 && r!=3-1 && c !=3-1){

sum = sum + arr[r] [c];
}



    }

    cout<<endl;
    }
        cout<<"Sum :-"<<sum<<" ";


return 0;

}