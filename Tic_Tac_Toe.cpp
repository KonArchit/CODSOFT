#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'X';
int row,column;
bool draw = false;

void display_board(){

    system("cls");
    cout<<"\n\t\t || TIC TAC TOE GAME || "<<endl<<endl;
    cout<<"\t Player1 [X] \n\t Player2 [0]\n\n"<<endl;
    cout<<"\t\t    |    |    \n";
    cout<<"\t\t  "<<board[0][0]<<" |  "<<board[0][1]<<" |  "<<board[0][2]<<"\n";
    cout<<"\t\t____|____|____\n";
    cout<<"\t\t    |    |    \n";
    cout<<"\t\t  "<<board[1][0]<<" |  "<<board[1][1]<<" |  "<<board[1][2]<<"\n";
    cout<<"\t\t____|____|____\n";
    cout<<"\t\t    |    |    \n";
    cout<<"\t\t  "<<board[2][0]<<" |  "<<board[2][1]<<" |  "<<board[2][2]<<"\n";
    cout<<"\t\t    |    |    \n";
}

void player_turn(){

    int choice;
    if(turn == 'X'){
        cout<<"\n\t Player1 [X] Turn: ";
    }
    if(turn == '0'){
        cout<<"\n\t Player2 [0] Turn: ";
    }
    cin>>choice;

    switch (choice)
    {
        case 1:
        row = 0, column = 0;
        break;
        case 2:
        row = 0, column = 1;
        break;
        case 3:
        row = 0, column = 2;
        break;
        case 4:
        row = 1, column = 0;
        break;
        case 5:
        row = 1, column = 1;
        break;
        case 6:
        row = 1, column = 2;
        break;
        case 7:
        row = 2, column = 0;
        break;
        case 8:
        row = 2, column = 1;
        break;
        case 9:
        row = 2, column = 2;
        break;
    
    default:
        cout<<"Invalid Choice"<<endl;
        break;
    }

    if(turn == 'X' && board[row][column]!='X' && board[row][column]!= '0'){
        board[row][column] = 'X';
        turn = '0';   
    }
    else if(turn == '0' && board[row][column]!='X' && board[row][column]!= '0'){
        board[row][column] = '0';
        turn = 'X';   
    }
    else{
        cout<<"Box is Already Filled ! \n Enter valid choice !! \n";
        player_turn();
    }
    display_board();
}

bool game_over(){
    
    // if player win the game.
    for(int i=0; i<3; i++){
        // Row and Column check.
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
        return false;

        // Diagnol check.
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;
    }

    // if there any box is empty.
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(board[i][j]!='X' && board[i][j]!='0')
            return true;
        }
    }

    // if game is draw.
    draw = true;
    return false;
}

int main()
{
    while (game_over())
    {
        display_board();
        player_turn();
        game_over();
    }

    if(turn == 'X' && draw == false){
        cout<<"\n\t Player2 [0] wins! \n"<<endl;
    }
    else if(turn == '0' && draw == false){
        cout<<"\n\t Player1 [X] wins! \n"<<endl;
    }
    else{
        cout<<"\n\t Game Draw! \n";
    }
}