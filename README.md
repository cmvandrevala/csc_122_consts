# csc_122_consts

Software Engineering (SWE). SWE is not just programming, but programming with other people and over time.

const allows to explicitly express an invariant, which lets you and others reason about the code. As the program becomes bigger, these invariants cannot be just memorized. That's why encoding them in the programming language helps.

Optimization opportunities.

With the knowledge that certain values will not change, the compiler can make optimizations that would not be possible otherwise. To take this to the max, constexpr means that a value will be known at compile time, not just at run-time. This becomes even more important in potentially multi-threading contexts.

Example: What kind of optimization does const offer in C/C++?

I leave out whole program analysis which would require a much longer answer and almost certainly is not applicable to generic C++ programs. But whole-program-analysis will allow reasoning of the analyzer or compiler about constness of variables as they get passed between functions, translation units and libraries.
