#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // opening and creating a file
    ofstream outputfile;
    outputfile.open("filename.txt");
    // writing in the file
    outputfile << "My name is Manish."<<endl;
    outputfile << "My name is Shubham.";

    // closing the write file
    outputfile.close();

    // reading  from the file
    string myText;
    ifstream readfile;
    readfile.open("filename.txt");

    while (readfile.eof() == 0)
    {
        getline(readfile, myText);
        cout << myText << endl;
    }

    readfile.close();

    return 0;
}