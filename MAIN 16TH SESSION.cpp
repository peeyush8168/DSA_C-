/*File Handling- File Handling in C++ is a mechanism to create and perform read/write operations on a file.
We can access various file handling methods in C++ by importing the <file>
*/

/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // opening a text file for writing. You can use open() to open file.
    // ofstream my_file("example.txt");
    ofstream my_file("example.txt");
    // Checking the files for error.
    // 1st way of finding the error.
    // if (!my_file.is_open()){
    // 2nd way of finding the error.
    // if (my_file.fail()){
    // 3rd way of finding the error.
    // if (!myfile){
    cout<<"Error opening the file."<<endl;
    // terminate the program.
    return 1;
}
    // close the file
    my_file.close();
    return 0;
}
*/



// Read data from a file.
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream my_file("example.txt");
    // check the file for errors
    if(!my_file){
        cout<<"Error Unable to open the file."<<endl;
        return 1;
    }
    // store the contents of the file in "line" string
    string line;
    cout<<"Mohan 30"<<endl;
    cout<<"Moye Moye 40"<<endl;
    cout<<"Jitu 50"<<endl;
    // loop until the end of the text file
    while(!my_file.eof()){
        // store the current line of the file in the "line" variable
        getline(my_file,line);
        // print the line variable
        cout<<line<<endl;
    }
    my_file.close();
    return 0;
}
*/



// Read data from a file.
/*#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt", ios::app);
    // check the file for errors
    if(!my_file){
        cout<<"Error Unable to open the file."<<endl;
        return 1;
    }
    my_file<<"Mohan 30"<<endl;
    my_file<<"Moye Moye 40"<<endl;
    my_file<<"Jitu 50"<<endl;
    my_file.close();
    return 0;
}
*/


#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main() {
    // First, write data to the file
    ofstream my_file("example.txt", ios::app);
    if(!my_file) {
        cout << "Error: unable to open the file for writing." << endl;
        return 1;
    }
    my_file << "Subash 40" << endl;
    my_file << "Maya 50" << endl;
    my_file << "Rajesh 60" << endl;
    my_file.close();
    // Now, read data from the file and calculate sum and average
    ifstream read_file("example.txt");
    if(!read_file) {
        cout << "Error: unable to open the file for reading." << endl;
        return 1;
    }
    string line;
    int sum=0;
    int count=0;
    while (getline(read_file, line)) {
        istringstream value(line);
        string name;
        int mark;
        if (value >> name >> mark) {
            sum += mark;
            count++;
        }
    }
    read_file.close();
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Sum of marks: " << sum << endl;
        cout << "Average mark: " << average << endl;
    } else {
        cout << "No data found in the file." << endl;
    }
    return 0;
}
