  
#include "bowling.h"
#include <catch2/catch_test_macros.hpp>

class BowlGame
{
  public:
    bool is_complete() const;
    void record_ball(int const & num_pins) const;
    void bowl_frame(int frame) const;
    int get_score(); 
};

bool BowlGame::is_complete() const
{
  return false;
}

void BowlGame::record_ball(int const & num_pins) const
{
  
}

void BowlGame::bowl_frame(int frame) const
{

}

int BowlGame::get_score()
{

}

TEST_CASE ("All pins are standing and no ball has been thrown")
{
  // Arrange
  BowlGame bg;

  // Act
  bg.record_ball(0);
  bg.bowl_frame(0);
  bg.get_score();

  // Assert

  REQUIRE(bg.is_complete() == false);
}

TEST_CASE("All pins are standing and one ball has been thrown")
{
  // Arrange
  BowlGame bg;

  // Act
  bg.record_ball(0);
  bg.bowl_frame(1);
  bg.get_score();

  // Assert
  REQUIRE(bg.is_complete() == false); 
}
