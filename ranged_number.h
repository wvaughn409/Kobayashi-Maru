#pragma once
#include <algorithm>

template <typename T, T lowerLimit, T upperLimit>
class ranged_number
{
public:
    // operators and methods to make the class behave just like an actual number,
    // with the addition of restricting the range.

    ranged_number(const T& value = lowerLimit)
		:myValue(value), myLowerLimit(lowerLimit), myUpperLimit(upperLimit)
    {
        myValue = std::clamp(value, lowerLimit, upperLimit);
    }

    operator T() const
    {
        return myValue;
    }

    ranged_number& operator++()
    {
        if (myValue != upperLimit)
        {
            ++myValue;
        }

        return *this;
    }

    ranged_number operator++(int)
    {
        ranged_number tmp{ *this };

        if (myValue != upperLimit)
        {
            ++myValue;
        }

        return tmp;
    }

    ranged_number operator--(int)
    {
        ranged_number tmp{ *this };

        if (myValue != lowerLimit)
        {
            --myValue;
        }

        return tmp;
    }

    ranged_number& operator--()
    {
        if (myValue != lowerLimit)
        {
            --myValue;
        }

        return *this;
    }

    ranged_number& operator+=(const T rhs)
    {
        if constexpr (std::is_unsigned_v<T> || lowerLimit >= 0)
        {
            myValue = ((upperLimit - myValue) >= rhs) ? myValue + rhs : upperLimit;
        }
        else
        {
            myValue = rhs >= 0 ?
                (((upperLimit - myValue) > rhs) ? myValue + rhs : upperLimit)
                : ((std::abs(lowerLimit) - std::abs(myValue) >= std::abs(rhs)) ? myValue + rhs : lowerLimit);
        }

        return *this;
    }

    friend ranged_number operator+(const ranged_number& a, const ranged_number& b)
    {
        ranged_number r = a;
        return r += static_cast<T>(b);
    }

private:
	T myValue;
	T myLowerLimit;
	T myUpperLimit;
};
