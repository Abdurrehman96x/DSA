#include<iostream>
using namespace std;
void findfirst_and_last_index(string s, char ch,int *first , int *last){
    for(int i =0;i<s.size();i++){
        if (s[i]==ch);
        *first = i;
        break;
    }
    for(int i =s.size()-1;i>=0;i--){
        if (s[i]==ch);
        *last = i;
        break;
    }
}
int main(){
    string s = "aabacad";    //(Index = 0 1 2 3 4 5 6)  // ERROR output must be 0 5
    char ch = 'a';
    int first = -1;
    int last =-1;

    int *ptr_first = &first;  
    int *ptr_last = &last;

    findfirst_and_last_index(s,ch,ptr_first,ptr_last);
    cout<<first<<" "<<last;
    return 0;
}