# ps1loadavg
A simple C program to return the loadavg for customizing the PS1 prompt

# Usage

Copy the program, PS1Load to your bin folder.

Test if works, typing on prompt:

```bash
$ PS1Load
```

You will see something like that:

```bash
0.22↓user@machine
```

Now you can edit you ~/.bashrc, editing the PS1 variable.

For example, this is how I edit my PS1:

```bash
PS1='\[\e[0;90m\]\342\224\214\342\224\200\[\e[0;90m\][\[\e[0;92m\]\u\[\e[0;92m\]@\[\e[0;92m\]\h\[\e[0;90m\]\[\e[0;90m\] \[\e[0;90m\]\[\e[0;94m\]\w\[\e[0;90m\]\[\e[0;90m\]  \[\e[0;91m\]$(PS1Load)\[\e[0;90m\]\[\e[0;90m\]  \[\e[0;90m\]\t\[\e[0;90m\]]\n\[\e[0;90m\]\342\224\224\342\224\200\342\224\200\342\225\274\[\e[0;90m\] \$ \[\e[0m\]'
```
