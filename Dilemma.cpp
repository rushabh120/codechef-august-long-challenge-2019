#include<iostream>
#include<string>
using namespace std;

 int main(){

long long int test_case,len,one,zero;
string s;
cin>>test_case;
while(test_case-->0){
    one=zero=0;
    cin>>s;
    len=s.length();
    for(long long int i=0;i<len;i++){
        if(s[i]=='1'){
            one++;
        }else{
            zero++;
        }
    }
    if((one==0 && zero==len)||(one==len && zero==0)){
        cout<<"LOSE"<<endl;
    }else if(one==1){
        cout<<"WIN"<<endl;
    }
    else{
        if(one==zero){
            cout<<"LOSE"<<endl;
        }else{
            if(one%2==1){
                cout<<"WIN"<<endl;
            }else{
                cout<<"LOSE"<<endl;
            }
        }
    }
}
return 0;

}

