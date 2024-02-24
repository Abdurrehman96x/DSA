#include <iostream>
using namespace std;
// REVERSE SRING
void reverse(string s){
    if(s.length()==0){  // base case
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0]<<" ";
}
// REPLACE-Pi
void replacePI(string s){
    if(s.length()==0){      // base case
        return;
    }
    if(s[0]=='p'&& s[1]=='i'){
        cout<<"3.14";
        replacePI(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePI(s.substr(1));
    }
}

// Tower of Hanoi
void tower_of_Hanoi(int n,char src,char dest,char helper){
    if(n==0){   // base case
        return;
    }
    tower_of_Hanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    tower_of_Hanoi(n-1,helper,dest,src);
}

// Remove All duplicates from the string
string remove_duplicates(string s){
    if(s.length()==0){
        return "" ;
    }
    char ch=s[0];
    string ans = remove_duplicates(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);


}
// MOVE all x in the string
string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));
    if(ch=='x'){
        return (ans+ch);
    }
    return ch+ans;
}
// finding sub strings
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);

}
// finding sub strings With ASCII 
void subseq_with_ASCII(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    int code = ch;
    subseq_with_ASCII(ros,ans);
    subseq_with_ASCII(ros,ans+ch);
    subseq_with_ASCII(ros,ans+ to_string(code));

}

// All possible words from phone digit
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch =s[0];
    string code =keypadArr[ch-'0'];
    string ros =s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans +code[i]);
    }
}
int main(){
    //reverse("binod");
   // replacePI("pippxxppixipi");
  // tower_of_Hanoi(3,'A','C','B');
    //cout<<remove_duplicates("aaabbeedff");
    //cout<<moveallx("abdxxadxefx");
   // subseq_with_ASCII("ABC","");
   // subseq_with_ASCII("AB","");
    //cout<<endl;
    keypad("23","");
    return 0;
}