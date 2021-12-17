#include <iostream>

class CAPiece
{
public:
	CAPiece(char cColor) : mcColor(cColor) {}
	~CAPiece() {}
	virtual char GetPiece() = 0;
	char GetColor() {
		return mcColor;
	}
	bool IsLegalMove(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) 
	{}
private:
	virtual bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) = 0;
	char mcColor;
};

class CPawn : public CAPiece
{
public:
	CPawn(char cColor) : CAPiece(cColor) {}
	~CPawn() {}
private:
	virtual char GetPiece() {
		return 'P';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
		CAPiece* qpDest = qpaaBoard[iDestRow][iDestCol];
		if (qpDest == 0) {
			// Destination square is unoccupied
		} else {
			// Dest holds piece of opposite color
		}
		return false;
	}
};

class CKnight : public CAPiece
{
public:
	CKnight(char cColor) : CAPiece(cColor) {}
	~CKnight() {}
private:
	virtual char GetPiece() {
		return 'N';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
		// Destination square is unoccupied or occupied by opposite color
	}
};

class CBishop : public CAPiece
{
public:
	CBishop(char cColor) : CAPiece(cColor) {}
	~CBishop() {}
private:
	virtual char GetPiece() {
		return 'B';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
		if ((iDestCol - iSrcCol == iDestRow - iSrcRow) || (iDestCol - iSrcCol == iSrcRow - iDestRow)) {
			// Make sure that all invervening squares are empty
		}
		
	}
};

class CRook : public CAPiece
{
public:
	CRook(char cColor) : CAPiece(cColor) {}
	~CRook() {}
private:
	virtual char GetPiece() {
		return 'R';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
		if (iSrcRow == iDestRow) {
			// Make sure that all invervening squares are empty
		}
			
		} else if (iDestCol == iSrcCol) {
			// Make sure that all invervening squares are empty
		}
		
	}
};

class CQueen : public CAPiece
{
public:
	CQueen(char cColor) : CAPiece(cColor) {}
	~CQueen() {}
private:
	virtual char GetPiece() {
		return 'Q';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
		if (iSrcRow == iDestRow) {
			// Make sure that all invervening squares are empty
		} else if (iDestCol == iSrcCol) {
			// Make sure that all invervening squares are empty
		} else if ((iDestCol - iSrcCol == iDestRow - iSrcRow) || (iDestCol - iSrcCol == iSrcRow - iDestRow)) {
			// Make sure that all invervening squares are empty
		}
		
	}
};

class CKing : public CAPiece
{
public:
	CKing(char cColor) : CAPiece(cColor) {}
	~CKing() {}
private:
	virtual char GetPiece() {
		return 'K';
	}
	bool AreSquaresLegal(int iSrcRow, int iSrcCol, int iDestRow, int iDestCol, CAPiece* qpaaBoard[8][8]) {
	}
};

class CBoard
{
public:
	CBoard() {
		
		// Allocate and place black pieces
		
			
		// Allocate and place white pieces
	}
	~CBoard() {
	}

	void Print() {
		
			// Print side border with numbering
			// Print the chess board
		}
		// Print the bottom border with numbers
		


	bool IsInCheck(char cColor) {
		// Find the king
		// Run through the opponent's pieces and see if any can take the king
	}

	bool CanMove(char cColor) {
		// Run through all pieces
		// If it is a piece of the current player, see if it has a legal move
		// Make move and check whether king is in check
		// Undo the move
		}
};

class CChess
{
public:
	CChess() : mcPlayerTurn('W') {}
	~CChess() {}

	void Start() {
	}

	void GetNextMove(CAPiece* qpaaBoard[8][8]) {
		// Get input and convert to coordinates
		// Check that the indices are in range
		// and that the source and destination are different
		// Additional checks in here
		// Check that the piece is the correct color
		// Check that the destination is a valid destination
		// Make the move
		// Make sure that the current player is not in check
		// Undo the last move
							
	}

	void AlternateTurn() {
		
	}

	bool IsGameOver() {
		// Check that the current player can move
		// If not, we have a stalemate or checkmate
	}
private:
	CBoard mqGameBoard;
	char mcPlayerTurn;
};

int main() {
	CChess qGame;
	qGame.Start();
	return 0;
}