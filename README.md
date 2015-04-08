# Towers-of-Hanoi-Computer-Science-2
Code project for computer science course 


Computer Science II
Program 4
 

In this program assignment you will write a program to solve the Towers of Hanoi problem. Legend has it that in a temple in the Far East, priests are attempting to move a stack of gold disks from one peg to another. The initial stack has n disks threaded onto one peg and arranged from bottom to top by decreasing size. The priests are attempting to move the disks on one peg to a second peg under the constraints that exactly one disk is moved at a time and at no time may a larger disk be placed above a smaller disk. A third peg is available for temporarily holding disks.

 

Let's assume that the priests are attempting to move the disks from peg1 to peg3. You want to show the priests the best way to solve the problem. Your program will use a recursive algorithm:

 

    Move n-1 disks from peg1 to peg2, using peg3 as a temporary holding area;
    Move the last disk (the largest) from peg1 to peg3;
    Move the n-1 disks from peg2 to peg3, using peg1 as a temporary holding area.

 

The process ends when the last task involves n=1 disk (i.e. the base case). This task is accomplished by simply moving the disk, without the need from a temporary holding area.

 

You must implement your own stack template to store the disks on each peg. Your program must allow user to specify the number of disks to be moved. The output of your program will be checked with the diff program against the output of my program using the following commands.

a.exe 5 > output5.txt

diff myOutput5.txt output5.txt

 

Download a template for the project (this project). Add member variables and functions if needed. Add any additional classes if needed.

 

The output of your program should look like the following for n=3:


