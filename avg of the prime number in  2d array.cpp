#include<iostream>
using namespace std;
int main(){
    int noR;
     float sum=0 ,avg; int countt=0;
    cout<<"Enter the Row and column Number :"<<endl;
    cin>>noR;
    int arr[noR][noR];
    cout<<"Insert the values :"<<endl;
    for(int row=0;row<noR;row++){
        for(int col=0;col<noR;col++){
           cin>>arr[row][col];
        }
    }
    for(int row=0;row<noR;row++){
        for(int col=0;col<noR;col++){
           cout<<arr[row][col]<<"  ";
        }
        cout<<endl;
    }
    for(int row=0;row<noR;row++){sum=0;
        countt=0;
            cout<<"Prime Numbers for Row "<<row+1<<" :";

        for(int col=0;col<noR;col++){
                if(arr[row][col]==2 || arr[row][col]==3 ||arr[row][col]%5==0|| arr[row][col]%7==0 ||arr[row][col]%17==0){
                    cout<<arr[row][col]<<" , ";
                     countt=countt+1;
                     sum=sum+arr[row][col];
                }
                else if(arr[row][col]!=2){
                        if(arr[row][col]!=1 && arr[row][col]%arr[row][col]==0 && arr[row][col]%2!=0 && arr[row][col]%3!=0 && arr[row][col]%5!=0&& arr[row][col]%7!=0 &&arr[row][col]%17!=0){

                    cout<<arr[row][col]<<" , ";

 countt=countt+1;
 sum=sum+arr[row][col];
                } }



         avg=sum/countt;
        }
        cout<<endl;

        cout<<"Average for row "<<row+1<<" :"<<avg<<endl;


        }
        return 0;
}