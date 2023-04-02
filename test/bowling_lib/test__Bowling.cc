  
#include "bowling.h"
#include <catch2/catch_test_macros.hpp>

class BowlGame
{
  public:
    bool is_complete() const;
    void record_ball(int const & num_pins);
    void bowl_frame();
    int get_score(); 
};

bool BowlGame::is_complete() const
{
  return false;
}

TEST_CASE ("All pins are standing and no ball has been thrown")
{
  // Arrange
  BowlGame bg;

  // Act
  // do nothing

  // Assert

  REQUIRE(bg.is_complete() == false);
}

TEST_CASE("All pins are standing and one ball has been thrown")
{
  // Arrange
  BowlGame bg;

  // Act


  // Assert
  REQUIRE(bg.is_complete() == false); 
}
