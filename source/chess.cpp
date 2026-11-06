
#include "chess.h"

ChessBoard::ChessBoard() {
    reset();
}

void ChessBoard::reset() {
    Piece setup[8] = {
        WHITE_ROOK, WHITE_KNIGHT,
        WHITE_BISHOP, WHITE_QUEEN,
        WHITE_KING, WHITE_BISHOP,
        WHITE_KNIGHT, WHITE_ROOK
    };

    Piece black[8] = {
        BLACK_ROOK, BLACK_KNIGHT,
        BLACK_BISHOP, BLACK_QUEEN,
        BLACK_KING, BLACK_BISHOP,
        BLACK_KNIGHT, BLACK_ROOK
    };

    for (int x = 0; x < 8; x++) {
        board[x][0] = black[x];
        board[x][1] = BLACK_PAWN;
        board[x][6] = WHITE_PAWN;
        board[x][7] = setup[x];
    }

    for (int y = 2; y < 6; y++)
        for (int x = 0; x < 8; x++)
            board[x][y] = EMPTY;

    whiteTurn = true;
}

Piece ChessBoard::getPiece(int x, int y) {
    if (x < 0 || x > 7 || y < 0 || y > 7)
        return EMPTY;

    return board[x][y];
}

bool ChessBoard::isWhiteTurn() {
    return whiteTurn;
}

bool ChessBoard::movePiece(Move move) {
    if (move.fromX < 0 || move.fromX > 7 ||
        move.fromY < 0 || move.fromY > 7 ||
        move.toX < 0 || move.toX > 7 ||
        move.toY < 0 || move.toY > 7)
        return false;

    Piece piece = board[move.fromX][move.fromY];

    if (piece == EMPTY)
        return false;

    if (board[move.toX][move.toY] != EMPTY)
        return false;

    board[move.toX][move.toY] = piece;
    board[move.fromX][move.fromY] = EMPTY;

    whiteTurn = !whiteTurn;

    return true;
}
