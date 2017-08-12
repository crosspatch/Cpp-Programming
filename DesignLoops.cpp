//using loops this time

//libraries
#include <iostream>
#include <string>

//standard library stuff we'll use over and over
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    
    //ask for name
    cout << "Please enter your first name: ";

    //read the name
    string name;
    cin >> name;

    //build the message for the middle
    const string greeting = "Hello, " + name + "!";

    //the number of blanks surrounding the greeting
    const int pad = 1;
    const int pad2 = 2;

    //the number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad2 * 2 + 2; //used to store the size of a string

    //write a blank line to separate the output from the input
    cout << endl;

    //write rows of output
    //invariant: we have written r rows so far
    for(int r = 0; r != rows; ++r){
        string::size_type c = 0;
        while(c != cols){
            //is it time to write the greeting?
            if(r == pad + 1 && c == pad2 + 1){
                cout << greeting;
                c += greeting.size();
            }
            else{
                //are we on the border?
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
                    cout << "*";
                else 
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }

    return 0;
}
