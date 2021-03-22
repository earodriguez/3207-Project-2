//Erik Rodriguez
//Main file

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "utility.h"

int main (int argc, char *argv[], char **envp){

    char line[];
    char * toks[]
    int tokSize;

    pid = -1;

}

/*
Processes initialization, differentiates between interactive mode and
batch/txt file reading mode.
*/
int init(){

}

void mysh_prompt(){
    char PWD[PATH_MAX];
    do {
        if (getcwd(PWD, sizeof(PWD)) != NULL){
            printf("%s/myshell> ", PWD);
        }
        else{
            perror("Could not get current directory");
        }
    }
}

int mysh_cd(char *args[]){
    if (args[1] == NULL){
        fprintf(stderr, "mysh: expected argument to \"cd\"\n");
    }
    else {
        if (chdir(args[1]) != 0){
            perror("mysh");
        }
    }
    return 1;
}
void mysh_clr(){
    system("clear");
}
int mysh_dir(){
}
int mysh_environ(){
}
int mysh_echo(char *args[]){
}
int mysh_help(){
}
int mysh_pause(){
}
void mysh_quit(){
exit(0);
}




























