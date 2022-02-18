Exercise #1.1

1. Define the following terms:
a. computer program: A structured combination of data and instructions used to operate a
computer; another term for software.

b. programming language: The set of instructions, data, and rules used to construct a program.

c. programming: The process of writing a computer program in a language that the computer
can respond to and other programmers can understand.

d. algorithm: A step-by-step sequence of instructions describing how to perform a computation.

e. pseudocode: A means of describing an algorithm with English-like phrases.

f. flowchart: A diagram that uses symbols to depict an algorithm.

g. procedure: A logically consistent set of instructions that produce a specific result.

h. object: A specific case, or instance, of a class. An object consists of data and methods.

i. method: An operation or a procedure that can be applied to the data in a class; a member
function.

j. message: The means of activating a particular method in an object.

k. response: The predictable result of sending a message.

l. class: A broad category that defines the characteristics of the data an object can contain and
the methods that can be applied to the data; also a programmer-defined data type.

m. source program: A file consisting of a program’s statements in C++ or another programming
language.

n. compiler: The program that translates source code into machine language all at once, before
any code is executed.

o. object program: The result of compiling a source program. It’s created by the compiler and
is assigned the extension .obj.

p. executable program: A program that’s ready to be run.

q. interpreter: The program that translates source code into machine language, one line at a
time, as the source code is executed.

2. (Practice) Determine a step-by-step procedure (list the steps) for each of the following tasks:
a. Fix a flat tire.
Stop vehicle in a safe, level location
Set the parking brake
Get jack, lug wrench, and spare tire
Check air pressure in spare tire
Use jack to raise vehicle so that damaged tire is clear of ground
Remove hubcap
Use lug wrench to loosen each lug nut
Use lug wrench to remove each lug nut
Place lug nuts into hubcap
Remove tire from axle
Place spare tire on axle
Restore each lug nut, and tighten by hand
Tighten all lug nuts securely with lug wrench
Replace hubcap
Release jack
Return jack, lug wrench, and damaged tire to trunk of vehicle

b. Make a phone call.
Lift phone receiver
Dial a number
Wait for answer
Speak to person, or respond to electronic instructions


c. Go to the store and purchase a loaf of bread.
Transport yourself to the store
Find bakery department
Select a loaf of bread
Proceed to checkout area
Exchange money for the loaf of bread

d. Roast a turkey.
Buy a turkey
Take turkey out of bag
Season and Stuff turkey
Place Turkey on Tray
Preheat oven to 400 degrees
Place turkey in oven
Roast for 45 minutes
Remove turkey after roasting

3. (Practice) Determine and write an algorithm (list the steps) to interchange the contents of
two cups of liquid. Assume that a third cup is available to hold the contents of either cup temporarily.
Each cup should be rinsed before any new liquid is poured into it.

Label cups #1, #2, and #3, with #3 being the empty cup
Rinse #3
Pour contents of #1 into #3
Rinse #1
Pour contents of #2 into #1
Rinse #2
Pour contents of #3 into #2
Rinse #3


4. (Practice) Write a detailed set of instructions in English to calculate the dollar amount of
money in a piggybank that contains h half-dollars, q quarters, n nickels, d dimes, and p pennies.

For every h assign the value of .50
For ever q assign the value of .25
For every n assign the value of .5
For every d assign the value of .10
For every p assign the value of .01
Sort the piggybank's contents by h, q, n, d, p.
Multiply each coin type by it's repected multiple (i).
Utilize a function such as this (h * i)+(q * i)+(n * i)+(d * i)+(p * i).
Calculate the values so that they are equal to the total value in the piggybank.

5. (Practice) Write a set of detailed, step-by-step instructions in English to find the smallest
number in a group of three integer numbers.

For each value check for the lowest integer
Assign the current value to the lowest integer
if the lowest value is equal to the current value after looking at every interger
than the current integer is the lowest.
Print the current value as the lowest integer.

6. (Practice) a. Write detailed, step-by-step instructions in English to calculate the fewest number
of dollar bills needed to pay a bill of amount TOTAL. For example, if TOTAL were $98,
the bills would consist of one $50 bill, two $20 bills, one $5 bill, and three $1 bills. For this

exercise, assume that only $100, $50, $20, $10, $5, and $1 bills are available.

For each value in the collection of values
Subtract the largest value from TOTAL that can be calucated without resulting in a negative value.
So 98-50 = 48 and the result is now equal to the current value.
48-20 = 18 and now 18 is equal to the current value.
18-10 = 8 etc...
8-5 = 3
3-1-1-1 = 0
Calucate the Total Number of bills equal to the number increments til zero is reached.
Once the total equal zero the number of bills used should be seven.

b. Repeat Exercise 6a, but assume the bill is to be paid only in $1 bills.

If you only used one dollar bills than the Total value is equal the the total number of bills.

7. (Practice) a. Write an algorithm to locate the first occurrence of the name JEAN in a list of
names arranged in random order.

//Boyer–Moore string search algorithm is the best algorithm to use in the case.
void search( char *txt,  char *pat)
{
    int m = strlen(pat);
    int n = strlen(txt);

    int badchar[NO_OF_CHARS];
    badCharHeuristic(pat, m, badchar);

    int s = 0;
    while(s <= (n - m))
    {
        int j = m-1;

        while(j >= 0 && pat[j] == txt[s+j])
            j--;
        if (j < 0)
        {
            printf("\n pattern occurs at shift = %d", s);

            s += (s+m < n)? m-badchar[txt[s+m]] : 1;
        }
        else
            s += max(1, j - badchar[txt[s+j]]);
    }
}
int main()
{
    char txt[] = "ABAAABCJEAN";
    char pat[] = "JEAN";
    search(txt, pat);
    return 0;
}
b. Discuss how you could improve your algorithm for Exercise 7a if the list of names were
arranged in alphabetical order.

If the text was in alphabetical order than the algorithm can be run faster
by jumping the the first letter of the word JEAN.

8. (Practice) Determine and write an algorithm to sort three numbers in ascending (from lowest
to highest) order. How would you solve this problem heuristically?

void BubbleSort(apvector <int> &num)
{
      int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.length( );
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] < num[j])      // ascending order
              {
                    temp = num[j];             // swap elements
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}

* To solve this problem heuristically
locate the lowest value.
Begin to sort each value starting from the lowest.
Select the next highest value until the array of values are all organized.
From lowest to highest.

9. (Practice) Define an appropriate class for each of the following specific objects:
a. The number 5
class Five{ int 5;}
b. A square measuring 4 inches by 4 inches
class Squar{}
c. This C++ book
class Book{}
d. A 1955 Ford Thunderbird car
class Car{}
e. The last ballpoint pen you used
class Pen{}
10. (Practice) a. What operations should the following objects be capable of doing?
i. A 1955 Ford Thunderbird car

Calculating the current MPH.
Calculating the current gas tank content.
Calculating the current engine revolutions per minute.

ii. The last ballpoint pen you used

Measuring the current ink flow.
Calcuating the amount of ink left in the tube.
Calcuating the age of the the pin since its last use.

b. Do the operations determined for Exercise 10a apply only to the particular object listed, or
are they more general and applicable to all objects of the type listed?

They only apply to the object listed in 10a.
