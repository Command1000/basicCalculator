#include <iostream> 
#include <cmath>
using namespace std;

int main(){
long long A,B;
string c;
cout<<"注意!除法只取整數"<<endl;
cout<<"請輸入第一個數字";
cin>>A;
cout<<"請輸入運算符號";
cin>>c;
cout<<"請輸入第二個數字";
cin>>B;
if(c=="+"){
    cout<<A+B;
}
else if (c=="-")
{
    cout<<A-B;
}
else if (c=="*"){
    cout<<A*B;
}
else if (c=="/")
{
    cout<<A/B;
}
else if (c=="^")
{
    cout<<pow(A,B); 
}
else{
    cout<<"error";
}

}