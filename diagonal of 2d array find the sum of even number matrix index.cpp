#include <iostream>
using namespace std;

int main (){
int nor;

int sum =0;
cout<<"Enter the row and column number :-"<<endl;
cin>> nor;
int arr[nor][nor];
for( int r =0; r<nor; r++){
 for ( int c = 0 ; c<nor ; c++){
cin>>arr [r] [c];

    }
}
for( int r =0; r<nor; r++){
 for (int  c = 0 ; c<nor ; c++){


cout <<arr[r][c]<< " ";


    }
    cout<<endl;
}
cout<<endl;
for( int r =0; r<nor; r++){
 for (int  c = 0 ; c<nor ; c++){
if ( r==c && r%2==0 && c%2==0){

cout <<arr[r][c]<< " ";
sum = sum + arr[r][c];
}
    }
    cout<<endl;
}


cout<<"Sum of numbers :"<<sum<<endl;





return 0;
}




    