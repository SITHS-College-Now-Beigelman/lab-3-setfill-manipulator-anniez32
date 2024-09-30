//Annie Zhao
//Lab 3
//September 30th, 2024

#include <iostream>   //allows cout to generate output, and allows for endl to be used
#include <iomanip>  // allows for use of manipulators 
using namespace std;  //allows cout and endl to be used wthout std:: in front of them

int main()
{
    cout << setfill('#');   // fills empty spaces with a "#"
    cout << setw(78) << "#" << endl;  // fills 78 columns 
    cout << setfill (' ');   // fills empty spaces with a " "
    cout << "#" << setw(77) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(58) << " Ways to access the Task Manager on your Windows computer:" << setw(19) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(77) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(51) << "    Press the key combination Ctrl + Shift + Escape" << setw(26) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(77) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(75) << "    Press the key combination Ctrl + Alt + Delete and select “Task Manager”" << setw(2) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(77) << "#" << endl;
    cout << setfill(' ');
    cout << "#" << setw(56) << "    Type “Task Manager” in the Windows Start menu search" << setw(21) << "#" << endl;
    cout << setfill (' ');
    cout << "#" << setw(77) << "#" << endl;
    cout << setfill('#');
    cout << setw(78) << "#" << endl;
    return 0;
}

// output message
/*
##############################################################################
#                                                                            #
# Ways to access the Task Manager on your Windows computer:                  #
#                                                                            #
#    Press the key combination Ctrl + Shift + Escape                         #
#                                                                            #
#    Press the key combination Ctrl + Alt + Delete and select “Task Manager” #
#                                                                            #
#    Type “Task Manager” in the Windows Start menu search                    #
#                                                                            #
##############################################################################

[Done] exited with code=0 in 1.49 seconds
*/