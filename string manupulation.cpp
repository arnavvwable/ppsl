// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() 
{
    string str ="hello";

//concatenation 
string greeting = str + " ,World ";
cout<< "concatenation:"<< greeting << endl;
//substring
string part = greeting.substr(7,5);
cout<<"Substring:"<<part<<endl;
//find
size_t  pos=greeting.find("World");
cout<<"find: world:"<<pos<<endl;
//replace
string replaced = greeting;
replaced.replace(pos, 5 , "c++");
cout<<"replace:"<<replaced<<endl;
//erase
string erased = greeting;
erased.erase(5,7);
cout<<"erase:"<<erased<<endl;
//to uppercase
string uppercase=greeting;
for(char &c : uppercase)c = toupper(c);
cout<<"To uppercase:" <<uppercase<<endl;
 return 0;
}