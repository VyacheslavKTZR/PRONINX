#ifndef STAT_H
#define STAT_H

#define T_DIR     1   // Directory
#define T_FILE    2   // File
#define T_DEVICE  3   // Device

#define STAT_MAX_NAME 255

struct stat {
  char name[STAT_MAX_NAME + 1];
  int dev;     // File system's disk device
  uint64 ino;  // Inode number (cluster number for FAT32)
  short type;  // Type of file
  uint64 size; // Size of file in bytes
};

#endif
