#include <iostream>
#include <cmath>
#include <stdexcept>

class GSint {
private:
    int value;

public:
    GSint(int val) : value(val) {}

    int getValue() const {
        return value;
    }

    int square() const {
        return value * value;
    }

    double squareRoot() const {
        return std::sqrt(value);
    }

    bool isEven() const {
        return (value % 2) == 0;
    }

    bool isPrime() const {
        if (value <= 1)
            return false;

        for (int i = 2; i <= std::sqrt(value); ++i) {
            if (value % i == 0)
                return false;
        }

        return true;
    }

    GSint operator+(const GSint& other) const {
        return GSint(value + other.value);
    }

    GSint operator-(const GSint& other) const {
        return GSint(value - other.value);
    }

    GSint operator*(const GSint& other) const {
        return GSint(value * other.value);
    }

    GSint operator/(const GSint& other) const {
        if (other.value != 0)
            return GSint(value / other.value);
        else
            throw std::runtime_error("Division by zero!");
    }

    GSint operator%(const GSint& other) const {
        return GSint(value % other.value);
    }

    GSint& operator++() {
        ++value;
        return *this;
    }

    GSint operator++(int) {
        GSint temp = *this;
        ++value;
        return temp;
    }

    GSint& operator--() {
        --value;
        return *this;
    }

    GSint operator--(int) {
        GSint temp = *this;
        --value;
        return temp;
    }

    bool operator==(const GSint& other) const {
        return value == other.value;
    }

    bool operator!=(const GSint& other) const {
        return value != other.value;
    }

    bool operator>(const GSint& other) const {
        return value > other.value;
    }

    bool operator<(const GSint& other) const {
        return value < other.value;
    }

    bool operator>=(const GSint& other) const {
        return value >= other.value;
    }

    bool operator<=(const GSint& other) const {
        return value <= other.value;
    }

    bool isPositive() const {
        return value > 0;
    }

    bool isNegative() const {
        return value < 0;
    }

    double reciprocal() const {
        if (value != 0)
            return 1.0 / value;
        else
            throw std::runtime_error("Reciprocal of zero!");
    }

    int absolute() const {
        return std::abs(value);
    }

    GSint power(int exponent) const {
        int result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= value;
        }
        return GSint(result);
    }

    GSint factorial() const {
        if (value < 0)
            throw std::runtime_error("Factorial of a negative number!");

        GSint result = 1;
        for (int i = 1; i <= value; ++i) {
            result = result * GSint(i);
        }
        return result;
    }

    std::string toBinary() const {
        if (value == 0)
            return "0";

        std::string binary;
        int num = std::abs(value);

        while (num > 0) {
            binary = std::to_string(num % 2) + binary;
            num /= 2;
        }

        if (value < 0)
            binary = "-" + binary;

        return binary;
    }

    std::string toOctal() const {
        if (value == 0)
            return "0";

        std::string octal;
        int num = std::abs(value);

        while (num > 0) {
            octal = std::to_string(num % 8) + octal;
            num /= 8;
        }

        if (value < 0)
            octal = "-" + octal;

        return octal;
    }

    std::string toHexadecimal() const {
        if (value == 0)
            return "0";

        std::string hex;
        int num = std::abs(value);

        while (num > 0) {
            int remainder = num % 16;
            if (remainder < 10)
                hex = std::to_string(remainder) + hex;
            else
                hex = static_cast<char>('A' + remainder - 10) + hex;
            num /= 16;
        }

        if (value < 0)
            hex = "-" + hex;

        return hex;
    }

    int sumOfDigits() const {
        int sum = 0;
        int num = std::abs(value);

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int productOfDigits() const {
        int product = 1;
        int num = std::abs(value);

        while (num > 0) {
            product *= num % 10;
            num /= 10;
        }

        return product;
    }

    bool isPerfect() const {
        if (value < 2)
            return false;

        int sum = 1;
        for (int i = 2; i <= value / 2; ++i) {
            if (value % i == 0)
                sum += i;
        }

        return sum == value;
    }

    bool isSquareNumber() const {
        int squareRoot = std::sqrt(value);
        return squareRoot * squareRoot == value;
    }

    bool isPowerOf(int base) const {
        if (base <= 0)
            return false;

        int temp = value;
        while (temp % base == 0) {
            temp /= base;
        }

        return temp == 1;
    }

    bool isPalindrome() const {
        int num = std::abs(value);
        int reversed = 0;
        int original = num;

        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }

        return original == reversed;
    }

    static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    static int lcm(int a, int b) {
        return std::abs(a * b) / gcd(a, b);
    }

    std::string toString() const {
        return std::to_string(value);
    }

    GSint absoluteDifference(const GSint& other) const {
        return GSint(std::abs(value - other.value));
    }

    double average(const GSint& other) const {
        return (value + other.value) / 2.0;
    }

    bool isDivisibleBy(const GSint& other) const {
        return value % other.value == 0;
    }

    GSint maximum(const GSint& other) const {
        return GSint(std::max(value, other.value));
    }

    GSint minimum(const GSint& other) const {
        return GSint(std::min(value, other.value));
    }

    double average(const GSint& other1, const GSint& other2) const {
        return (value + other1.value + other2.value) / 3.0;
    }

    bool isBetween(const GSint& lower, const GSint& upper) const {
        return value > lower.value && value < upper.value;
    }

    friend GSint factorial(const GSint& number) {
        return number.factorial();
    }

    friend int greatestCommonDivisor(const GSint& number1, const GSint& number2) {
        return GSint::gcd(number1.value, number2.value);
    }

    friend int leastCommonMultiple(const GSint& number1, const GSint& number2) {
        return GSint::lcm(number1.value, number2.value);
    }

    GSint operator-() const {
        return GSint(-value);
    }

    GSint& operator+=(const GSint& other) {
        value += other.value;
        return *this;
    }

    GSint& operator-=(const GSint& other) {
        value -= other.value;
        return *this;
    }

    GSint& operator*=(const GSint& other) {
        value *= other.value;
        return *this;
    }

    GSint& operator/=(const GSint& other) {
        if (other.value != 0) {
            value /= other.value;
            return *this;
        } else {
            throw std::runtime_error("Division by zero!");
        }
    }

    GSint& operator%=(const GSint& other) {
        value %= other.value;
        return *this;
    }

    GSint& operator-() {
        value = -value;
        return *this;
    }

    GSint operator&(const GSint& other) const {
        return GSint(value & other.value);
    }

    GSint operator|(const GSint& other) const {
        return GSint(value | other.value);
    }

    GSint operator^(const GSint& other) const {
        return GSint(value ^ other.value);
    }

    GSint operator~() const {
        return GSint(~value);
    }

    GSint operator<<(const GSint& other) const {
        return GSint(value << other.value);
    }

    GSint operator>>(const GSint& other) const {
        return GSint(value >> other.value);
    }

    GSint& operator&=(const GSint& other) {
        value &= other.value;
        return *this;
    }

    GSint& operator|=(const GSint& other) {
        value |= other.value;
        return *this;
    }

    GSint& operator^=(const GSint& other) {
        value ^= other.value;
        return *this;
    }

    GSint& operator<<=(const GSint& other) {
        value <<= other.value;
        return *this;
    }

    GSint& operator>>=(const GSint& other) {
        value >>= other.value;
        return *this;
    }

    GSint operator[](int index) const {
        std::string str = std::to_string(value);
        if (index < 0 || index >= str.length())
            throw std::out_of_range("Index out of range!");

        return GSint(str[index] - '0');
    }

    GSint& operator=(int val) {
        value = val;
        return *this;
    }

    GSint& operator+=(int val) {
        value += val;
        return *this;
    }

    GSint& operator-=(int val) {
        value -= val;
        return *this;
    }

    GSint& operator*=(int val) {
        value *= val;
        return *this;
    }

    GSint& operator/=(int val) {
        if (val != 0) {
            value /= val;
            return *this;
        } else {
            throw std::runtime_error("Division by zero!");
        }
    }

    GSint& operator%=(int val) {
        value %= val;
        return *this;
    }
};

GSint operator+(const GSint& gsint, int val) {
    return GSint(gsint.getValue() + val);
}

GSint operator+(int val, const GSint& gsint) {
    return GSint(val + gsint.getValue());
}

GSint operator-(const GSint& gsint, int val) {
    return GSint(gsint.getValue() - val);
}

GSint operator-(int val, const GSint& gsint) {
    return GSint(val - gsint.getValue());
}

GSint operator*(const GSint& gsint, int val) {
    return GSint(gsint.getValue() * val);
}

GSint operator*(int val, const GSint& gsint) {
    return GSint(val * gsint.getValue());
}

GSint operator/(const GSint& gsint, int val) {
    if (val != 0)
        return GSint(gsint.getValue() / val);
    else
        throw std::runtime_error("Division by zero!");
}

GSint operator%(const GSint& gsint, int val) {
    return GSint(gsint.getValue() % val);
}

bool operator==(int val, const GSint& gsint) {
    return val == gsint.getValue();
}

bool operator!=(int val, const GSint& gsint) {
    return val != gsint.getValue();
}

bool operator>(int val, const GSint& gsint) {
    return val > gsint.getValue();
}

bool operator<(int val, const GSint& gsint) {
    return val < gsint.getValue();
}

bool operator>=(int val, const GSint& gsint) {
    return val >= gsint.getValue();
}

bool operator<=(int val, const GSint& gsint) {
    return val <= gsint.getValue();
}

std::ostream& operator<<(std::ostream& os, const GSint& gsint) {
    os << gsint.getValue();
    return os;
}

std::istream& operator>>(std::istream& is, GSint& gsint) {
    int val;
    is >> val;
    gsint = GSint(val);
    return is;
}
/*
int main() {
    GSint number1(7);
    GSint number2(3);
    GSint number3(10);

    std::cout << "Value of number1: " << number1.getValue() << std::endl;
    std::cout << "Value of number2: " << number2.getValue() << std::endl;
    std::cout << "Value of number3: " << number3.getValue() << std::endl;

    GSint negated = -number1;
    std::cout << "Negated number: " << negated.getValue() << std::endl;

    number1 += number2;
    std::cout << "Added and assigned: " << number1.getValue() << std::endl;

    number1 -= number2;
    std::cout << "Subtracted and assigned: " << number1.getValue() << std::endl;

    number1 *= number2;
    std::cout << "Multiplied and assigned: " << number1.getValue() << std::endl;

    number1 /= number2;
    std::cout << "Divided and assigned: " << number1.getValue() << std::endl;

    number1 %= number2;
    std::cout << "Modulus and assigned: " << number1.getValue() << std::endl;

    GSint bitwiseNegated = ~number1;
    std::cout << "Bitwise negation: " << bitwiseNegated.getValue() << std::endl;

    GSint bitwiseAnd = number1 & number2;
    std::cout << "Bitwise AND: " << bitwiseAnd.getValue() << std::endl;

    GSint bitwiseOr = number1 | number2;
    std::cout << "Bitwise OR: " << bitwiseOr.getValue() << std::endl;

    GSint bitwiseXor = number1 ^ number2;
    std::cout << "Bitwise XOR: " << bitwiseXor.getValue() << std::endl;

    GSint bitwiseShiftLeft = number1 << number2;
    std::cout << "Bitwise shift left: " << bitwiseShiftLeft.getValue() << std::endl;

    GSint bitwiseShiftRight = number1 >> number2;
    std::cout << "Bitwise shift right: " << bitwiseShiftRight.getValue() << std::endl;

    number1 &= number2;
    std::cout << "Bitwise AND and assigned: " << number1.getValue() << std::endl;

    number1 |= number2;
    std::cout << "Bitwise OR and assigned: " << number1.getValue() << std::endl;

    number1 ^= number2;
    std::cout << "Bitwise XOR and assigned: " << number1.getValue() << std::endl;

    number1 <<= number2;
    std::cout << "Bitwise shift left and assigned: " << number1.getValue() << std::endl;

    number1 >>= number2;
    std::cout << "Bitwise shift right and assigned: " << number1.getValue() << std::endl;

    GSint sum = number1 + number2;
    std::cout << "Sum: " << sum.getValue() << std::endl;

    GSint difference = number1 - number2;
    std::cout << "Difference: " << difference.getValue() << std::endl;

    GSint product = number1 * number2;
    std::cout << "Product: " << product.getValue() << std::endl;

    GSint quotient = number1 / number2;
    std::cout << "Quotient: " << quotient.getValue() << std::endl;

    GSint remainder = number1 % number2;
    std::cout << "Remainder: " << remainder.getValue() << std::endl;

    GSint negation = -number1;
    std::cout << "Negation: " << negation.getValue() << std::endl;

    GSint increment = ++number1;
    std::cout << "Increment (prefix): " << increment.getValue() << std::endl;

    GSint postIncrement = number1++;
    std::cout << "Increment (postfix): " << postIncrement.getValue() << std::endl;

    GSint decrement = --number2;
    std::cout << "Decrement (prefix): " << decrement.getValue() << std::endl;

    GSint postDecrement = number2--;
    std::cout << "Decrement (postfix): " << postDecrement.getValue() << std::endl;

    bool isEqual = number1 == number2;
    std::cout << "Is number1 equal to number2? " << (isEqual ? "Yes" : "No") << std::endl;

    bool isGreater = number1 > number2;
    std::cout << "Is number1 greater than number2? " << (isGreater ? "Yes" : "No") << std::endl;

    bool isLess = number1 < number2;
    std::cout << "Is number1 less than number2? " << (isLess ? "Yes" : "No") << std::endl;

    bool isPositive = number1.isPositive();
    std::cout << "Is number1 positive? " << (isPositive ? "Yes" : "No") << std::endl;

    bool isNegative = number1.isNegative();
    std::cout << "Is number1 negative? " << (isNegative ? "Yes" : "No") << std::endl;

    double reciprocal = number1.reciprocal();
    std::cout << "Reciprocal of number1: " << reciprocal << std::endl;

    int absoluteValue = number1.absolute();
    std::cout << "Absolute value of number1: " << absoluteValue << std::endl;

    GSint power = number1.power(3);
    std::cout << "Number1 raised to the power of 3: " << power.getValue() << std::endl;

    GSint factorial = number2.factorial();
    std::cout << "Factorial of number2: " << factorial.getValue() << std::endl;

    std::string binary = number3.toBinary();
    std::cout << "Binary representation of number3: " << binary << std::endl;

    std::string octal = number3.toOctal();
    std::cout << "Octal representation of number3: " << octal << std::endl;

    std::string hexadecimal = number3.toHexadecimal();
    std::cout << "Hexadecimal representation of number3: " << hexadecimal << std::endl;

    int sumOfDigits = number3.sumOfDigits();
    std::cout << "Sum of digits of number3: " << sumOfDigits << std::endl;

    int productOfDigits = number3.productOfDigits();
    std::cout << "Product of digits of number3: " << productOfDigits << std::endl;

    bool isPerfect = number3.isPerfect();
    std::cout << "Is number3 a perfect number? " << (isPerfect ? "Yes" : "No") << std::endl;

    bool isSquareNumber = number3.isSquareNumber();
    std::cout << "Is number3 a square number? " << (isSquareNumber ? "Yes" : "No") << std::endl;

    bool isPowerOf2 = number3.isPowerOf(2);
    std::cout << "Is number3 a power of 2? " << (isPowerOf2 ? "Yes" : "No") << std::endl;

    bool isPalindrome = number3.isPalindrome();
    std::cout << "Is number3 a palindrome? " << (isPalindrome ? "Yes" : "No") << std::endl;

    int gcd = GSint::gcd(number1.getValue(), number2.getValue());
    std::cout << "Greatest common divisor of number1 and number2: " << gcd << std::endl;

    int lcm = GSint::lcm(number1.getValue(), number2.getValue());
    std::cout << "Least common multiple of number1 and number2: " << lcm << std::endl;

    GSint absoluteDifference = number1.absoluteDifference(number2);
    std::cout << "Absolute difference between number1 and number2: " << absoluteDifference.getValue() << std::endl;

    double average = number1.average(number2);
    std::cout << "Average of number1 and number2: " << average << std::endl;

    bool isDivisible = number1.isDivisibleBy(number2);
    std::cout << "Is number1 divisible by number2? " << (isDivisible ? "Yes" : "No") << std::endl;

    GSint maximum = number1.maximum(number2);
    std::cout << "Maximum between number1 and number2: " << maximum.getValue() << std::endl;

    GSint minimum = number1.minimum(number2);
    std::cout << "Minimum between number1 and number2: " << minimum.getValue() << std::endl;

    double average3 = number1.average(number2, number3);
    std::cout << "Average of number1, number2, and number3: " << average3 << std::endl;

    bool isBetween = number2.isBetween(number1, number3);
    std::cout << "Is number2 between number1 and number3? " << (isBetween ? "Yes" : "No") << std::endl;

    return 0;
}
*/
