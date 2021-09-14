#include <bits/stdc++.h>
#define MIN_CAPACITY 10

using namespace std;

template <class T>
class DynamicArray
{

private:
    size_t m_size;
    size_t m_capacity;
    T *m_data;

    // resize the array
    void resize()
    {
        size_t capacity = m_capacity * 2;
        T *tmp = (T *)realloc(m_data, capacity * sizeof(*m_data));
        if (!tmp)
            throw std::bad_alloc();
        m_data = tmp;
        m_capacity = capacity;
    }

public:
    DynamicArray()
    {
        m_capacity = MIN_CAPACITY;
        m_size = 0;
        m_data = (T *)malloc(m_capacity * sizeof(*m_data));
        if (!m_data)
            throw std::bad_alloc();
    }

    ~DynamicArray()
    {
        free(m_data);
    }

    // Adding an element in an array
    void push(T value)
    {
        if (m_size >= m_capacity)
            resize();
        *(m_data + m_size++) = value;
    }

    // POP function
    T pop()
    {
        return *(m_data + --m_size);
    }

    // set index to a value
    void set(size_t index, T value)
    {
        while (index >= m_size)
        {
            this->push(0);
        }
        *(m_data + index) = value;
    }

    // get the value of an element at particular index
    T get(size_t index)
    {
        return *(m_data + index);
    }

    // return size of array
    size_t size()
    {
        return m_size;
    }

    // return capacity of an array
    size_t capacity()
    {
        return m_capacity;
    }

    // print n array
    void print()
    {
        size_t i = 0;
        for (i = 0; i < m_size; i++)
        {
            cout << "Array[" << i << "]" << get(i) << endl;
        }
    }

    // check if array is empty or not
    int isEmpty()
    {
        return m_size == 0;
    }
};

int main()
{

    DynamicArray<int> array;
    for (int i = 0; i < 20; i++)
    {
        array.push(20 - i);
    }

    array.print();
    cout << "Popping.." << array.pop() << endl;
    array.push(123123);
    array.set(2, 9999);
    array.print();

    return 0;
}