#include <studio.h>
#include <stdilib.h>
#include <mpi.h>

int main(int argc, char **argv){
  int numproc;
  int miproc;
  float x;
  float y;
  MPI_Init (&argc, &argv); /*Inicializar 
