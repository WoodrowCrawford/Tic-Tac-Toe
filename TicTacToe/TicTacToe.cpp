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

void print2dArray()
{
    char player1Name[15];
    char player2Name[15];
   

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
  
        int grid[3][3] = { {0, 0, 0 }, {0, 0, 0}, {0, 0, 0} };
        char topLeft = grid[0][0]; char topMid = grid[0][1];

     
            
        std::cout << grid[0][0], grid[0][1], grid[0][2];

        std::cout << grid[1][0], grid[1][1], grid[1][2];
        std::cout << grid[2][0], grid[2][1], grid[2][2];
            

        
    
                  
   
    
}



int main()
{
    
    print2dArray();
    system("pause");
    
    
}

