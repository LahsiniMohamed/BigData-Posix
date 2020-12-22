# BigData-Posix
  An application for processing big data (i.e. BigData) through a large square matrix (n x n) whose values ​​represent temperatures collected in real time by polling regularly
The objective is to calculate in real time statistics concerning the collected temperatures such as ***mean temperature***, ***median temperature***, ***standard deviation and variance of temperatures***, and to display them

## What we have done so far : 
- We put together a logic architecture that we will follow in our developpement process ***Logic architecture.mdj***  
- We made a general structure of the code that we will need, and all the files that we will have in our app
- The files contains a general idea of what they supposed to do and how they link together, but they dont have a full implementation of their routines

## What we still have to do :
- Write the code for all the statistics that wee have in our apps (until now the statistics just prints a string describing what he does)
- Write the code for the file thread.c that will devide the matrix and assign a thread for every part of the matrix to calculate all the statistics that we have.


## Description of the architecture that we used :   
The architecture contains a Sensor interface which groups together and manages all the sensors used in
the solution, it also makes sure to disregard the complex capture process so as not to
give the user only a simple function allowing him to obtain the desired value. This
abstraction also re ects the evolutionary and exible (scalable) side of the solution which can easily support
adding more sensors. In addition, Matrix is ​​a set of which includes the matrix
and define how it works, ie how the matrix interacts with the sensors. The interaction with the sensors is ensured by the variable INTERVAL which define the interval of
time whiche at the end of the matrix asks all the sensors for their values. It should be noted that this
task becomes easier thanks to the abstraction described in the Sensor interface.
Another interface present in this architecture is the one called Statistics which includes all
the statistics relating to the temperatures captured that we want to calculate in real time at
namely mean-temp, standard deviation and median-temp. We have opted for the use of the correct
practice which is the Strategy design pattern in order to give more "scalability" to our solution.
The last module, which is Thread, is responsible for dividing the matrix and granting each thread its own
own space to allow him to carry out his calculations (statistics).
It should be noted that the con g le gathers all the configuration variables used and accessible
by the di erent modules such as the number of sensors, the interval, the size of the columns
of the matrix etc ...
Since each pthread has its own space in the matrix where it can enter the data it calculates
independently of the others, the rate of utilization of the process as well as the execution time
not going to experience a big change depending on the number of pthreads. Nevertheless, in the
case where we use a single memory area for all threads instead of a specific area
per thread, the number of threads will have an impact on these two parameters since there will be
competition between threads that requires scheduling and synchronization. Indeed,
for example, thread synchronization implies that some are blocked while waiting
in turn, which varies the parameters mentioned above.

