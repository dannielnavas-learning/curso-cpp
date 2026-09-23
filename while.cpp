#include <iostream>

using namespace std;

int main()
{
    for (;;)
    {
        char response;
        // cout << "Deseas continuar? (s/n): ";
        // cin >> response;
        // if (response == 'n' || response == 'N')
        // {
        //     break;
        // }
        // else
        // {
        //     continue;
        // }

        while (true)
        {
            cout << "Deseas continuar? (s/n): ";
            cin >> response;
            if (response == 'n' || response == 'N')
            {
                break;
            }
            else
            {
                continue;
            }
        }

        // do-while loop example
        // do
        // {
        //     cout << "Deseas continuar? (s/n): ";
        //     cin >> response;
        //     if (response == 'n' || response == 'N')
        //     {
        //         break;
        //     }
        //     else
        //     {
        //         continue;
        //     }
        // } while (true);
    }
    return 0;
}
