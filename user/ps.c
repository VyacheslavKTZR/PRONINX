#include "kernel/types.h"
#include "kernel/procinfo.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  struct procinfo pinfo[64];
  int count;

  count = procinfo(pinfo, 64);
  if(count < 0){
    printf("ps: procinfo failed\n");
    exit(1);
  }

  printf("PID\tSTATE\tSIZE\tNAME\n");
  for(int i = 0; i < count; i++){
    char *state;
    switch(pinfo[i].state){
      case UNUSED_STATE: state = "UNUSED"; break;
      case USED_STATE: state = "USED"; break;
      case SLEEPING_STATE: state = "SLEEP"; break;
      case RUNNABLE_STATE: state = "RUNBLE"; break;
      case RUNNING_STATE: state = "RUN"; break;
      case ZOMBIE_STATE: state = "ZOMBIE"; break;
      default: state = "???"; break;
    }
    printf("%d\t%s\t%lu\t%s\n", pinfo[i].pid, state, pinfo[i].sz, pinfo[i].name);
  }

  exit(0);
}
