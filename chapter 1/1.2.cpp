1. (Practice) State whether the following are valid identifiers and if so, whether they’re mnemonic
names that convey some idea of their purpose. If the identifier names are invalid,
state why.

1m1234 Invalid; begins with a number
power Valid; mnemonic
add_5 Valid; mnemonic
newBalance Valid; mnemonic
newBal Valid; mnemonic
absVal Valid; mnemonic
taxes Valid; mnemonic
a2b3c4d5 Valid; not mnemonic
abcd Valid; not mnemonic
invoices Valid; mnemonic
netPay Valid; mnemonic
salesTax Valid; mnemonic
A12345 Valid; not mnemonic
do Invalid; C++ keyword
123435 Invalid; begins with a number
amount Valid; mnemonic
1A2345 Invalid; begins with a number
while Invalid; C++ keyword
int Invalid; C++ keyword
$taxes Invalid; begins with a special character

2. (Practice) Assume the following functions have been written:
getLength(),ƒgetWidth(),ƒcalcArea(),ƒdisplayArea()
a. Based on their names, what do you think each function might do?

getLength() get a length measurement
getWidth() get a width measurement
calcArea() calculate an area
displayArea() display or print the area

b. In what order do you think a main() function might execute these functions (based on
their names)?

getLength(), getWidth(), calcArea(), and displayArea()

3. (Practice) Assume the following functions have been written:
inputPrice(),ƒcalcSalestax(),ƒcalcTotal()
a. Based on their names, what do you think each function might do?

inputPrice() input an amount of a sale
calcSalestax() determine sales tax on the purchase
calcBalance() calculate sum of the sale and the tax

b. In what order do you think a main() function might execute these functions (based on
their names)?

inputPrice(), calcSalestax(), and calcBalance()

4. (Practice) Determine names for functions that do the following:
a. Find the average of a set of numbers.
avgNum()
b. Find the area of a rectangle.
areaRectangle()
c. Find the circumference of a circle.
circumferenceCircle()
d. Find the maximum value in a set of numbers.
maxNumbers()
e. Convert an uppercase letter to a lowercase letter.
upperToLowercase()
f. Sort a set of numbers from lowest to highest.
lowestToHighest()
g. Alphabetize a list of names.
alphNames()

5. (Practice) Just as the keyword int can be used to signify that a function returns an integer,
the keywords void, char, float, and double can be used to signify that a function returns no
value, a character, a floating-point number, and a double-precision number, respectively. Using
this information, write header lines for a function named abs() that receives no arguments but
returns the following:
a. No value
void abs()
{
return 0;
}

b. A character
char abs()
{
return "cat";
}

c. A floating-point number
float abs()
{
return 5.23;
}

d. A double-precision number
double abs()
{
return 50030;
}
