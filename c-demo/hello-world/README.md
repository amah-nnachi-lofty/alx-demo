
# Steps to compile and run C program

root@Ubuntu22:~alx-demo/c-demo/hello-world# su root // returns to root directory

root@Ubuntu22:~alx-demo/c-demo/cd hello-world // change to directory from where you want to safe the file

root@Ubuntu22:~alx-demo/c-demo/hello-world# vi hello.c // will automatically create the file and open it in the vi editor

root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello.c // the gcc compiler compiles the program and performs all the compilation processes of preprocessor, compilation, assembly and linking

root@Ubuntu22:~alx-demo/c-demo/hello-world# ls a.out hello.c // a.out is the executable file,while hello.c is the source file

root@Ubuntu22:~alx-demo/c-demo/hello-world# ./a.out // to run the executable program root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello.c -o hello-program // compile and output/safe the executable program into hello-program file

root@Ubuntu22:~alx-demo/c-demo/hello-world# ls hello-program hello.c

root@Ubuntu22:~alx-demo/c-demo/hello-world# gcc hello-program // run the hello-program Hello World

// Alternatively, we could use the make command to generate the executable file name with resemblance of the name of the source file root@Ubuntu22:~alx-demo/c-demo/hello-world# make hello cc hello.c -o hello.c

root@Ubuntu22:~alx-demo/c-demo/hello-world# ./hello Hello World


# To reconcile edited file from github to the ones in terminal

From https://github.com/amah-nnachi-lofty/alx-demo
 * [new branch]      main       -> origin/main
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint: 
hint:   git config pull.rebase false  # merge (the default strategy)
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint: 
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation.

