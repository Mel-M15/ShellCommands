# ShellCommands README

Please run this ShellCommands project in C++. 

# Overview

This C++ program is designed to provide a simple interface for executing and understanding some basic shell commands. Users will choose from a menu of shell commands to be executed. The objective of this program is to demonstrate the basics of shell commands and their execution.

# Functionality
The following are 5 shell commands that are used in this program each with its respective functionality:
1. dir - lists the files and directories in the current directory.
2. cd - prints working directory
3. mkdir - creates a new directory
4. echo - displays a message
5. type - displays the contents of a text file

# Instructions for Execution
1. Run this program in C++.
2. A menu will appear asking the user to select their choice for which shell command to be executed. A user will be able to continually enter their choice of shell command 
   to be executed. The shell command will be executed and then the program will continue to ask the user to select their choice of shell commands to be executed until the 
   user selects option 6 (which is to exit the program).
3. Options 1-5 will execute a specific shell command, while option 6 will terminate and exit the program.
4. When selecting an option from the menu, enter the number numerically for proper execution.
5. Selecting option 1 will execute the "dir" shell command - it will list the files and directories in the current directory
6. Selecting option 2 will execute the "cd" shell command - it will print the working directory
7. Selecting option 3 will execute the "mkdir" shell command - it will create a new directory named 'NewDirectory' and this folder will be placed in the ShellCommands 
   folder(this is where all the contents of this project are saved).
8. Selecting option 4 will execute the "echo" shell command - it will prompt the user to enter a message (for example type 'Hello World!') and the message typed by the user 
   will be displayed back to the user using the echo command.
9. Selecting option 5 will execute the "type" shell command - it will prompt the user to enter the first file name of their choice (for example type 'file1'), then it will 
   prompt the user to enter the second file name of their choice (for example type 'file2'). These two files will be placed in the ShellCommands folder (this is where all 
   the contents of this project are saved). The text: "This class is CS 540 Operating Systems" will be written to the file named 'file1' and the text "I am a student at 
   Wichita State University" will be written to the file named 'file2.' Finally, using the shell command "type", the program will concatenate and display the content of both 
   file1 and file2 to the user. 
10. Selecting option 6 will exit the program

# Note on the importance of validating user input and potential security risk associated with using the system function
