#include "multiplication.hpp"

Multiplication::Multiplication(ExprPtr lhs, ExprPtr rhs) : lhs_(std::move(lhs)), rhs_(std::move(rhs)){

}

FloatT Multiplication::eval() const{
    return lhs_->eval() * rhs_->eval();
}

std::ostream &Multiplication::print(std::ostream &os) const{
    return os << *lhs_ << " * " << *rhs_;
}

std::ostream &operator<<(std::ostream &os, const Multiplication &mult_expr){
    return mult_expr.print(os);
}