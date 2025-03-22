#include "shape_interface.hpp"
#include "shapes.hpp"
#include "visitor_interface.hpp"
#include "visitors.hpp"
#include <memory>

namespace {

void example() {

  auto circle = std::make_unique<visitor_pattern::Circle>();
  auto square = std::make_unique<visitor_pattern::Square>();

  visitor_pattern::ShapeContainer container;
  container.addShape(std::move(circle));
  container.addShape(std::move(square));

  visitor_pattern::DrawingVisitor drawVisitor;
  visitor_pattern::AreaVisitor areaVisitor;

  container.performOperation(drawVisitor);
  container.performOperation(areaVisitor);
}
} // namespace

int main() {
  example();
  return 0;
}
