#include <iostream>
#include <string>
using namespace std;
string Toroman(int num){
    if(num>=1000) return "M"+Toroman(num-1000);
    if(num>=900) return "CM"+Toroman(num-900);
    if(num>=500) return "D"+Toroman(num-500);
    if(num>=400) return "CD"+Toroman(num-400);
    if(num>=100) return "C"+Toroman(num-100);
    if(num>=90) return "XC"+Toroman(num-90);
    if(num>=50) return "L"+Toroman(num-50);
    if(num>=40) return "XL"+Toroman(num-40);
    if(num>=10) return "X"+Toroman(num-10);
    if(num>=9) return "IX"+Toroman(num-9);
    if(num>=5) return "V"+Toroman(num-5);
    if(num>=4) return "IV"+Toroman(num-4);
    if(num>=1) return "I"+Toroman(num-1);

    return "";
}

int main(){
    int num;
    cin>>num;
    cout<<Toroman(num);
}