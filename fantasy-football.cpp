#include <iostream>
#include <string>
using namespace std;

int main() {
    string qbOne;
    string wrOne;
    string rbOne;
    string teOne;

    string qbTwo;
    string wrTwo;
    string rbTwo;
    string teTwo;
    
    string teamNameOne;
    string teamNameTwo;
    
    int qbOneYards;
    int qbOneTouchdowns;
    int qbTwoYards;
    int qbTwoTouchdowns;
    
    int wrOneYards;
    int wrOneTouchdowns;
    int wrTwoYards;
    int wrTwoTouchdowns;
    
    int rbOneYards;
    int rbOneTouchdowns;
    int rbTwoYards;
    int rbTwoTouchdowns;
    
    int teOneYards;
    int teOneTouchdowns;
    int teTwoYards;
    int teTwoTouchdowns;
    
    int teamOneScore;
    int teamTwoScore;
    
    cout << "Enter Team One Name: ";
    getline(cin, teamNameOne);
    
    cout << "Enter Team Two Name: ";
    getline(cin, teamNameTwo);
    
    cout << "Enter Team One QB Name: ";
    getline(cin, qbOne);
    cout << "Enter Team One WR Name: ";
    getline(cin, wrOne);
    cout << "Enter Team One RB Name: ";
    getline(cin, rbOne);
    cout << "Enter Team One TE Name: ";
    getline(cin, teOne);
    cout << endl;
    
    cout << "Enter Team Two QB Name: ";
    getline(cin, qbTwo);
    cout << "Enter Team Two WR Name: ";
    getline(cin, wrTwo);
    cout << "Enter Team Two RB Name: ";
    getline(cin, rbTwo);
    cout << "Enter Team Two TE Name: ";
    getline(cin, teTwo);
    cout << endl;
    
    cout << "The " << teamNameOne << ": \n" << "QB: " << qbOne << "\n" << "WR: " << wrOne << "\n" <<
    "RB: " << rbOne << "\n" << "TE: " << teOne << "\n";
    cout << endl;
    cout << "The " << teamNameTwo << ": \n" << "QB: " << qbTwo << "\n" << "WR: " << wrTwo << "\n" <<
    "RB: " << rbTwo << "\n" << "TE: " << teTwo << "\n";
    cout << endl;
    
    cout << "Enter Team One QB Yards: ";
    cin >> qbOneYards;
    cout << "Enter Team One QB Touchdowns: ";
    cin >> qbOneTouchdowns;
    cout << "Enter Team Two QB Yards: ";
    cin >> qbTwoYards;
    cout << "Enter Team Two QB Touchdowns: ";
    cin >> qbTwoTouchdowns;
    
    cout << "Enter Team One WR Yards: ";
    cin >> wrOneYards;
    cout << "Enter Team One WR Touchdowns: ";
    cin >> wrOneTouchdowns;
    cout << "Enter Team Two WR Yards: ";
    cin >> wrTwoYards;
    cout << "Enter Team Two WR Touchdowns: ";
    cin >> wrTwoTouchdowns;
    
    cout << "Enter Team One RB Yards: ";
    cin >> rbOneYards;
    cout << "Enter Team One RB Touchdowns: ";
    cin >> rbOneTouchdowns;
    cout << "Enter Team Two RB Yards: ";
    cin >> rbTwoYards;
    cout << "Enter Team Two RB Touchdowns: ";
    cin >> rbTwoTouchdowns;
    
    cout << "Enter Team One TE Yards: ";
    cin >> teOneYards;
    cout << "Enter Team One TE Touchdowns: ";
    cin >> teOneTouchdowns;
    cout << "Enter Team Two TE Yards: ";
    cin >> teTwoYards;
    cout << "Enter Team Two TE Touchdowns: ";
    cin >> teTwoTouchdowns;
    
    qbOneYards = qbOneYards / 25;
    qbOneTouchdowns = qbOneTouchdowns * 4;
    qbTwoYards = qbTwoYards / 25;
    qbTwoTouchdowns = qbTwoTouchdowns * 4;
    
    wrOneYards = wrOneYards / 10;
    wrOneTouchdowns = wrOneTouchdowns * 4;
    wrTwoYards = wrTwoYards / 10;
    wrTwoTouchdowns = wrTwoTouchdowns * 4;
    
    rbOneYards = rbOneYards / 10;
    rbOneTouchdowns = rbOneTouchdowns * 4;
    rbTwoYards = rbTwoYards / 10;
    rbTwoTouchdowns = rbTwoTouchdowns * 4;
    
    teOneYards = teOneYards / 10;
    teOneTouchdowns = teOneTouchdowns * 4;
    teTwoYards = teTwoYards / 10;
    teTwoTouchdowns = teTwoTouchdowns * 4;
    
    teamOneScore = qbOneYards + qbOneTouchdowns + wrOneYards + wrOneTouchdowns +
    rbOneYards + rbOneTouchdowns + teOneYards + teOneTouchdowns;
    teamTwoScore = qbTwoYards + qbTwoTouchdowns + wrTwoYards + wrTwoTouchdowns +
    rbTwoYards + rbTwoTouchdowns + teTwoYards + teTwoTouchdowns;
    
    cout << endl;
    
if (teamOneScore == teamTwoScore) {
    cout << "The " << teamNameOne << " tied the " << teamNameTwo << " \n";
    cout << "Both teams scored " << teamOneScore;
}
    
else if (teamOneScore > teamTwoScore) {
    cout << "The " << teamNameOne << " wins with a score of " << teamOneScore << " to " << teamTwoScore; }
    
else {
    cout << "The " << teamNameTwo << " wins with a score of " << teamTwoScore << " to " << teamOneScore;
}

   return 0;
}