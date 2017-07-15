#ifndef DISKS_MANAGER_H
#define DISKS_MANAGER_H

#define INIT_FAILURE -1

typedef enum { /* Files type the cloud supports */
    DIR,
    VID,
    PIC,
    DOC
} FileType;

typedef struct fileinfo_t { /* File information */
    FileType file_type;
    char *name;
    char *dir_hierarchy;
} FileInfo;

/* Initialization */
int init_disks_manager(void);

/* Getters */
FileInfo* get_base_level_file_info(void);
FileInfo* get_next_level_file_info(FileInfo *);

/* Setters */


#endif