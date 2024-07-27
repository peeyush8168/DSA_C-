/*#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string str="Hello World!";
    size_t pos=str.find("World");
    if (pos!=string::npos){
        cout<<"'World' found at position: "<<pos<<endl;
    }
    else{
        cout<<"'World' not found."<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
#include <string>
#include<set>
using namespace std;
/*int main() {
  string str = "Hello, World!";
  cout << "Length: " << str.length() << endl;
  cout << "Size: " << str.size() <<endl;
  //insert
   str.insert(7, "World");
  cout << "Inserted string: " << str <<endl;
 return 0;
 //erase
 str.erase(5, 7); // Erase ", World"
  cout << "Erased string: " << str <<endl;
int main() {
  string str1="Hello";
  string str2="World";
  int result=str1.compare(str2);
  if (result==0) {
    cout<<"Strings are equal."<<endl;
  }
  else if (result<0) {
    cout<<"str1 is less than str2."<<endl;
  }
  else{
    cout<<"str1 is greater than str2."<<endl;
  }
  return 0;
}
*/


// Duplicate string
#include <iostream>
#include <sstream>
#include <map>
using namespace std;
int main() {
    string x;
    getline(cin, x);
    stringstream obj(x);
    string temp;
    map<string, int> wordCount;
    while (obj>>temp) {
         wordCount[temp]++;
    }
    for (const auto& entry : wordCount) {
        cout <<entry.first<< " : "<<entry.second<<"   ";
    }
    return 0;
}
