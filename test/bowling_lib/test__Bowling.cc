  
#include "bowling.h"
#include <catch2/catch_test_macros.hpp>

class BowlGame
{
  public:
    bool is_started() const;
};

bool BowlGame::is_started() const
{
  return true;
}

TEST_CASE ("All pins are standing and no ball has been thrown")
{
  // Arrange
  BowlGame bg;

  // Act
  // do nothing

  // Assert

  REQUIRE(bg.is_started() == true);
}

TEST_CASE("")
{
  
}
