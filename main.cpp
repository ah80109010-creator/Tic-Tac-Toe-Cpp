#include<iostream>
#include<string>
using namespace std;
int main(void){
    string board[3][3]={
        {" "," "," "},
        {" "," "," "},
        {" "," "," "}
    };
    
    const char player_X='X';
    const char  player_O='O';
    char current_Player=player_X;
    int r=-1;
    int c=-1;
    string winner=" ";
  //Print game Board
  for(int i=0; i<9; i++){
    if(winner!=" "){
        break;
    }
  
        cout<<"   |   |   "<<endl;
        cout<<" " <<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
        cout<<"___|___|____"<<endl;
        cout<<" " <<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
        cout<<"___|___|____"<<endl;
        cout<<" " <<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
        cout<<"   |   |   "<<endl;
        while(true){
            cout<<"Current player is: "<<current_Player<<endl;
            cout<<"Enter r,c 0-2 for rows and columns: ";
            cin>>r>>c;
            if(c<0 || c>2 && r<0 || r>2){
                cout<<"Invalud Input Try Again!"<<endl;
            }
            else if(board[r][c]!=" "){
                cout<<"The tile is full try other one "<<endl;
            }
            else{
                break;
            }
        }
        board[r][c]=current_Player;
        current_Player=(current_Player==player_X)? player_O : player_X;
        for(int r=0 ; r<3 ; r++){
            if(board[r][0]!=" " && board[r][0]==board[r][1] && board[r][1]==board[r][2]){
                winner=board[r][0];
                break;
            }
        }
        for(int c=0; c<3; c++){
            if(board[0][c]!=" " && board[0][c]==board[1][c] && board[1][c]==board[2][c]){
                winner=board[0][c];
                break;
            }
        }
        if(board[0][0]!=" " && board[0][0]== board[1][1] && board[1][1]== board[2][2])
            winner=board[0][0];
        else if(board[0][2]!=" " && board[0][2]== board[1][1] && board[1][1]== board[2][0])
            winner=board[0][2];
        
    }
    cout<<"   |   |   "<<endl;
        cout<<" " <<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
        cout<<"___|___|____"<<endl;
        cout<<" " <<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
        cout<<"___|___|____"<<endl;
        cout<<" " <<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
        cout<<"   |   |   "<<endl;
    if(winner!=" "){
        cout<<winner<<" is the winner";
    }
    else{
        cout<<"It is a Draw";
    }
    system("Pause");
    
}
