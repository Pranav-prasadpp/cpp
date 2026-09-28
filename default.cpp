#include<iostream>
#include<string>
using namespace std;
void logMsg(const string &msg, int level =1){
const string tag[] = {" ","INFO","WARN","ERROR"};
cout<<"["<<tag[level]<<"]"<<msg<<endl;
} 
double intrest(double principal,double year,double rate= 7.5){
return principal*rate*year/100.0 ;
}
int main(){
logMsg ("System Started");
logMsg ("Low Memory",2);
cout<<"Enter the Principal Amount"<<endl;
double principal;
cin>>principal;
cout<<"Enter the Years"<<endl;
double years;
cin>>years;
cout<<"Intrest= "<<intrest(principal,years)<<endl;
cout<<"Intrest= "<<intrest(principal,years,9.0)<<endl;
return 0;
}