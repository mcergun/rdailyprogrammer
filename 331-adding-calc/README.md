# **Description**

Make a calculator that lets the user add, subtract, multiply and divide integers. It should allow exponents too. The user can only enter integers and must expect the result to be integers. The twist is that YOU, the programmer, can only let the program calculate expressions using addition. Only addition. The user can enter 3*2 however you cannot calculate it using multiplication.

Basically, the programmer is not allowed to multiply, divide and subtract using the operations provided by a programming language. To the programmer, the only accessible _direct_ operation is addition.

Your calculator should be able to handle addition, subtraction, division, multiplication and exponents. No modulo operation (to obtain the remainder for two given operands) too.

Please note that

*   You are not allowed to use any functions (other than user-defined functions) to work with exponents. Basically, don't cheat by allowing pre-defined functions from a library for the dirty work.

*   You can use logical operators.

*   The only binary arithmetic operator that you can use is + (addition).

*   The only unary operator that you can use is ++ (increment operator).

*   No bitwise operations are allowed.

# **Input description**

Allow the user to enter two integers and the operation symbol.

Let's use ^ for exponents i.e. 2^3 = 2<sup>3</sup> = 8

# **Output description**

If the answer is an integer, display the answer. If the answer is not an integer, display a warning message. Handle errors like 1/0 appropriately.

# **Challenge Inputs and Outputs**

<table><thead><tr><th align="left">Input</th><th align="right">Output</th></tr></thead><tbody><tr><td align="left">12 + 25</td><td align="right">37</td></tr><tr><td align="left">-30 + 100</td><td align="right">70</td></tr><tr><td align="left">100 - 30</td><td align="right">70</td></tr><tr><td align="left">100 - -30</td><td align="right">130</td></tr><tr><td align="left">-25 - 29</td><td align="right">-54</td></tr><tr><td align="left">-41 - -10</td><td align="right">-31</td></tr><tr><td align="left">9 * 3</td><td align="right">27</td></tr><tr><td align="left">9 * -4</td><td align="right">-36</td></tr><tr><td align="left">-4 * 8</td><td align="right">-32</td></tr><tr><td align="left">-12 * -9</td><td align="right">108</td></tr><tr><td align="left">100 / 2</td><td align="right">50</td></tr><tr><td align="left">75 / -3</td><td align="right">-25</td></tr><tr><td align="left">-75 / 3</td><td align="right">-25</td></tr><tr><td align="left">7 / 3</td><td align="right">Non-integral answer</td></tr><tr><td align="left">0 / 0</td><td align="right">Not-defined</td></tr><tr><td align="left">5 ^ 3</td><td align="right">125</td></tr><tr><td align="left">-5 ^ 3</td><td align="right">-125</td></tr><tr><td align="left">-8 ^ 3</td><td align="right">-512</td></tr><tr><td align="left">-1 ^ 1</td><td align="right">-1</td></tr><tr><td align="left">1 ^ 1</td><td align="right">1</td></tr><tr><td align="left">0 ^ 5</td><td align="right">0</td></tr><tr><td align="left">5 ^ 0</td><td align="right">1</td></tr><tr><td align="left">10 ^ -3</td><td align="right">Non-integral answer</td></tr></tbody></table>

# **Bonus**

Modify your program such that it works with decimals (except for ^ operation) with a minimum precision of 1 decimal place.

* * *

Submit to [/r/dailyprogrammer_ideas](/r/dailyprogrammer_ideas) if you have any cool ideas!

https://www.reddit.com/r/dailyprogrammer/comments/6ze9z0/20170911_challenge_331_easy_the_adding_calculator/
