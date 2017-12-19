#include "gtest/gtest.h"
#include "Character.hh"

namespace simpleTestCharacter {
	
	TEST(SimpleTestCharacter, Ctor) {
		Character d(100.123456, 100, 10, 1);
		EXPECT_DOUBLE_EQ(d.GetLife(), 100);
		EXPECT_DOUBLE_EQ(d.GetShield(), 100);
		EXPECT_DOUBLE_EQ(d.GetDamage(), 10);
		EXPECT_DOUBLE_EQ(d.GetSpeed(), 1);
		EXPECT_DOUBLE_EQ(d.GetLife(), 100.12);
		EXPECT_NEAR(d.GetLife(), 100.12, 1);
		EXPECT_NEAR(d.GetLife(), 100.23, 0.1);
	}

	TEST(SimpleTestCharacter, AttackReceiveDamage) {
		Character c(0, 0, 0, 0);
		Character d(100, 200, -10, 1);
		Character e(200, 0, 150, 30);

		c.Attack(d);
		EXPECT_DOUBLE_EQ(d.GetLife(), 100);
		EXPECT_DOUBLE_EQ(d.GetShield(), 200);
		d.Attack(c);
		EXPECT_DOUBLE_EQ(c.GetLife(), 00);
		EXPECT_DOUBLE_EQ(c.GetShield(), 00);
		e.Attack(e);
		EXPECT_DOUBLE_EQ(e.GetLife(), 50);
		EXPECT_DOUBLE_EQ(e.GetShield(), 00);
		e.Attack(d);
		EXPECT_DOUBLE_EQ(d.GetLife(), 100);
		EXPECT_DOUBLE_EQ(d.GetShield(), 50);
		e.Attack(d);
		EXPECT_DOUBLE_EQ(d.GetLife(), 00);
		EXPECT_DOUBLE_EQ(d.GetShield(), 00);
		e.Attack(c);
		EXPECT_DOUBLE_EQ(c.GetLife(), 00);
		EXPECT_DOUBLE_EQ(c.GetShield(), 00);
	}


}