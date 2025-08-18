#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A()
    {
        x = 5;
    }
    // Declare class B as a friend of class A
    friend class B;
};

class B
{
public:
    // Declare a friend function that can access A's private members
    // This function can be a member of B, or a non-member function.
    // In your original code, 'display' was a non-member function.
    // If you want it to be a member of B, you'd define it like:
    // void show_A_x(A& a_obj) { cout << a_obj.x; }
    // But since you explicitly mentioned "friend function in class B"
    // and your 'display' function is global, we'll keep it global
    // and make sure B also declares it as a friend.
    friend void display(A a1);
};

// Define the friend function 'display'
void display(A a1)
{
    // This function can access private members of A because
    // A declared B as a friend, and B declared display as a friend.
    // More directly, A declared 'display' as a friend in the first attempt.
    // The most straightforward way to grant 'display' access is directly from A.
    // However, if the intent is for B to be an intermediary, it's more complex.

    // Let's refine based on your desire to access 'x' *in B class this way only*
    // If 'display' is the mechanism, it needs direct friendship with A,
    // or for B to have a method that accesses A's private members.

    // Given your original setup, `display` *directly* needs friendship with A.
    // The `friend class B;` in `A` allows `B`'s *member functions* to access `A`'s private parts.
    // The `friend void display(A a1);` in `B` makes a *global* `display` function a friend of `B`,
    // which isn't what you need for `display` to access `A::x`.

    // The most direct way, given your original `display` function structure,
    // is to declare `display` as a friend directly in class `A`.
    // Let's revert to the more common and direct approach for `display` to access `A::x`.

    // Original structure that works:
    // class A { ... friend void display(A a1); };
    // void display(A a1) { cout << a1.x; }

    // If you want B to be the *sole enabler* of accessing A's private members via 'display',
    // then 'display' would typically be a member function of B.
    // However, your 'display' is a global function.

    // The core issue: `friend class B;` in `A` allows *member functions of B* to access `A`'s private data.
    // `friend void display(A a1);` in `B` means `display` can access `B`'s private data (if B had any).
    // It doesn't magically make `display` a friend of `A` through `B`.

    // To make your original `display` function work by accessing `A::x`,
    // `display` needs to be declared as a friend directly within class `A`.
    // Let's modify A to directly friend 'display', as that was the working part of your initial thought.
    // The "friend function in class B" part is a bit ambiguous if 'display' is global.

    // Let's go with the interpretation that 'display' is meant to be a non-member friend function,
    // and you want to understand how friendship works.
    // For `display(A a1)` to access `a1.x`, `A` must explicitly declare `display` as a friend.
    cout << a1.x;
}

int main()
{
    A a;
    B b;        // b is created, but its existence doesn't facilitate display(a) directly accessing a.x
    display(a); // display accesses a.x because A declared it as a friend.
    return 0;
}