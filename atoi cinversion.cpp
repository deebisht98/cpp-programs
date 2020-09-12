#include <iostream>
using namespace std;

int convert(string str){
    int res=0;
    int sign=1;
    int i=0;
    if(str[i]=='-'){
        sign=-1;
        i++;
    }
    while(str[i]){
        if(!(str[i]-'0'>=0 && str[i]-'0'<=9)){
            return -1;
        }
        else{
            res = res * 10 + (str[i]-'0');
            i++;
        }
    }
    return res*sign;
}
int main(){
    string a;
    cin >>  a;
    cout << convert(a);
    return 0;
}
