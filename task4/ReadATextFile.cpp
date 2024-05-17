#include <iostream>
#include <fstream>
#include <string>

// Use the 'std' namespace globally
using namespace std;

// Declare fileData globally
std::string fileData;

int main() {
    // Open the input file
    ifstream inputFile("input.txt");

    // Check if the file was opened successfully
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read the file contents into fileData
    std::getline(inputFile, fileData);

    // Close the file
    inputFile.close();

    // Print the contents of input.txt
    cout << "Contents of input.txt:\n" << fileData << endl;

    return 0;
}