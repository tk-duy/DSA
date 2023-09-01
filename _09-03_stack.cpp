#include <bits/stdc++.h>

class StackInt 
{
    private:
        int size;
        int capacity = 1;
        int *s;
    
    public:
        /* Constructor. */
        StackInt(int capacity)
        {
            this->size = 0;
            s = new int[capacity];
        }

        /* Destroy. */
        ~StackInt()
        {
            delete[] s;
        }

        /* empty check. */
        bool const empty ()
        {
            return this->size == 0;
        }

        /* size. */
        int Size()
        {
            return this->size;
        }

        /* Push. */
        void push(int x)
        {
            if(size == this->capacity) resize(2 * this->capacity); // expand the stack if it was full
            s[this->size] = x;                                     // add new element to the last
            ++this->size;
        }

        /* Take the last element of stack. */
        int top()
        {
            assert(!empty());
            return s[size-1];
        }

    private:
        void resize(int New) 
        {
            int *n = new int[New];                              // Create new array
            for (int i = 0; i < this->size; i++) n[i] = s[i];   // Copy old array (s) to new array (n)
            delete[] s;                                         // release old array ([]s)
            s = n;                                              // assign pointer 's' to new array
            this->capacity = New;                               // re-define capacity of stack
        }
};


int main()
{
    StackInt *a = new StackInt(10);
    a->push(1);
    std::cout << a->top() << "\n";
    std::cout << a->Size();
    system("pause");
    return 0;
}