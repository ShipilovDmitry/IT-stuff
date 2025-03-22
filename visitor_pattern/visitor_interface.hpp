#pragma once

namespace visitor_pattern {

class Circle;
class Square;

// Visitor interface
class ShapeVisitor {
public:
  virtual void visit(Circle &circle) = 0;
  virtual void visit(Square &square) = 0;
};

} // namespace visitor_pattern
