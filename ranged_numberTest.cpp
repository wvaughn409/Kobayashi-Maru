#include "TestHarness.h"

#include "ranged_number.h"

TEST(cTor, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 5;

	CHECK_EQUAL(5, grade);
}

TEST(preIncrement, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 5;
	CHECK_EQUAL(5, grade);

	++grade;
	CHECK_EQUAL(6, grade);
}

TEST(preIncrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 12;
	CHECK_EQUAL(12, grade);

	++grade;
	CHECK_EQUAL(12, grade);
}

TEST(postIncrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 12;
	CHECK_EQUAL(12, grade);

	grade++;
	CHECK_EQUAL(12, grade);
}

TEST(preDecrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 1;
	CHECK_EQUAL(1, grade);

	--grade;
	CHECK_EQUAL(1, grade);
}

TEST(postDecrementConstraint, ranged_number)
{
	ranged_number<short, 1, 12> grade{};

	grade = 1;
	CHECK_EQUAL(1, grade);

	grade--;
	CHECK_EQUAL(1, grade);
}

using Grade = ranged_number<int, 1, 12>;
TEST(operatorPlus, ranged_number)
{
	Grade grade{ 5 };

	grade = grade + Grade{ 5 };
	CHECK_EQUAL(10, grade);

	grade = grade + Grade{ 5 };
	CHECK_EQUAL(12, grade);
}

TEST(operatorPlusEquals, ranged_number)
{
	Grade grade{ 5 };

	grade += 5;
	CHECK_EQUAL(10, grade);

	grade += 5;
	CHECK_EQUAL(12, grade);
}
