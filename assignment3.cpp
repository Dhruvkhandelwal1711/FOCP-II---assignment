/*String Manipulation

Write a program that:

a. Accepts a string from the user.

b. Checks whether the string is a palindrome (ignoring spaces and case sensitivity).

c. Counts and displays the frequency of each character in the string (case insensitive).

d. Replace all vowels in the string with a specific character (e.g. ").*/
#include<iostream>
#include<string>
using namespace std;
int main(){
//Accepts a string from the user.  
string str,newStr="",reverseStr="";
char replaceChar='*';
cout<<"Please enter string:";
getline(cin,str);
for(int i=0;i<str.length();i++){
    char ch=str[i];
    if(ch>='A'&&ch<='Z'){
        ch+=32;
    }
    if(ch!=' '){
         newStr=newStr+ch;
    }
    }
    for(int i=newStr.length()-1;i>=0;i--){
reverseStr+=newStr[i];
    }
   // Checks whether the string is a palindrome (ignoring spaces and case sensitivity).
    if(newStr==reverseStr){
        cout<<str<<" String is palindrome"<<endl;
    }else{
        cout<<str<<" String is not palindrome"<<endl; 
    }
//Replace all vowels in the string with a specific character (e.g. ").
for(int i=0;i<newStr.length();i++){
    char ch=newStr[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<replaceChar;
    }else{
        cout<<ch;
    }
}
//Counts and displays the frequency of each character in the string (case insensitive).
   cout<<"\n number of times character"<<endl;
for(char ch='a';ch<='z';ch++){
    int count=0;
    for(int i=0;i<newStr.length();i++){
        if(newStr[i]==ch){
            count++;
        }
    }
    if(count>0){
        cout<<ch<<"="<<count<<endl;
    }
}
return 0;
    }

