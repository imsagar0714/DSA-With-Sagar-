#include <stdio.h>

// Function to print the Tic Tac Toe board
void printBoard(char board[3][3]) {
    printf("-------------\n");
    for (int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
        printf("-------------\n");
    }
}

// Function to check if the game is over
int gameOver(char board[3][3]) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    // Check diagonals
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;
    // Check if board is full
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return -1; // Game is a draw
}

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    int player = 1; // Player 1 starts
    int row, col;
    int gameState;

    do {
        printf("Player %d's turn\n", player);
        printBoard(board);
        printf("Enter row and column (0-2): ");
        scanf("%d %d", &row, &col);

        // Check if the cell is empty
        if (board[row][col] == ' ') {
            if (player == 1)
                board[row][col] = 'X';
            else
                board[row][col] = 'O';
            
            // Switch player
            player = (player == 1) ? 2 : 1;

            // Check game state
            gameState = gameOver(board);
        } else {
            printf("Cell already occupied. Try again.\n");
        }
    } while (gameState == 0);

    printBoard(board);
    if (gameState == 1)
        printf("Player %d wins!\n", (player == 1) ? 2 : 1);
    else
        printf("It's a draw!\n");

    return 0;
}
