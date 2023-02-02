/*
Student Name: Kennedy Keyes
Student NetID: kfk38
Compiler Used: Visual Studio Code (with Mingw-w64, gdb, g++)
Program Description:
This program strips a string down by words, integers, doubles, 
and will read the remaining string or clear it. Then it will 
reset the string to its original value.
*/

#include "Tokenizer.h"

int main() {
    Tokenizer tkn ("101 + 201.34 = 50 is incorrect"); // Setting the string for the Tokenizer class to use
    cout << tkn.readInt() << endl;
    cout << tkn.readChar() << endl;
    cout << tkn.readDouble() << endl;
    cout << tkn.readChar() << endl;
    cout << tkn.readInt() << endl;
    cout << tkn.readWord() << endl;
    cout << tkn.readWord() << endl;

    return 0; // output should be in terminal
}