#include <fstream>
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char* argv[]){

    ofstream my_file;
    my_file.open("hi.txt");

    string my_string = "Hello World!";

    my_file << my_string;

    my_file.close();

    return 0;
}
