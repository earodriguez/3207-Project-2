
//headers
int main (int argc, char *argv[], char **envp);
int init();
void mysh_prompt();

int mysh_cd(char *args[]);
void mysh_clr();
int mysh_dir();
int mysh_environ();
int mysh_echo(char *args[]);
int mysh_help();
int mysh_pause();
void mysh_quit();

static pid_t MYSH_PID;
static pid_t MYSH_PGID;
static int MYSH_INTRACTV
