// learn cpp - File Management
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string data;
    // file reading and writing class ifnstream object
    // opens file in reading mode
    ifstream fin;
    fin.open("test.txt");

    // file is opened and data transfered to data string
    fin >> data;

    cout<<"file is opened and data transfered to data string"<<endl;
    cout<<"data in data string : ";
    int index = 0;
    while(data[index]!='\0'){
        /* code */
        cout<<data[index];
        index++;
    }

    cout<<endl;
    ofstream fout;
    fout.open("test.txt");

    // again data is transfered to test file
    fout << data;
    cout<<"again data is transfered to test file"<<endl;
    cout<<"Data in data string : "<<data <<endl;

    // here fin and fout object acts as reading and writing mode for file
    return 0;
}