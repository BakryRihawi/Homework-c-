
#include <iostream>
using namespace std;
int main()
{

/*
    *
   **
  ***
 ****
*****
*/

    for (int x = 1; x <= 5; x++)
    {
        for (int y = 4; y >= x; y--) {

            cout << " ";
        }
        for (int z = 1; z <= x; z++)
        {
            cout << "*";
        }

        cout << endl;
    }



 /*
 
 print 

       *
      ***
     *****
    *******
   *********
   
   */

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



    for (int i = 1; i <= 5; i++)
    {

        for(int j = 1; j <= 5-i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (i * 2)-1; k++)

        {
            cout << "*";
        }

        cout << endl;





    }




}

