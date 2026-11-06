
#ifndef MUSTAFA_CHESS_H
#define MUSTAFA_CHESS_H

enum Piece {
    EMPTY = 0,
    WHITE_PAWN,
    WHITE_KNIGHT,
    WHITE_BISHOP,
    WHITE_ROOK,
    WHITE_QUEEN,
    WHITE_KING,
    BLACK_PAWN,
    BLACK_KNIGHT,
    BLACK_BISHOP,
    BLACK_ROOK,
    BLACK_QUEEN,
    BLACK_KING
};

struct Move {
    int fromX;
    int fromY;
    int toX;
    int toY;
};

class ChessBoard {
public:
    Piece board[8][8];
    bool whiteTurn;

    ChessBoard();

    void reset();
    bool movePiece(Move move);
    Piece getPiece(int x, int y);
    bool isWhiteTurn();
};

#endif
