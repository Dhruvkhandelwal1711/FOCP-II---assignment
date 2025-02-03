/*2. Array Operations

Write a program that performs the following operations on an array:

a. Accept an integer array from the user (size determined at runtime).

b. Reverse the array and display it

c. Find and display the second largest and second smallest elements in the array.
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,i;//n is size of an array
//Accept an integer array from the user (size determined at runtime)
cout<<"Enter number of elements you want to input:"<<endl;
cin>>n;
int arr[n];
for( i=0;i<n;i++){
    cout<<"enter elements:"<<i+1<<"="<<" ";
    cin>>arr[i];
}
cout<<"elements are:"<<endl;
for(i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
//Reverse the array and display it
    cout<<"reverse elements are:"<<endl;
for(i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
}
//Find and display the second largest and second smallest elements in the array.
sort(arr,arr+n);
cout<<"sorted array:"<<endl;
for(i=0;i<n;i++){
cout<<arr[i]<<endl;
}
int arr_noduplicate[n],size=0;
for(i=0;i<n;i++){
    if(arr[0]||arr[i]!=arr[i-1]){
       arr_noduplicate[size]=arr[i];
       size++;
    }
}
if(size<2){
    cout<<"there is no enough number to find second smallest and largest number"<<endl;
}else{
    cout<<"second smallest number is:"<<arr_noduplicate[1]<<endl;
    cout<<"second largest number is:"<<arr_noduplicate[size-2]<<endl;
}
return 0;
}