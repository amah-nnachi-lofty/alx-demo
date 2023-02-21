# alx-demo

# Steps to run C program

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
