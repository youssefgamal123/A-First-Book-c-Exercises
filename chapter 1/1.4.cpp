1. (Debug) a. Will the following program work?
#include <iostream>
 using namespace std;
 int main() {cout << “Hello there world!”; return 0;}

Yes

b. Even if the program in Exercise 1a works, explain why it’s not a good program.

It doesn’t represent good programming style, and it’s not easy to read.

2. (Modify) Rewrite the following programs to conform to good programming practice and correct
syntax:
a. #include <iostream>
 int main(){
 cout          <<
 “The time has come”
 ; return 0;}
------------------------------------------
#include <iostream>
   using namespace std;

   int main()
   {
    cout << “The time has come.”;
    return 0;
   }
b. #include <iostream>
  using namespace std;
    int main
    (    ){cout << “Newark is a city\n”;cout <<
    “In New Jersey\n”; cout <<
    “It is also a city\n”
    ; cout << “In Delaware\n”
    ; return 0;}
 ----------------------------------------
 #include <iostream>
   using namespace std;

   int main()
   {
    cout << “Newark is a city\n”;
    cout << “in New Jersey.\n”;
    cout << “It is also a city\n”;
    cout << “in Delaware\n”;
    return 0;
   }
c. #include <iostream>
  using namespace std;
    int main() {cout << Reading a program\n”;cout <<
    “is much easier\n”
    ; cout << “if a standard form for main() is used\n”)
    ; cout
     <<”and each statement is written\n”;cout
     <<           “on a line by itself\n”)
     ; return 0;}
----------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
cout << "Reading a program\n";
cout << "is much easier\n";
cout << "if a standard form for main() is used \n";
cout << "and each statment is written\n";
cout << "on a line by itself\n";
return 0;
}

d. #include <iostream.h>
    using namespace std;
     int main
     (    ){ cout << “Every C++ program”
     ; cout
     <<”\nmust have one and only one”
     ;
     cout << “main() function”
     ;
     cout <<
     “\n the escape sequence of characters”)
     ; cout <<
       “\nfor a newline can be placed anywhere”
     ; cout
     <<”\n within the message passed to cout”
     ; return 0;}
-----------------------------------------------------
#include <iostream.h>
using namespace std;
int main()
{
cout << "Every C++ program";
cout << "\n must have one and only one";
cout << "main() function";
cout << "\n the escape sequence of characters";
cout << "\n for a newline can be placed anywhere";
cout << \n within the message passed to cout";
return 0;
}
3. (For thought) a. When used in a message, the backslash character alters the meaning of the
character immediately following it. If you want to print the backslash character, you have to
tell cout to escape from the way it normally interprets the backslash. What character do you
think is used to alter the way a single backslash character is interpreted?

a backslash

b. Using your answer to Exercise 3a, write the escape sequence for printing a backslash.

\\ (two backslashes with no space between them)

4. (For thought) a. A token of a computer language is any sequence of one or more characters
that has a unique meaning to the compiler. Separating characters with intervening characters
or white space results in a compiler error. Using this definition of a token, determine whether
escape sequences, function names, and keywords listed in Table 1.1 are tokens of the C++
language.
escape sequences - Are tokens
function names - Are tokens
keywords - Are tokens
b. Discuss whether adding white space to a message alters the message and whether messages
can be considered tokens of C++.

Adding white space to a message doesn't alter the message contents and therefore a message is not considered a token.

c. Using the definition of a token in Exercise 4a, determine whether the following statement
is true: “Except for tokens of the language, C++ ignores all white space.”

The following statement is true.
