//
//Implement a method to perform basic string compression using the counts  of repeated characters. For example, the string aabcccccaaa would become  a2b1c5a3. 
//If the "compressed" string would not become smaller than the original string,your method should return the original string. 
//
//intput:  aabcccccaaa 
//output:  a2b1c5a3 
//
//input: aaaaabcdefa  --/--> a5b1c1d1e1f1a1 
//output: aaaaabcdefa   

#include <iostream>
#include <string>
using namespace std;

string compress(const string &s){
 
    char currchar = s[0];
    int count = 1;
    string res = "";
    
    for(int i=1; i<=s.size(); i++){
        
        if(s[i]==currchar && i != s.size()){
            count++;
        }
        else{
            res += currchar;
            res.append(to_string(count));
            count = 1;
            currchar = s[i];
        }
    }
    return (res.size()<s.size()) ? res : s;
}

int main()
{
     string s = "aabcccccaaa";
     string data = compress(s);
     cout << data;
     
     string s = "aaaaabcdefa";
     string data = compress(s);
     cout << data;
     
     
     return 0;
}
