#pragma once

#include "AST.hh"          // Assuming this is where AST classes are defined
#include "ConstASTIntVisitor.hh" // Assuming this is the base class for visitors
#include "../util/errors.hh"  // Include the utility for error handling

namespace ast {

class Evaluator : public ConstASTIntVisitor {
public:
    Evaluator() = default;
    virtual ~Evaluator() = default;


    virtual int visit(const ASTNode& node) override;


  
};

} 
