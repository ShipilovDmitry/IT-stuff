#pragma once

#include "shapes.hpp"
#include "visitor_interface.hpp"
#include <iostream>

namespace visitor_pattern {

class DrawingVisitor : public ShapeVisitor {
public:
  void visit(Circle &circle) override {
    std::cout << "Visit circle" << std::endl;
    circle.draw();
  }

  void visit(Square &square) override {
    std::cout << "Visit square" << std::endl;
    square.draw();
  }
};

// Concrete Visitor: AreaVisitor
class AreaVisitor : public ShapeVisitor {
public:
  void visit(Circle &circle) override {
    std::cout << "Calculating area of Circle\n";
  }

  void visit(Square &square) override {
    std::cout << "Calculating area of Square\n";
  }
};

class RemoveVisitor : public ShapeVisitor {
public:
  void visit(Circle &circle) override {
    std::cout << "Removing the Circle\n";
    circle.remove();
  }

  void visit(Square &square) override {
    std::cout << "Removing the Square\n";
    square.remove();
  }
};

} // namespace visitor_pattern
