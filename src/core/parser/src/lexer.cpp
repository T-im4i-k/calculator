#include "parser/lexer.hpp"

void Lexer::skipSpaces() {
    while (std::isspace(static_cast<unsigned char>(source.peek()))) {
        source.get();
    }
}

bool Lexer::checkEOF() {
    int symbol = source.peek();

    if(symbol == EOF) {
        return true;
    }

    return false;
}

Token Lexer::next() {
    skipSpaces();
    
    if(checkEOF()) return Token(TokenType::EndOfFile);
    
    char symbol = source.peek();
    
    if(std::isdigit(static_cast<unsigned char>(symbol))) {
        double value = 0.0;
        if(!(source >> value)) return Token(TokenType::Error);

        return Token(value);
    } 

    source.get();
    
    switch (symbol) {
        case '+': return Token(TokenType::Addition);
        case '-': return Token(TokenType::Subtraction);
        case '*': return Token(TokenType::Multiplication);
        case '/': return Token(TokenType::Division);
        case '(': return Token(TokenType::LeftParen);
        case ')': return Token(TokenType::RightParen);
    }


    return Token(TokenType::Error);
}