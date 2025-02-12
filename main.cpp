#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void printWithTypingEffect(const string &text, int speed_ms = 50) 
{
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speed_ms));
    }
    cout << endl;
}

int main()
{
    // Read in the backstory.txt and write it out to the screen
    ifstream inputFile;
    inputFile.open("backstory.txt");
    string line;
    do
    {
        getline(inputFile, line);
        printWithTypingEffect(line, 2);
    } while(inputFile); 
    inputFile.close();  

    // Write the rest of the game here......
}