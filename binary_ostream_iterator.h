#pragma once

#include <iterator>

template <class T>
class binary_ostream_iterator
    : public std::iterator<std::output_iterator_tag, T>
{
protected:
    // stream to which output will be written
    std::ostream& myOutputStream;

public:
    explicit binary_ostream_iterator(std::ostream& outputStream)
        : myOutputStream(outputStream)
    {
    }

    // assignment operator writes a value to the output stream
    binary_ostream_iterator<T>& operator=(const T& value)
    {
        myOutputStream << value;
        return *this;
    }

    // dereferencing is a no-op that returns the iterator itself
    binary_ostream_iterator<T>& operator*()
    {
        return *this;
    }

    // increment is a no-op that returns the iterator itself
    binary_ostream_iterator<T>& operator++()
    {
        return *this;
    }

    binary_ostream_iterator<T>& operator++(int)
    {
        return *this;
    }
};
