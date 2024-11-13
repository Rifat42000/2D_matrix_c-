#include <iostream>
using namespace std;

int main (){
int nor ;
int sum =0;


cout<<"Enter the row and column"<<endl;
cin >>nor ;



int arr[nor][nor];


for (int r =0; r<nor;r++){
for ( int c =0; c<nor ;c++){
cin>>arr[r][c];
}}




for (int r =0; r<nor;r++){
for ( int c =0; c<nor ;c++){
cout<<arr[r][c]<<" ";
}
cout<<endl;}

for (int r =0; r<nor;r++){
for ( int c =0; c<nor ;c++){
if (r ==c || c == nor-1||r == nor-1){

sum = sum + arr[r][c];

}}

}

cout<<"Sum of the numbers :"<<sum<<endl;

return 0;


}




