#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Function to reverse bits of a byte
unsigned char reverseBits(unsigned char byte) {
    unsigned char reversed = 0;
    for (int i = 0; i < 8; ++i) {
        reversed = (reversed << 1) | (byte & 1);
        byte >>= 1;
    }
    return reversed;
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <input file> <output file>" << endl;
        return 1;
    }

    string inputFilename = argv[1];
    string outputFilename = argv[2];

    // Open the input binary file
    ifstream inputFile(inputFilename, ios::binary);
    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    // Read the file content into a vector
    vector<unsigned char> buffer((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());
    inputFile.close();

    // Reverse the bits of each byte
    for (auto& byte : buffer) {
        byte = reverseBits(byte);
    }

    // Write the modified content to the output binary file
    ofstream outputFile(outputFilename, ios::binary);
    if (!outputFile) {
        cerr << "Error opening output file." << endl;
        return 1;
    }
    outputFile.write(reinterpret_cast<const char*>(buffer.data()), buffer.size());
    outputFile.close();

    cout << "Bit reversal completed successfully." << endl;
    return 0;
}