#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main()
{
  int n=getProcInfo();
  printf(1 , "\nNo. of Process: %d\n" , n);
  exit();
}