# Interpreter
 A C++ class capable of interpreting algebraic expressions

## Usage example for x squared expression:

```cpp
art::Interpreter xSquaredFunction("x*x");
int result = xSquaredFunction.getResult(2);
```
result = 4


## Usage example for a+b*(5*a), where a = 2 and b = 4:
```cpp
art::Interpreter function("a+b*4");
int result = function.getResult({2,6});
```

result = 42

### Limitation


1. The interpreter can parse these operators: +, -, *, /, ^
2. The interpreter does respect parenthesis priority
3. The interpreter does not support sqrt(), sin(), tan(), cos() etc...
