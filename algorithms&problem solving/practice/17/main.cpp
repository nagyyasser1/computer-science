#include <iostream>
using namespace std;

int main()
{
    string pass = "AAD";
    string testPass = "";
    int counter = 0;
    cout << "hello world!\n";
    bool passwordFound = false;

    for (char first = 'A'; first <= 'Z' && !passwordFound; first++)
    {
        for (char second = 'A'; second <= 'Z' && !passwordFound; second++)
        {
            for (char third = 'A'; third <= 'Z' && !passwordFound; third++)
            {
                counter++;

                testPass = "";
                testPass += first;
                testPass += second;
                testPass += third;

                if (testPass == pass)
                {
                    cout << "Password matched after " << counter << " times." << endl;
                    passwordFound = true; // Exit the loops when the password is found.
                }
            }
        }
    }
    return 0;
}
