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
            system("cls");
            if (player1Choice == 1)
            {
                if (grid[0][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][0] = 1;
            }
            else if (player1Choice == 2)
            {
                if (grid[0][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][1] = 1;
            }
            else if (player1Choice == 3)
            {
                if (grid[0][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][2] = 1;
            }
            else if (player1Turn == 4)
            {
                if (grid[1][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][0] = 1;
            }
            else if (player1Choice == 5)
            {
                if (grid[1][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][1] = 1;
            }
            else if (player1Choice == 6)
            {
                if (grid[1][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][2] = 1;
            }
            else if (player1Choice == 7)
            {
                if (grid[2][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][0] = 1;
            }
            else if (player1Choice == 8)
            {
                if (grid[2][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][1] = 1;
            }
            else if (player1Choice == 9)
            {
                if (grid[2][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][2] = 1;
            }
            else if (player1Choice < 1)
            {
                system("cls");
                std::cout << "You went out of bounds... so your pencil broke this turn." << std::endl;
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

            //Checks to see if player 1 won
            if (grid[0][0] == 1 && grid[0][1] == 1 && grid[0][2] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
               
            }
            else if (grid[0][0] == 1 && grid[1][1] == 1 && grid[2][2] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
            }
            else if (grid[0][0] == 1 && grid[1][0] == 1 && grid[2][0] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
            }
            else if (grid[2][0] == 1 && grid[1][1] == 1 && grid[0][2] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
            }
            else if (grid[2][0] == 1 && grid[2][1] == 1 && grid[2][2] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
            }
            else if (grid[0][2] == 1 && grid[1][2] == 1 && grid[2][2] == 1)
            {
                _gameOver == true;
                system("pause");
                std::cout << player1Name << " wins!!";
            }
           

         
            //This is player 2's turn
            std::cout << player2Name << ", it's your turn." << " 1.TopLeft, 2.TopMid, 3.TopRight, " << std::endl << "4.MidLeft, 5.Mid, 6.MidRight, " << std::endl << " 7.BotLeft, 8.BotMid, 9.BotRight";
            std::cin >> player2Choice;
            system("cls");
            if (player2Choice == 1)
            {
                if (grid[0][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][0] = 2;
            }
            else if (player2Choice == 2)
            {
                if (grid[0][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][1] = 2;
            }
            else if (player2Choice == 3)
            {
                if (grid[0][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[0][2] = 2;
            }
            else if (player2Choice == 4)
            {
                if (grid[1][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][0] = 2;
            }
            else if (player2Choice == 5)
            {
                if (grid[1][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][1] = 2;
            }
            else if (player2Choice == 6)
            {
                if (grid[1][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[1][2] = 2;
            }
            else if (player2Choice == 7)
            {
                if (grid[2][0] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][0] = 2;
            }
            else if (player2Choice == 8)
            {
                if (grid[2][1] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][1] = 2;
            }
            else if (player2Choice == 9)
            {
                if (grid[2][2] != 0)
                {
                    std::cout << "This spot is taken ";
                    system("pause");
                    system("cls");
                }
                else grid[2][2] = 2;
            }
            else if (player2Choice < 1)
            {
                system("cls");
                std::cout << "You went out of bounds... so your pencil broke this turn." << std::endl;
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

            //Checks to see if player 2 won
            if (grid[0][0] == 2 && grid[0][1] == 2 && grid[0][2] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";

            }
            else if (grid[0][0] == 2 && grid[1][1] == 2 && grid[2][2] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";
            }
            else if (grid[0][0] == 2 && grid[1][0] == 2 && grid[2][0] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";
            }
            else if (grid[2][0] == 2 && grid[1][1] == 2 && grid[0][2] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";
            }
            else if (grid[2][0] == 2 && grid[2][1] == 2 && grid[2][2] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";
            }
            else if (grid[0][2] == 2 && grid[1][2] == 2 && grid[2][2] == 2)
            {
                _gameOver == true;
                system("pause");
                std::cout << player2Name << " wins!!";
            }
        }


        if (_gameOver == true)
        {
            system("cls");
            std::cout << "Thanks for playing!!!";
            system("pause");
        }
        
       




        

    
}



int main()
{
    
    playTicTacToe();
    system("pause");
    
    
}

