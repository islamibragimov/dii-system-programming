#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

char *folder_file(struct dirent *drp);
char *folder_file(struct dirent *drp){
    if (drp -> d_type == 4){
        return "Folder";
    } else {
        return "file";
    }

}

int main(int argc, char *argv[]){
    DIR *dp;
    struct dirent *dirp;

    if (argc != 2){
        printf("usage: ls directory_name");
        exit(1);
    }
    if ((dp = opendir(argv[1]))==NULL){
        printf("can't open %s", argv[1]);
        exit(1);
    }
    while ((dirp = readdir(dp)) != NULL){
        printf("%s ---> %s\n", dirp->d_name, folder_file(dirp));   
    }
    closedir(dp);
    return 0;

}