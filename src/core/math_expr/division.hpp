#pragma once

#include "expression.hpp"

class Division : public Expression
{
public:
    Division(ExprPtr lhs, ExprPtr rhs);

    FloatT eval() const override;

    std::ostream &print(std::ostream &os) const override;

    friend std::ostream &operator<<(std::ostream &os, const Division &div_expr); 
private: 
    ExprPtr lhs_;
    ExprPtr rhs_;
};