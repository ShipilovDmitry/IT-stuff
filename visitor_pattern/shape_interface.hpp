#pragma once

#include <memory>
#include <vector>

namespace visitor_pattern {

class ShapeVisitor;

// Element interface
class Shape {
public:
  virtual void accept(ShapeVisitor &visitor) = 0;
  virtual void remove() = 0;
  virtual void draw() const = 0;

  virtual ~Shape() = default;
};

class ShapeContainer {
  using ShapePointer = std::unique_ptr<Shape>;

public:
  void addShape(ShapePointer shape) { m_shapes.emplace_back(std::move(shape)); }

  void performOperation(ShapeVisitor &visitor) {
    for (auto const &shape : m_shapes) {
      shape->accept(visitor);
    }
  }

private:
  std::vector<ShapePointer> m_shapes;
};

} // namespace visitor_pattern
