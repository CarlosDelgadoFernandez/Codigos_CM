//dekker1



#include <stdio.h>

#include <stdlib.h>

using namespace std;



int wantp = 0;

int wantq = 0;

int turn = 1;

int N=0;



void p()

{

    int i=0;

    while (i<10) 

    {

      cout << "process p non-critical section\n";

      i++;

      wantp = 1;

      while (wantq){

        if (turn == 2)

          {

          wantp = 0;

          while (!(turn == 1));

          wantp = 1;

          }

      }         

      cout << "process p critical section\n";

      N=N+1;

      turn = 2;

      wantp = 0;

    }

}



void q()

{

    int i=0;

    while (i<10) 

    {

      cout << "process q non-critical section\n";

      i++;

      wantq = 1;

      while (wantp){

        if (turn == 1)

          {

          wantq = 0;

          while (!(turn == 2));

          wantq = 1;

        }

      }  

      cout << "process q critical section\n";

      N=N+1;

      turn = 1;

      wantq = 0;

    }

}



main() {

  cobegin {

    p();

    q();

  }

}
