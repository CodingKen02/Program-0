/*
Student Name: Kennedy Keyes
Student NetID: kfk38
Compiler Used: Visual Studio Code (with Mingw-w64, gdb, g++)
Program Description:
This program contains the Tokenizer class definitions.
*/

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Tokenizer { // creating the Tokenizer class for use
    stringstream ss;
    public:
    bool readLine(string &); // will read the remaining line of string
    void setString(const string &); // sets or resets the string
    void rewind(string *stream); // rewinds the pointer of the string to the front
    void clear(); // clears the string
    Tokenizer (string str) {
        ss << str;
        ss.exceptions (ios::failbit);

    }

    bool readBool() { // this will determine if the string is empty
        bool b;
        try {
            ss >> b;
            return true; // if the string is empty, return 0 (no error/true)
        }
        catch (ios_base::failure) {
            return false; // if the string is not empty, return 1 (error/false)
        }
    }

    int readInt() { // this will read integers
        int i;
        try {
            ss >> i;
            return i; // if there is an integer, return the integer
        }
        catch (ios_base::failure) {
            ss.clear();
            return 1; // if there is not an integer, return 1 (error/false)
        }
    }
    double readDouble() { // this will read doubles
        double d;
        try {
            ss >> d;
            return d; // if there is a double input, return the double
        }
        catch (ios_base::failure) {
            ss.clear();
            return 1; // if there is not a double input, return 1 (error/false)
        }
    }
    string readWord() { // this will read words
        string s;
        try {
            ss >> s;
            return s; // if there is a word, return the word
        }
        catch (ios_base::failure) {
            ss.clear();
            return "False"; // if there is not a word, return false
        }
    }
    string readChar() { // this will read char inputs
        string c;
        try {
            ss >> c;
            return c; // if there is a char input, return the char input
        }
        catch (ios_base::failure) {
            ss.clear();
            return "False"; // if there is not a char input, return false
        }
    }
    /*
    These definitons will continue to the next value instead of executing a stop from an error.
    This is working because of the try catch block initiated with most of the definitions.
    */
};