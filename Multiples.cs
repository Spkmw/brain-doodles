/**
 * Susan Wong
 * 
 * Simple program that displays numbers from 1 - 100
 * where at certain multiples, it displays a word
 * 
 * 2014-01-27
 **/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Multiples
{
    class Multiples
    {
        public static void Main()
        {
            string output = "";
            for (int i = 1; i <= 100; i++)
            {
                if (i % 3 == 0)
                {
                    output += "Crackle";
                }
                if(i % 5 == 0) {
                    output += "Pop";
                }
                Console.WriteLine((output != "") ? output : i.ToString());
                output = "";
            }

            Console.ReadKey();
        }

    }
}

/**
 * You have the numbers 123456789, in that order. 
 * Between each number, you must insert either nothing,
 * a plus sign, or a multiplication sign,
 * so that the resulting expression equals 2002. 
 * Write a program that prints all solutions.

function combine (digit,exp) {                    
     if (digit > 9) {                             
        if (eval(exp) == 2002) alert(exp+'=2002');
        return;                                   
     }                                            
     combine(digit+1,exp+'+'+digit);              
     combine(digit+1,exp+'*'+digit);              
     combine(digit+1,exp+digit);                  
     return;                                      
}                                                 
combine(2,'1');     
**/