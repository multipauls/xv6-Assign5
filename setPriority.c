#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int priority, pid;
  if(argc != 3){
    printf(2,"Usage: setPriority priority pid\n");
    exit();
  }
  pid = atoi(argv[2]);
  priority = atoi(argv[1]);
  if (priority < 0 || priority > 100){
    printf(2,"Invalid priority (0-100)!\n");
    exit();
  }
  chpr(pid, priority);
  exit();
}