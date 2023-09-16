# C_PROJECT - Tic Tac Toe Game

## Problem Statement

Develop a two-player Tic Tac Toe game where players take turns to place their symbols (@ or #) on a 3x3, 4x4, or 5x5 grid. The game should validate moves, determine the winner, and handle ties. It should also provide a user-friendly interface for players to interact with the game.

## Specifications

1. Create a 3x3, 4x4, or 5x5 grid to represent the Tic Tac Toe board.
2. Take player names.
3. Allow players to choose their symbols and select a game mode (singleplayer or multiplayer).
4. Ensure that in multiplayer mode, both player names are different.
5. Allow players to choose their difficulty level and display the board accordingly.
6. Validate user input to ensure it's correct and that the chosen cell is not already occupied.
7. Ensure that the same player gets another turn if they enter an incorrect move.
8. Display the board after each move.
9. Handle ties.
10. Display the winner's name at the end of the game.
11. Provide options to restart the game or exit at the end.

## Goals

1. Create a fully functional game that allows two players to play Tic Tac Toe, follows the rules of the game, and accurately determines the winner or a tie.
2. Define a user interface that gives clear instructions and displays the board after each move.
3. Implement logic to determine the game mode and player names.
4. Implement logic to prevent both players from having the same name.
5. Create a grid (3x3, 4x4, or 5x5) to display the board.
6. Implement the logic to detect a tie when all cells are filled.
7. Write clean and well-organized code with meaningful variable names and comments for better understanding.
8. Implement logic to validate player's moves.
9. Implement logic to detect winning conditions.
10. Display the winner's name at the end of the game and provide options to exit or restart.

## Design

1. Initialize variables to store player names and symbols.
2. Initialize variables to store the playing mode and difficulty level.
3. Initialize the board based on the selected difficulty level.
4. Take player inputs, update the board, and validate moves.
5. Display the board after each move.
6. Check for winning conditions or ties.
7. Display the winner's name or a tie message at the end of the game.
8. Take user input to either restart the game or exit.
