// Compatibility fs.h for FAT32
#include "types.h"
#define DIRSIZ 30
#define MAXFILE 1000

struct dirent {
  uint16 inum;
  char name[DIRSIZ];
};
