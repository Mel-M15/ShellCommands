#include <iostream>  // Include header file for input and output
#include <string>    // Include header file for string input and output
#include <fstream>  // Include header file for ofstream
#include <cstdlib> // Include the C Standard Library for system() function
using namespace std;

int main() {
    // Declaration of variables
    int option;
    int mkdirResult;
    string filename;
    string filename2;
    string message;

    do {
    // Menu options user can select
    cout << "***************Menu***************" << endl;
    cout << "Select 1 of the 5 shell commands" << endl;
    cout << "Option 1: dir (list directory contents)" << endl;
    cout << "Option 2: cd (change directory)" << endl;
    cout << "Option 3: mkdir (create a new directory)  " << endl;
    cout << "Option 4: echo (display a message) " << endl;
    cout << "Option 5: type (concatenate and display content of files) " << endl;
    cout << "Option 6: Exit" << endl;

    // Ask user to select an option
    cout << "Select Option 1-6: ";
    cin >> option;
    cout << "***********************************" << endl;

    // Execute one of the following commands based on user's selected option
    switch (option) {
    case 1:
    {
        // Execute the command "dir" to list files in current directory
        cout << "Executing Option 1: Shell Command: dir, listing directory contents " << endl;
        int result = system("dir");
        if (result != 0)
        {
            cout << "Command execution failed." << endl;
            return 1;
        }
        break;
    }
    case 2:
    {
        // Execute the command "cd" to print the working directory
        cout << "Executing Option 2: Shell Command: cd, change directory " << endl;
        int result = system("cd");
        if (result != 0)
        {
            cout << "Command execution failed." << endl;
            return 1;
        }
        break;
    }
    case 3:
        // Execute the command "mkdir" to create a new directory
        cout << "Executing Option 3: Shell Command: mkdir, create a new directory " << endl;
        cout << "Creating a new directory named 'NewDirectory'" << endl;
        mkdirResult = system("mkdir NewDirectory");
        if (mkdirResult != 0) {
            // Handling error if creation of directory fails
            cout << "Directory creation failed - name of that directory already exists" << endl;
            cout << "Exiting the program" << endl;
            return 1;
        }
        break;
    case 4:
        // Execute the command "echo" to display a message
        cout << "Executing Option 4: Shell Command: echo (display a message) " << endl;
        //Prompt user to enter a message
        cout << "Enter a message to display: ";
        //Ignoring any previous newline characters
        cin.ignore();
        // Reading user's entire input
        getline(cin, message);
        // Displaying the message using the 'echo' command
        cout << "Displaying the message using echo command: ";
        system(("echo " + message).c_str());
        break;
    case 5:
    {
        // Execute the command "type" to concatenate and display content of files
        // Prompt user to enter two filenames
        cout << "Executing Option 5: Shell Command: type, concatenating and displaying content of files " << endl;
        // Prompt user to enter two filenames
        cout << "Enter the first filename: ";
        cin.ignore();
        getline(cin, filename);

        cout << "Enter the second file name: ";
        getline(cin, filename2);

        // Create and open the first file
        ofstream file1(filename);
        if (!file1.is_open()) {
            cout << "Error: Unable to create/open " << filename << endl;
            break;
        }
        // Write content to the first file
        cout << "Writing: \"This class is CS 540 Operating Systems\" to file1" << endl;
        file1 << "This class is CS 540 Operating Systems. ";
        file1.close();

        // Create and open the second file
        ofstream file2(filename2);
        if (!file2.is_open()) {
            cout << "Error: Unable to create/open " << filename2 << endl;
            break;
        }

        // Write content to the second file
        cout << "Writing: \"I am a student at Wichita State University\" to file2" << endl;
        file2 << "I am a student at Wichita State University.";
        file2.close();

        // Concatenate and display content of the two files
        cout << "Concatenating and displaying the content of file1 and file2: " << endl;
        string command = "type " + filename + " && type " + filename2;
        system(command.c_str());
        break;
        }
        case 6:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Invalid option. Please enter a number between 1 and 6." << endl;
        }

        cout << endl;

    } while (option != 6);  // Continue the loop until the user selects option 6 to exit

    return 0;
}