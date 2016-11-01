#include <iostream>
#include <vector>

using namespace std;

int main() {
    int problem[3][3] = {{1, 2, 3}, {4, 8, 0}, {7, 6, 5}};
    
    cout << "Welcome to Dharti Tarapara's 8-puzzle solver." << endl;
    cout << " Type 1 to use a default puzzle, or 2 to enter your own puzzle"
         << endl;
    
    int choice = 0;
    cin >> choice;
    
    if (choice == 2) {
        int val = 0;
        
        cout << "Enter your puzzle, use a zero to represent the blank." << endl;
        cout << "Enter the first row, use space or tabs between numbers." << endl;
        
        for (int i = 0; i < 3; ++i) {
            cin >> val;
            problem[0][i] = val;
        }
        
        cout << "Enter the second row, use space or tabs between numbers." << endl;
        
        for (int i = 0; i < 3; ++i) {
            cin >> val;
            problem[1][i] = val;
        }
        
        cout << "Enter the third row, use space or tabs between numbers." << endl;
        
        for (int i = 0; i < 3; ++i) {
            cin >> val;
            problem[2][i] = val;
        }
    }
    
    cout << "Enter your choice of algorithm." << endl
         << "Uniform Cost Search" << endl << "A* with misplaced tile heuristic"
         << endl << "A* with the Manhattan distance heuristic" << endl;
    
    int algorithm = 0;
    cin >> algorithm;
    
    // check prompt
    
    cout << endl << endl << "array stored" << endl;
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << problem[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "algorithm stored: " << algorithm << endl;
    
    return 0;
}