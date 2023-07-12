# GSint

The `GSint` class is a C++ class that represents a mathematical integer. It provides various mathematical operations and utility functions for working with integers.

## Functions

### `GSint(int val)`

Constructor that initializes the `GSint` object with the given integer value.

### `int getValue() const`

Returns the value of the `GSint` object.

### `int square() const`

Calculates and returns the square of the `GSint` value.

### `double squareRoot() const`

Calculates and returns the square root of the `GSint` value.

### `bool isEven() const`

Checks if the `GSint` value is even and returns a boolean result.

### `bool isPrime() const`

Checks if the `GSint` value is a prime number and returns a boolean result.

### `GSint operator+(const GSint& other) const`

Adds the value of another `GSint` object to the current object and returns the result as a new `GSint` object.

### `GSint operator-(const GSint& other) const`

Subtracts the value of another `GSint` object from the current object and returns the result as a new `GSint` object.

### `GSint operator*(const GSint& other) const`

Multiplies the value of another `GSint` object with the current object and returns the result as a new `GSint` object.

### `GSint operator/(const GSint& other) const`

Divides the current object by the value of another `GSint` object and returns the result as a new `GSint` object. Throws a runtime error if division by zero is attempted.

### `GSint operator%(const GSint& other) const`

Calculates the modulus of the current object divided by the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint& operator++()`

Prefix increment operator that increments the value of the `GSint` object and returns a reference to the updated object.

### `GSint operator++(int)`

Postfix increment operator that increments the value of the `GSint` object and returns a copy of the object before the increment.

### `GSint& operator--()`

Prefix decrement operator that decrements the value of the `GSint` object and returns a reference to the updated object.

### `GSint operator--(int)`

Postfix decrement operator that decrements the value of the `GSint` object and returns a copy of the object before the decrement.

### `bool operator==(const GSint& other) const`

Checks if the value of the current `GSint` object is equal to the value of another `GSint` object and returns a boolean result.

### `bool operator!=(const GSint& other) const`

Checks if the value of the current `GSint` object is not equal to the value of another `GSint` object and returns a boolean result.

### `bool operator>(const GSint& other) const`

Checks if the value of the current `GSint` object is greater than the value of another `GSint` object and returns a boolean result.

### `bool operator<(const GSint& other) const`

Checks if the value of the current `GSint` object is less than the value of another `GSint` object and returns a boolean result.

### `bool operator>=(const GSint& other) const`

Checks if the value of the current `GSint` object is greater than or equal to the value of another `GSint` object and returns a boolean result.

### `bool operator<=(const GSint& other) const`

Checks if the value of the current `GSint` object is less than or equal to the value of another `GSint` object and returns a boolean result.

### `bool isPositive() const`

Checks if the value of the `GSint` object is positive and returns a boolean result.

### `bool isNegative() const`

Checks if the value of the `GSint` object is negative and returns a boolean result.

### `double reciprocal() const`

Calculates and returns the reciprocal (1 divided by the value) of the `GSint` object. Throws a runtime error if reciprocal of zero is attempted.

### `int absolute() const`

Calculates and returns the absolute value of the `GSint` object.

### `GSint power(int exponent) const`

Raises the `GSint` object to the power of the given exponent and returns the result as a new `GSint` object.

### `GSint factorial() const`

Calculates and returns the factorial of the `GSint` object. Throws a runtime error if factorial of a negative number is attempted.

### `std::string toBinary() const`

Converts the `GSint` object to a binary string representation.

### `std::string toOctal() const`

Converts the `GSint` object to an octal string representation.

### `std::string toHexadecimal() const`

Converts the `GSint` object to a hexadecimal string representation.

### `int sumOfDigits() const`

Calculates and returns the sum of the digits of the `GSint` object.

### `int productOfDigits() const`

Calculates and returns the product of the digits of the `GSint` object.

### `bool isPerfect() const`

Checks if the `GSint` object is a perfect number and returns a boolean result.

### `bool isSquareNumber() const`

Checks if the `GSint` object is a square number and returns a boolean result.

### `bool isPowerOf(int base) const`

Checks if the `GSint` object is a power of the given base and returns a boolean result.

### `bool isPalindrome() const`

Checks if the `GSint` object is a palindrome and returns a boolean result.

### `static int gcd(int a, int b)`

Static function that calculates and returns the greatest common divisor of two integers using the Euclidean algorithm.

### `static int lcm(int a, int b)`

Static function that calculates and returns the least common multiple of two integers using the formula `abs(a * b) / gcd(a, b)`.

### `std::string toString() const`

Converts the `GSint` object to a string representation.

### `GSint absoluteDifference(const GSint& other) const`

Calculates the absolute difference between the value of the current `GSint` object and the value of another `GSint` object and returns the result as a new `GSint` object.

### `double average(const GSint& other) const`

Calculates the average of the value of the current `GSint` object and the value of another `GSint` object and returns the result as a double.

### `bool isDivisibleBy(const GSint& other) const`

Checks if the current `GSint` object is divisible by the value of another `GSint` object and returns a boolean result.

### `GSint maximum(const GSint& other) const`

Returns the maximum value between the value of the current `GSint` object and the value of another `GSint` object as a new `GSint` object.

### `GSint minimum(const GSint& other) const`

Returns the minimum value between the value of the current `GSint` object and the value of another `GSint` object as a new `GSint` object.

### `double average(const GSint& other1, const GSint& other2) const`

Calculates the average of the values of the current `GSint` object, another `GSint` object, and a third `GSint` object, and returns the result as a double.

### `bool isBetween(const GSint& lower, const GSint& upper) const`

Checks if the value of the current `GSint` object is between the values of two other `GSint` objects (lower and upper bounds) and returns a boolean result.

### `friend GSint factorial(const GSint& number)`

Friend function that calculates and returns the factorial of a `GSint` object using the `factorial()` member function.

### `friend int greatestCommonDivisor(const GSint& number1, const GSint& number2)`

Friend function that calculates and returns the greatest common divisor of two `GSint` objects using the `gcd()` static member function.

### `friend int leastCommonMultiple(const GSint& number1, const GSint& number2)`

Friend function that calculates and returns the least common multiple of two `GSint` objects using the `lcm()` static member function.

### `GSint operator-() const`

Unary minus operator that negates the value of the `GSint` object and returns the result as a new `GSint` object.

### `GSint& operator+=(const GSint& other)`

Compound assignment operator that adds the value of another `GSint` object to the current object and updates the current object.

### `GSint& operator-=(const GSint& other)`

Compound assignment operator that subtracts the value of another `GSint` object from the current object and updates the current object.

### `GSint& operator*=(const GSint& other)`

Compound assignment operator that multiplies the value of another `GSint` object with the current object and updates the current object.

### `GSint& operator/=(const GSint& other)`

Compound assignment operator that divides the current object by the value of another `GSint` object and updates the current object. Throws a runtime error if division by zero is attempted.

### `GSint& operator%=(const GSint& other)`

Compound assignment operator that calculates the modulus of the current object divided by the value of another `GSint` object and updates the current object.

### `GSint& operator-()`

Unary minus operator that negates the value of the `GSint` object and updates the current object.

### `GSint operator&(const GSint& other) const`

Bitwise AND operator that performs a bitwise AND operation between the value of the current `GSint` object and the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint operator|(const GSint& other) const`

Bitwise OR operator that performs a bitwise OR operation between the value of the current `GSint` object and the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint operator^(const GSint& other) const`

Bitwise XOR operator that performs a bitwise XOR operation between the value of the current `GSint` object and the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint operator~() const`

Bitwise NOT operator that performs a bitwise NOT operation on the value of the `GSint` object and returns the result as a new `GSint` object.

### `GSint operator<<(const GSint& other) const`

Bitwise left shift operator that performs a bitwise left shift operation on the value of the `GSint` object by the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint operator>>(const GSint& other) const`

Bitwise right shift operator that performs a bitwise right shift operation on the value of the `GSint` object by the value of another `GSint` object and returns the result as a new `GSint` object.

### `GSint& operator&=(const GSint& other)`

Compound assignment operator that performs a bitwise AND operation between the value of the current `GSint` object and the value of another `GSint` object and updates the current object.

### `GSint& operator|=(const GSint& other)`

Compound assignment operator that performs a bitwise OR operation between the value of the current `GSint` object and the value of another `GSint` object and updates the current object.

### `GSint& operator^=(const GSint& other)`

Compound assignment operator that performs a bitwise XOR operation between the value of the current `GSint` object and the value of another `GSint` object and updates the current object.

### `GSint& operator<<=(const GSint& other)`

Compound assignment operator that performs a bitwise left shift operation on the value of the current `GSint` object by the value of another `GSint` object and updates the current object.

### `GSint& operator>>=(const GSint& other)`

Compound assignment operator that performs a bitwise right shift operation on the value of the current `GSint` object by the value of another `GSint` object and updates the current object.

### `GSint operator[](int index) const`

Indexing operator that returns the digit at the specified index in the string representation of the `GSint` object. Throws an out of range exception if the index is invalid.

### `GSint& operator=(int val)`

Assignment operator that assigns the given integer value to the `GSint` object and returns a reference to the updated object.

### `GSint& operator+=(int val)`

Compound assignment operator that adds the given integer value to the `GSint` object and updates the current object.

### `GSint& operator-=(int val)`

Compound assignment operator that subtracts the given integer value from the `GSint` object and updates the current object.

### `GSint& operator*=(int val)`

Compound assignment operator that multiplies the `GSint` object by the given integer value and updates the current object.

### `GSint& operator/=(int val)`

Compound assignment operator that divides the `GSint` object by the given integer value and updates the current object. Throws a runtime error if division by zero is attempted.

### `GSint& operator%=(int val)`

Compound assignment operator that calculates the modulus of the `GSint` object divided by the given integer value and updates the current object.

## Examples

```cpp
GSint number1(7);
GSint number2(3);
GSint number3(10);

std::cout << "Value of number1: " << number1.getValue() << std::endl;
// Output: Value of number1: 7

std::cout << "Value of number2: " << number2.getValue() << std::endl;
// Output: Value of number2: 3

std::cout << "Value of number3: " << number3.getValue() << std::endl;
// Output: Value of number3: 10

GSint negated = -number1;
std::cout << "Negated number: " << negated.getValue() << std::endl;
// Output: Negated number: -7

number1 += number2;
std::cout << "Added and assigned: " << number1.getValue() << std::endl;
// Output: Added and assigned: 10

number1 -= number2;
std::cout << "Subtracted and assigned: " << number1.getValue() << std::endl;
// Output: Subtracted and assigned: 7

number1 *= number2;
std::cout << "Multiplied and assigned: " << number1.getValue() << std::endl;
// Output: Multiplied and assigned: 21

number1 /= number2;
std::cout << "Divided and assigned: " << number1.getValue() << std::endl;
// Output: Divided and assigned: 7

number1 %= number2;
std::cout << "Modulus and assigned: " << number1.getValue() << std::endl;
// Output: Modulus and assigned: 1

GSint bitwiseNegated = ~number1;
std::cout << "Bitwise negation: " << bitwiseNegated.getValue() << std::endl;
// Output: Bitwise negation: -2

GSint bitwiseAnd = number1 & number2;
std::cout << "Bitwise AND: " << bitwiseAnd.getValue() << std::endl;
// Output: Bitwise AND: 1

GSint bitwiseOr = number1 | number2;
std::cout << "Bitwise OR: " << bitwiseOr.getValue() << std::endl;
// Output: Bitwise OR: 3

GSint bitwiseXor = number1 ^ number2;
std::cout << "Bitwise XOR: " << bitwiseXor.getValue() << std::endl;
// Output: Bitwise XOR: 2

GSint bitwiseShiftLeft = number1 << number2;
std::cout << "Bitwise shift left: " << bitwiseShiftLeft.getValue() << std::endl;
// Output: Bitwise shift left: 56

GSint bitwiseShiftRight = number1 >> number2;
std::cout << "Bitwise shift right: " << bitwiseShiftRight.getValue() << std::endl;
// Output: Bitwise shift right: 0

number1 &= number2;
std::cout << "Bitwise AND and assigned: " << number1.getValue() << std::endl;
// Output: Bitwise AND and assigned: 1

number1 |= number2;
std::cout << "Bitwise OR and assigned: " << number1.getValue() << std::endl;
// Output: Bitwise OR and assigned: 3

number1 ^= number2;
std::cout << "Bitwise XOR and assigned: " << number1.getValue() << std::endl;
// Output: Bitwise XOR and assigned: 0

number1 <<= number2;
std::cout << "Bitwise shift left and assigned: " << number1.getValue() << std::endl;
// Output: Bitwise shift left and assigned: 0

number1 >>= number2;
std::cout << "Bitwise shift right and assigned: " << number1.getValue() << std::endl;
// Output: Bitwise shift right and assigned: 0

GSint sum = number1 + number2;
std::cout << "Sum: " << sum.getValue() << std::endl;
// Output: Sum: 3

GSint difference = number1 - number2;
std::cout << "Difference: " << difference.getValue() << std::endl;
// Output: Difference: -3

GSint product = number1 * number2;
std::cout << "Product: " << product.getValue() << std::endl;
// Output: Product: 0

GSint quotient = number1 / number2;
std::cout << "Quotient: " << quotient.getValue() << std::endl;
// Output: Quotient: 0

GSint remainder = number1 % number2;
std::cout << "Remainder: " << remainder.getValue() << std::endl;
// Output: Remainder: 0

GSint negation = -number1;
std::cout << "Negation: " << negation.getValue() << std::endl;
// Output: Negation: 0

GSint increment = ++number1;
std::cout << "Increment (prefix): " << increment.getValue() << std::endl;
// Output: Increment (prefix): 1

GSint postIncrement = number1++;
std::cout << "Increment (postfix): " << postIncrement.getValue() << std::endl;
// Output: Increment (postfix): 1

GSint decrement = --number2;
std::cout << "Decrement (prefix): " << decrement.getValue() << std::endl;
// Output: Decrement (prefix): 2

GSint postDecrement = number2--;
std::cout << "Decrement (postfix): " << postDecrement.getValue() << std::endl;
// Output: Decrement (postfix): 2

bool isEqual = number1 == number2;
std::cout << "Is number1 equal to number2? " << (isEqual ? "Yes" : "No") << std::endl;
// Output: Is number1 equal to number2? No

bool isGreater = number1 > number2;
std::cout << "Is number1 greater than number2? " << (isGreater ? "Yes" : "No") << std::endl;
// Output: Is number1 greater than number2? Yes

bool isLess = number1 < number2;
std::cout << "Is number1 less than number2? " << (isLess ? "Yes" : "No") << std::endl;
// Output: Is number1 less than number2? No

bool isPositive = number1.isPositive();
std::cout << "Is number1 positive? " << (isPositive ? "Yes" : "No") << std::endl;
// Output: Is number1 positive? No

bool isNegative = number1.isNegative();
std::cout << "Is number1 negative? " << (isNegative ? "Yes" : "No") << std::endl;
// Output: Is number1 negative? No

double reciprocal = number1.reciprocal();
std::cout << "Reciprocal of number1: " << reciprocal << std::endl;
// Output: Reciprocal of number1: 0

int absoluteValue = number1.absolute();
std::cout << "Absolute value of number1: " << absoluteValue << std::endl;
// Output: Absolute value of number1: 0

GSint power = number1.power(3);
std::cout << "Number1 raised to the power of 3: " << power.getValue() << std::endl;
// Output: Number1 raised to the power of 3: 0

GSint factorial = number2.factorial();
std::cout << "Factorial of number2: " << factorial.getValue() << std::endl;
// Output: Factorial of number2: 6

std::string binary = number3.toBinary();
std::cout << "Binary representation of number3: " << binary << std::endl;
// Output: Binary representation of number3: 1010

std::string octal = number3.toOctal();
std::cout << "Octal representation of number3: " << octal << std::endl;
// Output: Octal representation of number3: 12

std::string hexadecimal = number3.toHexadecimal();
std::cout << "Hexadecimal representation of number3: " << hexadecimal << std::endl;
// Output: Hexadecimal representation of number3: A

int sumOfDigits = number3.sumOfDigits();
std::cout << "Sum of digits of number3: " << sumOfDigits << std::endl;
// Output: Sum of digits of number3: 1

int productOfDigits = number3.productOfDigits();
std::cout << "Product of digits of number3: " << productOfDigits << std::endl;
// Output: Product of digits of number3: 0

bool isPerfect = number3.isPerfect();
std::cout << "Is number3 a perfect number? " << (isPerfect ? "Yes" : "No") << std::endl;
// Output: Is number3 a perfect number? No

bool isSquareNumber = number3.isSquareNumber();
std::cout << "Is number3 a square number? " << (isSquareNumber ? "Yes" : "No") << std::endl;
// Output: Is number3 a square number? No

bool isPowerOf2 = number3.isPowerOf(2);
std::cout << "Is number3 a power of 2? " << (isPowerOf2 ? "Yes" : "No") << std::endl;
// Output: Is number3 a power of 2? No

bool isPalindrome = number3.isPalindrome();
std::cout << "Is number3 a palindrome? " << (isPalindrome ? "Yes" : "No") << std::endl;
// Output: Is number3 a palindrome? No

int gcd = GSint::gcd(number1.getValue(), number2.getValue());
std::cout << "Greatest common divisor of number1 and number2: " << gcd << std::endl;
// Output: Greatest common divisor of number1 and number2: 1

int lcm = GSint::lcm(number1.getValue(), number2.getValue());
std::cout << "Least common multiple of number1 and number2: " << lcm << std::endl;
// Output: Least common multiple of number1 and number2: 21

GSint absoluteDifference = number1.absoluteDifference(number2);
std::cout << "Absolute difference between number1 and number2: " << absoluteDifference.getValue() << std::endl;
// Output: Absolute difference between number1 and number2: 2

double average = number1.average(number2);
std::cout << "Average of number1 and number2: " << average << std::endl;
// Output: Average of number1 and number2: 1.5

bool isDivisible = number1.isDivisibleBy(number2);
std::cout << "Is number1 divisible by number2? " << (isDivisible ? "Yes" : "No") << std::endl;
// Output: Is number1 divisible by number2? No

GSint maximum = number1.maximum(number2);
std::cout << "Maximum between number1 and number2: " << maximum.getValue() << std::endl;
// Output: Maximum between number1 and number2: 3

GSint minimum = number1.minimum(number2);
std::cout << "Minimum between number1 and number2: " << minimum.getValue() << std::endl;
// Output: Minimum between number1 and number2: 1

double average3 = number1.average(number2, number3);
std::cout << "Average of number1, number2, and number3: " << average3 << std::endl;
// Output: Average of number1, number2, and number3: 3.66667

bool isBetween = number2.isBetween(number1, number3);
std::cout << "Is number2 between number1 and number3? " << (isBetween ? "Yes" : "No") << std::endl;
// Output: Is number2 between number1 and number3? Yes
```

## Output

```
Value of number1: 7
Value of number2: 3
Value of number3: 10
Negated number: -7
Added and assigned: 10
Subtracted and assigned: 7
Multiplied and assigned: 21
Divided and assigned: 7
Modulus and assigned: 1
Bitwise negation: -2
Bitwise AND: 1
Bitwise OR: 3
Bitwise XOR: 2
Bitwise shift left: 56
Bitwise shift right: 0
Bitwise AND and assigned: 1
Bitwise OR and assigned: 3
Bitwise XOR and assigned: 0
Bitwise shift left and assigned: 0
Bitwise shift right and assigned: 0
Sum: 3
Difference: -3
Product: 0
Quotient: 0
Remainder: 0
Negation: 0
Increment (prefix): 1
Increment (postfix): 1
Decrement (prefix): 2
Decrement (postfix): 2
Is number1 equal to number2? No
Is number1 greater than number2? Yes
Is number1 less than number2? No
Is number1 positive? No
Is number1 negative? No
Reciprocal of number1: 0
Absolute value of number1: 0
Number1 raised to the power of 3: 0
Factorial of number2: 6
Binary representation of number3: 1010
Octal representation of number3: 12
Hexadecimal representation of number3: A
Sum of digits of number3: 1
Product of digits of number3: 0
Is number3 a perfect number? No
Is number3 a square number? No
Is number3 a power of 2? No
Is number3 a palindrome? No
Greatest common divisor of number1 and number2: 1
Least common multiple of number1 and number2: 21
Absolute difference between number1 and number2: 2
Average of number1 and number2: 1.5
Is number1 divisible by number2? No
Maximum between number1 and number2: 3
Minimum between number1 and number2: 1
Average of number1, number2, and number3: 3.66667
Is number2 between number1 and number3? Yes
```
