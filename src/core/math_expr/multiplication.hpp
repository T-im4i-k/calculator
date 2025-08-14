#pragma once

#include "expression.hpp"

class Multiplication : public Expression
{
public:
    Multiplication(ExprPtr lhs, ExprPtr rhs);

    FloatT eval() const override;

    std::ostream &print(std::ostream &os) const override;

    friend std::ostream &operator<<(std::ostream &os, const Multiplication &mult_expr); 
private: 
    ExprPtr lhs_;
    ExprPtr rhs_;
};