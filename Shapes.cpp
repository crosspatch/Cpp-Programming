//Program will gives user option to choose which shape is desired and ask for the needed details

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    cout << "What would you like to draw today?"
         << "Press 1 for a square, 2 for a rectangle and 3 for a triangle";

    int choice;
    cin >> choice;

    int length, width;

    switch(choice){
        case 1:
            cout << "What length and width do you desire?";
            cin >> length;
            for(int i = 0; i< length; i++){
                for(int j = 0; j < length; j++){
                    cout << "*";
                }
                cout <<endl;
            }
            break;
        case 2:
            cout << "What length would you desire?";
            cin >> length;
            cout << "What width would you desire?";
            cin >> width;
            for(int i = 0; i < length; i++){
                for(int j = 0; j < width; j++){
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 3:
            cout << "What height would you desire?";
            cin >> length;
            cout << "What base length would you desire?";
            cin >> width;
            for(int row = 0; row< length; row++){
                for(int i = width - row -1; i > 0; i--){
                    cout << " ";
                }
                for(int j = 0; j < (row*2 )+1; j++){
                    cout << "*";
                }
                cout << endl;
            }
            break;
        default:
            break;
    }


    return 0;
}
