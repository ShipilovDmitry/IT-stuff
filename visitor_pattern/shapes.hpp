#pragma once

#include "shape_interface.hpp"
#include "visitor_interface.hpp"
#include <iostream>

namespace visitor_pattern {

// Concrete element
class Circle : public Shape {
public:
  void accept(ShapeVisitor &visitor) override { visitor.visit(*this); }
  void remove() override { std::cout << "Remove circle" << std::endl; }
  void draw() const override { std::cout << "Draw circle" << std::endl; }
};

// Concrete element
class Square : public Shape {
public:
  void accept(ShapeVisitor &visitor) override { visitor.visit(*this); }
  void remove() override { std::cout << "Remove square" << std::endl; }
  void draw() const override { std::cout << "Draw the square" << std::endl; }
};

} // namespace visitor_pattern
