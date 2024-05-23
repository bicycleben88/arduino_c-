# Notes on Calculator No LED

## logic of defining the variables first and second

Multiplying the value of the input from customKey by 10 allows for the number to be multiple digits. For example to enter the number 137

- the user types the number 1 and **first** = 1
- the user types 3, 1 is multiplied by 10 to make 10, then 3 is added to make 13. Now **first** = 13
- the user types 7, 13 is multiplied by 10 to make 130, then 7 is added to make 137. Now **first** = 137

customKey is initialized to 0, which as a string is the ASCII value of 48. '1' is 49, '2' is 50, etc. In order for the input obtained by customKeypad.getKey() to be the appropriate numeric value, e.g., '3' = 3, the ASCII value of '0' is subtracted from the value of customKey. For example

- the user enters the key for the number 3, which customKeypad.getKey() evaluates to the string '3'
- the ASCII value of '0'(48) is subtracted from the ASCII value of '3'(51)
- 51 - 48 = 3

```
first = first * 10 + (customKey - '0');
```

## logic of cases with operation signs +, -, \*, and /

if there's a total from a previous calculation, it becomes the value of the **first** variable. Otherwise get the value from customKeypad.getKey() and apply it to **first** variable

print sign of the operation, e.g., +,-

call SecondNumber to handle adding value to the **second** variable

calculate the total

print total

reset first and second variables, which is what allows for multiple calculations

```
    case '+':
      first = (total != 0 ? total : first);
      Serial.println("+");
      second = SecondNumber();
      total = first + second;
      Serial.println(total);
      first = 0, second = 0;
      break;
```
