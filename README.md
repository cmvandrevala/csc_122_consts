# CSC 122 - Consts

Software engineering is not just about programming. Rather, it is a collaborative effort that involves working with other people over an extended time. The `const` keyword allows programmers to express an unchanging "thing" in C++ (e.g. a variable, a class state, etc.). This allows programmers to reason about the code.

The `const` keyword offers a few benefits:

1. As a program becomes bigger, invariants cannot be memorized among all team members. The `const` keyword allows us to encode them via the programming language.
2. The C++ compiler can make a number of optimizations if it knows that certain quantities will not change.
3. Certain programming paradigms like parallel programming depend on invariant quantities that can be shared between processes.
4. Program analysis software can perform a more thorough job by leveraging information about what quantities are marked as `const`.
5. As weird as it sounds, engineers *like* a certain number of restrictions. Restrictions breed creativity.
