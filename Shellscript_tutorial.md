### SHELL SCRIPTING TUTORIAL
##### by Ayesha Anwar
1. ###### **The Shell:**
Shell is a textual interface at which we give commands to perform desired task. All platforms have shell in one form or another and many of them have several shells for you to choose from. They all may vary in detail from each other but their syntax is not so different . 

Shell that we will be using is **Bourne Again Shell** or **bash** for short. This is the most common used shell.   
###### Common Use Cases:

- Task Automation — Automate repetitive tasks using shell scripts.

- File and Process Management — Create, modify, and manage files and processes.

- System Administration — allows you to install softwares  and troubleshoot system resources.

-  Development Operations — Compile code, manage environments, and handle version control like git . 
On shell the word **directory** is used for the word **folder** we commonly use and on shell everything is considered as file.
2. ###### **Some Basic Commands:**
In order to check which shell you are using you just type the following command and it will tell you which shell you are using
```bash
    echo "$SHELLL"
    /bin/bash
```
Single and double quotation marks have a great significance in shell scripting because if we type the above command in single quotes it will simply print the command that is in written in quotes but if we write that in double quotes then it will do that specific task which is supposed to do as you can see right below:
```bash
    echo '$SHELL'
    $SHELL
```
So that means you can print anything by using the keyword **echo**.
Now if you want to know what's inside the directory you are in right now :
```bash
    ls         # will simply list the files inside that directory
    ls -l      # will give some extra info regarding permisssions of that file 
    ls -a      # will list all files including hidden files
```
You can explore one command in detail by writing :
**[command] --help
man [command]**. For example:
```bash
    ls --help
    man ls
```
It will give you all detail regarding options and flags of that specific command and how does that command work.
You can make a directory by using the following command:
```bash
    mkdir "my directory"
```
If your directory name is more than one word make sure to put that name in double quotes otherwise two directories will be created one of them will be  **my** and the other one will be **directory**.
###### **Deleting the directory:**
```bash
    rmdir "my directory"
```
It will only remove directory if directory contains no contents .
In order to remove directory which contains various files or other contents you can use :
```bash
    rm -r  "my directory"
```
for further help you are always welcome to use man or --help command.
###### **Current directory:**
I f ypu want to know in which directory you are currently in type :
```bash
    pwd
```
###### **Changing directory:**
You can change directory like this :
**cd [directory name]**
```bash
    cd "my directory"
```
You can toggle between two directories using following command:
```bash
    cd -
```
**.** indicates current directory
**..** indicates parent of current directory
In this way you can give relative paths to the cd command in order to move between directories.
###### **Creating files:**
You can create files using following command:

```bash
    touch foo
```
Keep in mind the significance of using single quotes and double quotes. You can create multiple files by using one line :
```bash
    touch foo1 foo2 foo3
```
###### **Moving & renaming directory:**
You can rename or move files like this :
```bash
    mv foo.sh bar.sh
```
###### **Creating Variables:**
We can create variables and store values in it and then can accces thos values by using the dollar sign:
```bash
    foo=bar
    echo $foo  #bar gets printed
```
Make sure not to add any kind of spaces like this :
```bash
    foo = bar #you'll get error 
```
Shell handles spaces sensitively.
###### **Other functionalities:**
There are many other things that you can do here just like the programming language you can write fuctions, implement loops ,conditionals to increase your task effitiency and automate tasks like just look at this example :
```bash
    mcd(){
        mkdir -p "$1"
        cd "$1"
    }
```
In above example i automated a very small task like i am creatinga directory and then changing my current directory to that directory i am creating. **$1** uses the first argument passed to the function as directory name. 
###### **Special Variables:**
Bash uses a variety of special variables to refer to arguments, error codes, and other relevant variables. Some of them are given below :
| Variables | Description |
|:---------|:--------:|
| $0       | name of script   | 
| $$      | Process identification number for current script   | 
| $@       | all the argumens   | 
| $#       |     Number of arguments     |
| $?       | Error code of previous command         |

Error code helps you to verify if the previous command went well if it goes without any error it gives us **0** otherwise it gives us **1** .
Shell scripting is a powerful way to automate tasks, manage files, and control systems efficiently.
###### **Special Variables:**
With practice, you can turn simple commands into sophisticated scripts that make your work faster and smarter.