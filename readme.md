# Programming Challenges C++
## Problem 1.6 Interpreter[^1]
### Problem description
This program simulates the inner workings of a computer CPU. This computer has 10 registers and 1000 words of RAM. The registers values are initialized to 0. The program instructions are stored sequentially in RAM (0 .. ). 

The program instructions are of the form:
1. 100 - Halt
2. 2dn - Set register 'd' to 'n' (0 <= n <= 9)
3. 3dn - Add 'n' to register 'd'
4. 4dn - Multiply register 'd' by 'n'
5. 5ds - Set register 'd' to the value of register 's'
6. 6ds - Add the value of register 's' to register 'd'
7. 7ds - Multiply the value of register 'd' by the value of register 's'
8. 8da - Set register 'd' to the value in RAM whos address is in register 'a'
9. 9sa - Set the value in RAM whose address is in register 'a' to that of register 's'
10. 0ds - goto the location in register 'd' unless the register 's' contains 0

The input contains a single line containing the number of cases followed by a blank line. The next lines contain the values in RAM. A blank line indicates the end of the input for that case. TRhe next list of input is the next case. The program will terminate when all cases have been successfully run.


### Example 
>**Input**                                                                 
>1                                                          
>                                              
>299                                     
>492                                                  
>495                                                       
>399                                                 
>492                                                
>495                                                  
>399                                             
>383                                                
>279                                                       
>689                                                     
>078                                                      
>100                                                        
>000                                                   
>000                                                    
>000                                                                                                                                                                                      

>**Output**
>16                                                                                            


### Problem solution
1. The program will read in the number of test cases
2. The contents of RAM will be read into the RAM array
3. The program will run the command starting at index '0'
4. The program will run the next command in the adjacent RAm array index
5. The case will terminate when the "halt" command is reached
6. The number of instructions commputed is printed to the terminal/file
7. If not all cases have been run, the next case is processed (go to step 2.)
8. Else terminate program.


### Bug Checklist
- [1] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 21