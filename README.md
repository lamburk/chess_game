# chess_game
In this implementation, we'll write the beginnings of a chess program.  In specific, we'll write the part of the program that decides whether a given move is legal or not.
Write a C++ definition of a class named board_square, which is simply two ints in the range from 1 to 8 (an x coordinate and a y coordinate).
Write a C++ definition of a class named chess_piece, with subclasses for the different kinds of chess pieces (king, queen, knight, bishop, rook, pawn), and a method named is_legal that takes in two board_squares and determines whether the piece can legally move from the first one to the second one. At any given time, a piece has a location (of type board_square; this changes every time the piece moves), and a color (either "white" or "black", which never changes).
To avoid spending a lot of time on tedious I/O programming, we won't have the program read in chess positions or anything like that; we'll simply have a main program that creates a bunch of chess_pieces (at least one of each kind) and tests the is_legal method as appropriate on each one.
What are the Rules?
No piece can move off the board; that is, the X and Y coordinates of each piece must always be in the range [1...8].

A King can move one space in any direction: forwards, backwards, left, right, or on any of the four diagonals.
A Queen can move as far as desired in a straight line in any direction: forwards, backwards, left, right, or on any of the four diagonals. (If there's a piece in the way along a particular straight line, she cannot move past it, but that's not relevant to this assignment.)
A Bishop can move as far as desired in a straight line along any of the four diagonals, but not forwards, backwards, left, or right. (Again, he cannot move past another piece along the way, but that's not relevant to this assignment.)
A Rook can move as far as desired in a straight line forwards, backwards, left, or right, but not diagonally. (See above about obstructed paths. There's also a special rule about "castling", which we'll ignore for this assignment.)
A Knight can move in an L-shape, as though it were going two spaces forwards or backwards and one to either side (or, similarly, two spaces to the side and one space forwards or backwards. For example, if a knight were in the space below marked "K", it could move to any of the spaces marked "x":

