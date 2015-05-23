#include <stdio.h>

enum Piece {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};
enum Color {BLACK, WHITE};

typedef struct 
{
	enum Piece piece;
	enum Color color;
}Square;

Square board[8][8];

int
main (int argc, char *argv[])
{
	
	return 0;
}
