#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if(argc < 2) {
        cout<< "Usage: \nSend a file to check if it is a proper board for Conways game of life" << std :: endl;
        return 1;
    }

    string filename = argv[1];

    std :: ifstream inputFile(filename);

    if(!inputFile.is_open()) {
        cout<< "File not found.";
        return 1;
    } 

    string size;
    getline(inputFile, size);
    cout<< size[0] << " " << size[2];
    
    string firstline;
    // getline(inputFile, firstline);
    cout<< firstline;

}