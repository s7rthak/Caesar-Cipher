#include <iostream>
#include <string>
using namespace std;

int main(){
    //cin.tie(NULL);
    string word;
    cout<<"Shift : ";
    int shift; cin>>shift;
    cout<<"Enter text to cipher :"<<"\n";
    bool check = true;
    while(cin>>word && check){
        for(int i=0;i<word.size();i++){
            int x = int(word[i]);
            if(x>=65 && x<=90){
                x = x - 65;
                x = x + shift;
                if(x > 25){
                    x = x % 26;
                }
                x = x + 65;
                cout<<char(x);
            }
            else if(x>=97 && x<=122){
                x = x - 97;
                x = x + shift;
                if(x > 25){
                    x = x % 26;
                }
                x = x + 97;
                cout<<char(x);
            }
            else{
                cout<<"\n"<<"There is a non-letter character that I don't know how to cipher.";
                check = false;
                break;
            }
        }
        if(!check) break;
        cout<<" ";
    }
}
