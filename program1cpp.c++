
/*Accelerated c++ 
   chapter 1 
 program1*/

#include<iostream>
int main()
{
        std::cout<<"This (\") is a quote, and this (\\) is a backslash";
        return 0;
}

/* program2 */

#include<iostream>
int main()
{
        {
                {
                        {
                                {
                                        {
                                                std::cout<<"Hello World";
                                        }
                                }
                        }
                }
        }
}
/* this is a valid program */

/* Program3 */

#include<iostream>
int main()
        std::cout<<"Hello World";
/* this is a not a valid program */


/* program 4 */

#include <iostream>
int main()
{
        /* This is a comment that extends over several lines
        because it uses /* and */ as its starting and ending delimiters */

        std::cout << "Does this work?" << std::endl;
        return 0;
}

/* this program will not run because of commenting */



/* program 5 */

#include <iostream>
int main()
{
        // This is a comment that extends over several lines
        // // by using // at the beginning of each line instead of using /*
        // // or */ to delimit comments.
        std::cout << "Does this work?" << std::endl;
        return 0;
}
/* this program will work */




