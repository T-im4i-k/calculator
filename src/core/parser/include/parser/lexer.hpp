#include <istream>
#include "parser/token.hpp"

class Lexer {
public:
    Lexer() = default;

    Token next();

    void skipSpaces();

    bool checkEOF();
private:
    std::istream source;
};