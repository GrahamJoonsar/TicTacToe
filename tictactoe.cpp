#include <iostream>
#include <stdlib.h>

using namespace std;

string A1 = " ", A2 = " ", A3 = " ",
       B1 = " ", B2 = " ", B3 = " ",
       C1 = " ", C2 = " ", C3 = " ";

int turn = 0;
bool notOver = true;

void Draw(){
    system("CLS");
    cout << A1 << " | " << A2 << " | " << A3 << endl;
    cout << "=========" << endl;
    cout << B1 << " | " << B2 << " | " << B3 << endl;
    cout << "=========" << endl;
    cout << C1 << " | " << C2 << " | " << C3 << endl;
}

void Positions(){
    cout <<  "   1" << "  2" << "  3" << endl;
    cout << "A " << A1 << " | " << A2 << " | " << A3 << endl;
    cout << "  =========" << endl;
    cout << "B " << B1 << " | " << B2 << " | " << B3 << endl;
    cout << "  =========" << endl;
    cout << "C " << C1 << " | " << C2 << " | " << C3 << endl;
    cout << "Put your inputs in (capital letter)(number) format." << endl << "Example:" << endl << "  A1" << endl;
}

void ProcessingInput(string input, int player){
    if (input == "A1" && A1 == " "){
        if (player == 0){
            A1 = "X";
        } else {
            A1 = "O";
        }
    }
    if (input == "A2" && A2 == " "){
        if (player == 0){
            A2 = "X";
        } else {
            A2 = "O";
        }
    }
    if (input == "A3" && A3 == " "){
        if (player == 0){
            A3 = "X";
        } else {
            A3 = "O";
        }
    }
    if (input == "B1" && B1 == " "){
        if (player == 0){
            B1 = "X";
        } else {
            B1 = "O";
        }
    }
    if (input == "B2" && B2 == " "){
        if (player == 0){
            B2 = "X";
        } else {
            B2 = "O";
        }
    }
    if (input == "B3" && B3 == " "){
        if (player == 0){
            B3 = "X";
        } else {
            B3 = "O";
        }
    }
    if (input == "C1" && C1 == " "){
        if (player == 0){
            C1 = "X";
        } else {
            C1 = "O";
        }
    }
    if (input == "C2" && C2 == " "){
        if (player == 0){
            C2 = "X";
        } else {
            C2 = "O";
        }
    }
    if (input == "C3" && C3 == " "){
        if (player == 0){
            C3 = "X";
        } else {
            C3 = "O";
        }
    }
}

void WinningLogic(){
    // Top horizontal
    if (A1 == A2 && A1 == A3 && A1 != " "){
        cout << "Player " << A1 << " wins!";
        notOver = false;
    }
    // Middle horizontal
    if (B1 == B2 && B1 == B3 && B1 != " "){
        cout << "Player " << B1 << " wins!";
        notOver = false;
    }
    // Bottom horizontal
    if (C1 == C2 && C1 == C3 && C1 != " "){
        cout << "Player " << C1 << " wins!";
        notOver = false;
    }
    
    // Left vertical
    if (A1 == B1 && A1 == C1 && A1 != " "){
        cout << "Player " << A1 << " wins!";
        notOver = false;
    }
    // Middle vertical
    if (A2 == B2 && A2 == C2 && A2 != " "){
        cout << "Player " << A2 << " wins!";
        notOver = false;
    }
    // Right vertical
    if (A3 == B3 && A3 == C3 && A3 != " "){
        cout << "Player " << A3 << " wins!";
        notOver = false;
    }

    // Top right to bottom left
    if (A1 == B2 && A1 == C3 && A1 != " "){
        cout << "Player " << A1 << " wins!";
        notOver = false;
    }
    // Bottom right to top left
    if (C1 == B2 && C1 == A3 && C1 != " "){
        cout << "Player " << C1 << " wins!";
        notOver = false;
    }
}

void Input(){
    while (turn < 9 && notOver){
        string input;
        cout << "Player one: ";
        cin >> input;
        turn += 1;
        ProcessingInput(input, 0);
        Draw();
        WinningLogic();
        if (notOver && turn < 9){
            cout << "Player two: ";
            cin >> input;
            turn += 1;
            ProcessingInput(input, 1);
            Draw();
            WinningLogic();
        } else {
            cout << "Full Board!" << endl << "Tie!";
        }
    } 
}

int main(){
    Positions();
    Input();
}