/* Jacob St Lawrence
This program prompts the user to input a string, then displays that string in all
upper case letter. */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()  //begin main
{
    char str[50];  //declare array for characters in string
    int length;  //declare variable for string length
    
    cout << "Enter a string: ";  //prompt user to input string
    cin.get(str, 50);  //read string as characters into str array
    cout << "\nString in upper case letters is:\n";  //display output message
    
    length = strlen(str); //determine length of array and assign to length
    
    for (int i = 0; i < length; i++)  //begin loop to iterate once for each character
        cout << static_cast<char>(toupper(str[i])); //display character in upper case
    
    cout << endl;
    
    return 0;
}
