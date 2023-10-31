#include <iostream.h>
#include <fstream.h>

int main() {
    ofstream outfile("data.txt"); // Create a file for writing

    if (!outfile) {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Writing data to the file
    outfile << "Hello, World!" << endl;
    outfile << "This is a Turbo C++ file handling example." << endl;
    outfile.close();
    cout << "Data written to file successfully." << endl;

    ifstream infile("data.txt"); // Create a file for reading

    if (!infile) {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    // Reading data from the file
    char ch;
    while (!infile.eof()) {
        infile.get(ch);
        cout << ch;
    }

    infile.close();

    return 0;
}
