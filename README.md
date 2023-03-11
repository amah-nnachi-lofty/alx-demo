# alx-demo

# Steps to compile and run C program
root@Ubuntu22:~alx-demo/c-demo/hello-world# su root     // returns to root directory

root@Ubuntu22:~alx-demo/c-demo/cd hello-world // change to directory from where you want to safe the file

root@Ubuntu22:~alx-demo/c-demo/hello-world# vi hello.c    // will automatically create the file and open it in the vi editor

root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello.c    // the gcc compiler compiles the program and performs all the compilation processes of preprocessor, compilation, assembly and linking

root@Ubuntu22:~alx-demo/c-demo/hello-world# ls
a.out   hello.c        // a.out is the executable file,while hello.c is the source file 

root@Ubuntu22:~alx-demo/c-demo/hello-world# ./a.out  // to run the executable program
root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello.c -o hello-program  // compile and output/safe the executable program into hello-program file

root@Ubuntu22:~alx-demo/c-demo/hello-world# ls
hello-program     hello.c

root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello-program  // run the hello-program
Hello World

// Alternatively, we could use the make command to generate the executable file name with resemblance of the name of the source file
root@Ubuntu22:~alx-demo/c-demo/hello-world# make hello
cc hello.c -o hello.c

root@Ubuntu22:~alx-demo/c-demo/hello-world# ./hello
Hello World

# To clone run program on git bash from a local machine
- LOFTDOT@Gulu MINGW64 ~/Documents    // type cd ~ to return to the root directory
- git clone the remote repositrory or open the repository on the local machine


# To run an instance of a machine in another machine
- Create an ssh, if it is not provided. visit: https://git-scm.com/book/en/v2/Git-on-the-Server-Generating-Your-SSH-Public-Key or https://www.targetprocess.com/guide/integrations/integrations-source-control/issue-ssh-key-pair-from-git-bash-use-in-targetprocess/
- Navigate to the root directory of the new machine where you intend to restart an instance
- Copy the ssh credentials from the old machine and paste into the new machine, e.g ssh dhgy@reeq5689744dec.898.lofttcod.online
- Enter the password when requested
