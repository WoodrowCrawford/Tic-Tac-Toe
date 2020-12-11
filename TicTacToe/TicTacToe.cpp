#include <iostream>


void printArray()
{
    int arrayStuff[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12};
    int i = 0;

    while (i <= arrayStuff[i])
    {
        std::cout << arrayStuff[i++] << std::endl;
    }

    //system("cls") to clear screen
}

void playTicTacToe()
{
    bool _gameOver = false;
    char player1Name[15];
    char player2Name[15];
    bool player1Turn = false;
    int player2Turn;
    int player1Choice;
    int player2Choice;
   
        //This gets the player names
        std::cout << "Welcome to Tic Tak Toe! Player 1, please input your name." << std::endl;
        std::cout << "Player 1:";
        std::cin >> player1Name;
        system("cls");
        std::cout << "Player 2, please input your name." << std::endl;
        std::cout << "Player 2:";
        std::cin >> player2Name;
        system("cls");

        std::cout << "Player 1 Name: " << player1Name << std::endl;
        std::cout << "Player 2 Name: " << player2Name << std::endl;
        system("pause");
  

        //This sets the grid of the game
        
        int grid[3][3] = { {0, 0, 0 }, {0, 0, 0}, {0, 0, 0} };
            
        if (_gameOver == false)
        {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    std::cout << grid[i][j];
                }
                std::cout << std::endl;
            }
        }


        //Makes the players take turns until one of them wins
        while (_gameOver == false)
        {
            //This is player 1's turn
            std::cout << player1Name << ", it's your turn." << " 1.TopLeft, 2.TopMid, 3.TopRight, " << std::endl << "4.MidLeft, 5.Mid, 6.MidRight, " << std::endl << " 7.BotLeft, 8.BotMid, 9.BotRight";
            std::cin >> player1Choice;
            if (player1Choice == 1)
            {
                grid[0][0] = 1;
            }
            else if (player1Choice == 2)
            {
                grid[0][1] = 1;
            }
            else if (player1Choice == 3)
            {
                grid[0][2] = 1;
            }
            else if (player1Turn == 4)
            {
                grid[1][0] = 1;
            }
            else if (player1Choice == 5)
            {
                grid[1][1] = 1;
            }
            else if (player1Choice == 6)
            {
                grid[1][2] = 1;
            }
            else if (player1Choice == 7)
            {
                grid[2][0] = 1;
            }
            else if (player1Choice == 8)
            {
                grid[2][1] = 1;
            }
            else if (player1Choice == 9)
            {
                grid[2][2] = 1;
            }
            else if (player1Choice > 9)
            {
                system("cls");
                std::cout << "You went out of bounds... so your pencil broke this turn." << std::endl;
            }
            if (_gameOver == false)
            {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        std::cout << grid[i][j];
                    }
                    std::cout << std::endl;
                }
            }
           

         
            //This is player 2's turn
            std::cout << player2Name << ", it's your turn." << " 1.TopLeft, 2.TopMid, 3.TopRight, " << std::endl << "4.MidLeft, 5.Mid, 6.MidRight, " << std::endl << " 7.BotLeft, 8.BotMid, 9.BotRight";
            std::cin >> player2Choice;
            if (player2Choice == 1)
            {
                grid[0][0] = 2;
            }
            else if (player2Choice == 2)
            {
                grid[0][1] = 2;
            }
            else if (player2Choice == 3)
            {
                grid[0][2] = 2;
            }
            else if (player2Choice == 4)
            {
                grid[1][0] = 2;
            }
            else if (player2Choice == 5)
            {
                grid[1][1] = 2;
            }
            else if (player2Choice == 6)
            {
                grid[1][2] = 2;
            }
            else if (player2Choice == 7)
            {
                grid[2][0] = 2;
            }
            else if (player2Choice == 8)
            {
                grid[2][1] = 2;
            }
            else if (player2Choice == 9)
            {
                grid[2][2] = 2;
            }
            else if (player2Choice > 9)
            {
                system("cls");
                std::cout << "You went out of bounds... so your pencil broke this turn." << std::endl;
            }
            if (_gameOver == false)
            {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        std::cout << grid[i][j];
                    }
                    std::cout << std::endl;
                }
                
            }
        }





        

    
}



int main()
{
    
    playTicTacToe();
    system("pause");
    
    
}

