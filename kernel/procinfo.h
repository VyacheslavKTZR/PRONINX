#ifndef PROCINFO_H
#define PROCINFO_H

#include "types.h"

// Process state enum copied from proc.h for user-space to understand
enum procstate_info { UNUSED_STATE, USED_STATE, SLEEPING_STATE, RUNNABLE_STATE, RUNNING_STATE, ZOMBIE_STATE };

struct procinfo {
  int pid;
  int state;
  uint64 sz;
  char name[16];
};

#endif
