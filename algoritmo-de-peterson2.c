//algoritmo de peterson 2



#include <stdio.h>

#include <stdlib.h>

using namespace std;



int FALSE=0;

int TRUE=1;

const int N=2;	

int G=0;	



int turn;		

int interested[N];



void enter_region(int process)	

{

  int other;	

  other=1-process;	

  interested[process]=TRUE;	

  turn=process;		

  while((turn==process)&&(interested[other]==TRUE)

  return other;

  );

}



void leave_region(int process)	

{

  interested[process]=FALSE;

}





void p()

{

  int i=0;

  while(i<10){

    i++;

    cout<<"p seccion no critica"<<endl;

    enter_region(0);

    cout<<"p seccion critica"<<endl;

    G=G+1;

    leave_region(0);

    return i;

  }

}





void q()

{

  int i=0;

  while(i<10){

    i++;

    cout<<"q seccion no critica"<<endl;

    enter_region(1);

    cout<<"q seccion critica"<<endl;

    G=G+1;

    leave_region(1);

    return i;

  }

}



main() {

  cobegin {

    p();

    q();

  }

  cout<<"G="<<G<<endl;

}
