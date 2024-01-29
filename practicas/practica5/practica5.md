<style>
    .left{text-align: left;}
    .right{text-align: right;}
    .center{text-align: center;}
    .just{text-align: justify;}
    .title{font-size: 40px;}
    .subtitle{font-size: 30px;}
</style>

# Practica 4

<div class="center title">
Instituto Politecnico Nacional
<br>
Escuela Superior de Computo
</div>
<br><br>
<div class="center subtitle">
Sistemas operativos
</div>
<br><br>
<div class="center subtitle">
Administracion de procesos
</div>
<br><br>
<div class="center">
Etnan Jezreel Lopez Torres <br>
Gonzaga Martínez José Alberto <br>
Sebastian Absalon Cortes<br>
</div>

<div class="just">
<br><br><br><br>

# Marco teorico

El proceso es la entidad que el sistema operativo utiliza para controlar el uso de los recursos del sistema. Las hebras pueden controlar el consumo de tiempo del procesador pero la mayoría de herramientas de gestión del sistema siguen necesitando que el usuario haga referencia al proceso en el que se ejecuta una hebra, en lugar de la propia hebra.

Hay herramientas disponibles para:

Observar la creación, la cancelación, la identidad y el consumo de recursos de los procesos.
- El mandato ps se utiliza para informar de los ID de procesos, los usuarios, el consumo de tiempo de CPU y otros atributos.
- El mandato who -u informa del ID de procesos de shell de los usuarios que han iniciado la sesión.
- El mandato svmon se utiliza para informar del consumo de memoria real de los procesos.
- El mecanismo del mandato acct graba registros cuando termina el proceso que resume el uso de recursos del proceso.
- Controlar el nivel de prioridad en el contiende un proceso para la CPU.
- El mandato nice hace que se ejecute un mandato con la prioridad de proceso especificada.
- El mandato renice cambia la prioridad de un proceso determinado.
- Terminar los procesos que están fuera de control.
- El mandato kill envía una señal de terminación a uno o varios procesos.
- Supervisión de procesos
- Puede gestionar procesos como administrador del sistema.
- Modificación de la prioridad de procesos
- Básicamente, si ha identificado un proceso que utiliza demasiado tiempo de CPU, puede reducir su prioridad efectiva aumentando su valor nice con el mandato renice.
- Terminación de procesos
- Normalmente, se utiliza el mandato kill para finalizar un proceso.
- Vinculación o desvinculación de un proceso
- Puede vincular un proceso a un procesador o desvincular un proceso vinculado previamente.

# Seccion de linux

## Utilizacion de comandos

PS(1)                            User Commands                           PS(1)

NAME
       ps - report a snapshot of the current processes.

SYNOPSIS
       ps [options]

DESCRIPTION
ps displays information about a selection of the active processes.  If
you want a repetitive update of the selection and the displayed
information, use top instead.

This version of ps accepts several kinds of options:

- UNIX options, which may be grouped and must be preceded by a dash.
- BSD options, which may be grouped and must not be used with a dash.
- GNU long options, which are preceded by two dashes.

Options of different types may be freely mixed, but conflicts can
appear.  There are some synonymous options, which are functionally
identical, due to the many standards and ps implementations that this
ps is compatible with.

![](https://lh3.googleusercontent.com/fife/AK0iWDyxoEKqyiKTdgj7S7VUaDyT-0QT0Cl8--Ghf-iKErCyPWjwITgTOFXWKYObqtNUzGAJbSFrHIGiDj-sRUDuuBayJTIS5nSZODbH5lGKp41h29IPVGmbkPl7IjCpfrJGcoPMsHE-p8c4K2dK3ZScYe5Or1_xrw_olMrQVTJWnufv7O24OPi67QNrua4OSK8c2ATapLqcyr5i5588ZPi6iDbw_A9CUseGTLq9sGXBzA4TPOi4fguVQ5JupfDwYwjGCtf2ww36wPchci-G-SZ8cKF0tvQDPZtPQ_4wtqwYZW6HC8OAp2bRKibZeuUWqUsKRj_yvXWr24DQq3H55S3qconm_uLCOkbs0aJcOqn-_HDi8NeyS1udiXOmypPJ1M1T76ZHwPDhA9tTGPrXyCK4kgaXQ2v7fqfotx1EBf1PSMWv4MbVLcvntEl6wZfCAtw-dD8T0Gq1JN4QaD3-0EhJAaQqmyQS7LJybz01NwZvHUYQOS07y1pAqIOwP3ECvmpPQF6Nq5NzSucZKZPanZEdRlQxLPCLKT4dqmMkpa51BPVrX6Lnioo4Wf3Yn3VjrxnyeVwRsIpVhojmQDWTL4uq6uMAogstYh6o1RqYlxunKvKAagCkm1TKTWgO4lJEX7lBFR9QIRdDohYaS4iDSflc2p2qV0xkY_dX5ip_YaiNxTjulD_8PZpyAjxsBSpruk0h6VVa_a1iS2ZgwqFzKOzAT54dDucU6vvWKoedFf96ASBeS3ccyvyaZdK-Z8ku8LB3rx2gZIuUbWxcBBcJ8qeCXxLt9_kWlNBbJ1HWdDmv0Mq1elwHts1U5N6YkrYCj5tkZMjMHBzBXZPRTxk0ESAswsiAesqedY34ptLEpbjiNvhSQpznTz5uf1mzNqeXAdE2mj-35j5KleO1HKj3_VUZ18So322cstySMtSvL9W8UPfDfwmbFgIJ4AsmxTKYghkINKVu7pWQljL74UJIg3kCx1oyDbpwAr31ptnfRNXZmdHABcC8DTX2xgtjYmnr1hMvlKSCP_wyq5QcnV59UMH8Rbji7vGvOMSxmFDC7pE2j3l1OjqS6aRWMX2ffdP5FeirCczi1WI5n7otQy5Ld81SHnqF7tG_Ax2r9XvhOS7BunUm2vfk-WEdfD4IL7001VDG7PTMBO90OnvgvQJy1whvega7mWLJa_RBO6S_3rgO0A8O77NNcwKmdBQAvhPaew5MUK6x3w7ZoamN-YXYtcSdik98PzYewUbXW9aIRgDLK76n7xU6XgPFf_WyjeCDiB-dn9yvEV3ks5y-QEPmANllY88SdgrJNvQb9B-JaHP47PylYXbpLeO5MK_JZ6Zxg6gZvUlWQ5qe5gNMci63dwCB6KUItdgtLPKh6r_y1FqHtPE5HY4VsCoDp99oMoGufeEOTNaLqD-IUITDYWILYjQeUgpPETJIpD9j0VD87h83-eE9b6f3FSAo2XCBCkJnxhfh_MmQcAKypeM-HK9fbS-tj9K-5KXcNSq1y6gIZmBdW_ip5-qCV2lenBRtWOBXazrD9dGy2vM-JaXV2QGKe3ZCQa4YrANk0asDxtjaPNJ914Qt2juu=w810-h663)

### Opcion -fea

![](https://lh3.googleusercontent.com/fife/AK0iWDxyfP1Aq7rxC5rvaCJBd_7fnmnKcW_sP7FssgL_eav38I7TmRqEhWnbAnUpU9kW1vIxlO1zMGweCVmAPK6lxndx3pOq-JVDLR_Lv1Cagy2nNT9fr2vKfYjLoUW4MHDWxtqw_ue9DG3ZrzuArbt63fd6YubPHoD6ZgcdFMD2bGUVr6ie6wsm2ZmPPiuq_PuXspm0Ea6aTvT42q8-eDaVQu5xJA5rFDffuGruGY7exIdz2q1jcWRJhO6L-e3jTvJPSknMMDY8ddIcoFUOm6zOAd06NuPOvXcajiCeX0GA8oAMFz8zhfvqXD3ejTOQvm83mGYYNd0KpzRhgqSsd8AqLd-osLGRSrwmF6M_z2hxAVDNDs-k_1JbBWjycGNqOAf3_EvXd_4Gwgns_wRHUL29rhuPI_mQcyo7xJOArx_tLtdCxLyAc1fpRMy0SN4VhUQQAayjP5vTevp2hAe1i_e3bmVQBBGmAXzvhNwZwDmQlmTKZebHwJiirkUEG8ZATtnPlGac7zn8upoWUfqs5QsfmJ_mZyYWFrorecVE2cwcYsrr9cxF5IRS63XmpBnzxQvxE0tLuODJhIpshJW9HFG63Kl79H0EvC4JZeV1z6zxrX8lMg3dy9J9UmPMtSsV7foeGuJ8kwa9zSroKdQ0innYzNprTYVgtkK97X2l6wN2l_bHwKJejmtR_bFvt8KMChL5r88cIC9it2CdPH2SQbcjCeZdrvSpmbLhHDxdS4K3ELwOyVgWRXWVdzz-2_izG9F_YSRXrae753dzf9_zZBaUi4Z7DvD0KnJOLiNmPt8lJcBsvPYiiPoHfFzIgS87jbFndYycC6mBIMBFUw5-stZl5srIHq458I5R21U6xddRTGNnXrwn2TgVIagr3_sbptAXa2GzuzdqqF3ygnudTUe4fqWzRV39n3gjzm2jpW6jzCg3qA_X4aaimzLeotxjf5f6EbQu4GOU6GvGy6IZINChSzRv9uuWJqISsoku9bbNgkc-4-pfMS7MZCoIteYdvac_fYbeXTGZbXHAmWVdP-hdMoKOqGRPQWJpoRfHGyZzZZvi4S5qnbToqWQc80LOyuP8lfV7vX43pfmIRRKcbPuGK3eO7pJdxxFlfj2VDizdXCXY-kognGGOny8K32utle993i1wGVOs1l-Ii9L2HmJZVKJajndO_IxaMYUSmLx3jqOi3wPOhhBhHWLFYUEJO8dZSsFF3fU6ExLcpx0fzhjuAu3Lvzy6mAT1XdkvuYtYPdXwAfLaw305mJwISsu6hw222roVlKL5eRgO2NjhNB-a3RyH8-10DtqUCgREBw6Az625cgUt158akIzAp4zwScVjZvpiIEbHDzrOryARR92s4pzRso4TUa-g52zbYQsA1ffyjH7noEpRbzoMcO8bJsRjXZ-M3hC0DDlt66Z2USY7DCKUIZwyavuHoD4vsQFnb4DmXlZcmKQjfYSleeV72VDEu8PAtVK9rOpkBbkH0iAKS-U5BuGnRPwaeT4TBiuKQOsBvcHVHboLX65Vk2xvpoW_OqNaF9oPoSCFxZ6ZzBq1ssMmVgKaa7B8YoyAEhAssIBI8Ff3=w810-h663)

## psree

pstree [-a, --arguments] [-c, --compact-not] [-C, --color attr] [-g, --show-pgids]
       [-h, --highlight-all, -H pid, --highlight-pid pid] [-l, --long] [-n, --numeric-sort]
       [-N, --ns-sort ns] [-p, --show-pids] [-s, --show-parents] [-S, --ns-changes]
       [-t, --thread-names] [-T, --hide-threads] [-u, --uid-changes] [-Z, --security-context]
       [-A, --ascii, -G, --vt100, -U, --unicode] [pid, user]
       pstree -V, --version


DESCRIPTION <br>
    pstree shows running processes as a tree.  The tree is rooted at either
    pid  or  init  if  pid  is  omitted.   If a user name is specified, all
    process trees rooted at processes owned by that user are shown.

    pstree visually merges identical branches by  putting  them  in  square
    brackets and prefixing them with the repetition count, e.g.

        init-+-getty
            |-getty
            |-getty
            `-getty

    becomes

        init---4*[getty]

    Child  threads  of a process are found under the parent process and are
    shown with the process name in curly braces, e.g.

        icecast2---13*[{icecast2}]

    If pstree is called as pstree.x11 then it will prompt the user  at  the
    end of the line to press return and will not return until that has hap‐
    pened.  This is useful for when pstree is run in a xterminal.

    Certain kernel or mount parameters, such  as  the  hidepid  option  for
    procfs,  will  hide information for some processes. In these situations
    pstree will attempt to build the tree without this information, showing
    process names as question marks.


![](https://lh3.googleusercontent.com/fife/AK0iWDzamWV8NldvEolV56XqxM3BG5Uxyq8E7UvoMCriTJPUJcp_diWb8BF-dE5BRlHZKjuefLJuZez2Qfg-jy55T9VscwDvBo8EkFpu7bfpfSY8z-L_o3Eb-OycznDnKsU-3gjwuiNZ9nDGGI8UR6tcJw0ioO23c9tHXUGxTvFlWELHcJ3KFeUfTAnlXUrPKVNEcPxGiloHk_f8WQkQIPXgUzzrMLiQ0IHU09ofcp9q7kxOqkpJngh7iN38j9BwrtMhgPFFM5XaGsmUQibVnnuci3B76J2144p5NfRNG6U-t_z6hTI_xhgCYED2dYw4_fRoJFvXKUrJfvDaq56e7rC1bk5Sfzu6ylq-W1E95uh3wLumDHzJwuvOu0V9wvsOCdp39_yn5prNbXvh5lzv9zyaBzcl4YrtqKI4M5YvYhRzUAmZYez87Vj8ZovcH_Nx071fTxJOyvJK1NI48ThWdRDR3WzeVYhg1nN6nHnz9_o1DsGIsxAc3PiVe3llrZ-KBXE0YcvkkTrvgIr8hi1zbCZ37Zg4h_sVXvFcrJ4KPFQSmAU1op6-VUQU7M2w5ShCm3RPHdB7x_8Lr2LoHlkqqP5hw7Ix7_4Nm1WNc71BuJEHVoedBEzZMaUCQRM06RDI4YN1__Cyqu5gBo1Br3rh4s_oI95SmA4-Qn1ogldqepZZHajWXaB2Ok7Y8b4uXXNGakzEJ5ZCzDXZyjUfziN-vm9b-MqoFK1aOPX5EgZbCODL-_x2JEaozLmxlQBy_QSHGkXaly4zo6Jno3gxn20EhEQegiEbi4gz1D-y4WYujM2wgyIxja7oJj74yLj6Q3zfFaqmFafOCC2cnxIViLgksDOPqutHp7KIlVAnlBYnVZt4RU4Sgq7aBvEQGnHP3cQiXTVR1Zf_E555pm7NIs6Vv1_env1AJpeZfNpGnUSg1fGDE2ECLWuJu5NVn6NnbMa8v4ta1igFGgxNyFRzoEbrNAwzuWmDzvlEHpmQR8HuY8ju7WG7qwNjB19SqsiyPiOJxrHWrsA3sxNY-Gj5dF6WjSZ-QLWNXWHyEY8uMEoH-CQN4nX4HvhmpZYE7pM7eTxPD3FOZEcldyCqBvtSY2NB5tvc2IoH3azDC9uidosZfoPXOxOo_n_dvak2pouQRRX4MxsIF6XnYcRtujCwCK50JdFaLQGLHT9MgRgZM1IYXymSn5_OlnkppQGbUe4eFqEy3ZBrGHHnrMZnMlamjD-eBDyRzDaIhV6mzHjPw6PuGK0oUXZkYmXdzLlSTvnAbaenXYQyCswemtqBKHhINTuYRkd33Sw9UYpL8hBSEtomDuyvkSsyxKhc_n2p9k7HFt8FeT3StcHWe0b8XNPQJW2O5LtiTRE6hnWtQbUhr7Pj8GR4limwocjwG6KSfnpZhNnZ3CABkEc-dzrzrb_j02wZdAiGhSbyI5aUw7_LBeHUYiA5ylzd0mkPYOijYkroCAXzOwVWEB3bFoh9CFVhcOmPwBHqCMoJnVkI4xrIG6uXHsXcLht2HIGHAVTsgbIO-5ZGMT3g5G0NWb8aPidlFA8sTzL_nD4hiuAopjt87bXA1cBxQ4dbPTmS=w810-h663)

## fork()

SYNOPSIS <br>
       #include <sys/types.h>
       #include <unistd.h>

       pid_t fork(void);

DESCRIPTION <br>
       fork()  creates  a  new process by duplicating the calling process.  The new process is
       referred to as the child process.  The calling process is referred  to  as  the  parent
       process.

       The child process and the parent process run in separate memory spaces.  At the time of
       fork() both memory  spaces  have  the  same  content.   Memory  writes,  file  mappings
       (mmap(2)),  and  unmappings (munmap(2)) performed by one of the processes do not affect
       the other.

       The child process is an exact duplicate of the parent process except for the  following
       points:

       *  The  child  has its own unique process ID, and this PID does not match the ID of any
          existing process group (setpgid(2)) or session.

       *  The child's parent process ID is the same as the parent's process ID.
        *  The child does not inherit its parent's memory locks (mlock(2), mlockall(2)).

       *  Process resource utilizations (getrusage(2)) and CPU time  counters  (times(2))  are
          reset to zero in the child.

       *  The child's set of pending signals is initially empty (sigpending(2)).

       *  The child does not inherit semaphore adjustments from its parent (semop(2)).

       *  The  child  does  not  inherit  process-associated record locks from its parent (fc‐
          ntl(2)).  (On the other hand, it does inherit fcntl(2) open file  description  locks
          and flock(2) locks from its parent.)

       *  The  child  does  not  inherit  timers  from  its  parent  (setitimer(2),  alarm(2),
          timer_create(2)).

       *  The child does not inherit outstanding asynchronous I/O operations from  its  parent
          (aio_read(3),  aio_write(3)), nor does it inherit any asynchronous I/O contexts from
          its parent (see io_setup(2)).

       The process attributes in the preceding list are all specified in POSIX.1.  The  parent
       and child also differ with respect to the following Linux-specific process attributes:

       *  The  child does not inherit directory change notifications (dnotify) from its parent
          (see the description of F_NOTIFY in fcntl(2)).

       *  The prctl(2) PR_SET_PDEATHSIG setting is reset so that the child does not receive  a
          signal when its parent terminates.

       *  The default timer slack value is set to the parent's current timer slack value.  See
          the description of PR_SET_TIMERSLACK in prctl(2).

       *  Memory mappings that have been marked with the madvise(2) MADV_DONTFORK flag are not
          inherited across a fork().
        *  Memory  in  address ranges that have been marked with the madvise(2) MADV_WIPEONFORK
          flag is zeroed in the child after a fork().  (The MADV_WIPEONFORK setting remains in
          place for those address ranges in the child.)

       *  The termination signal of the child is always SIGCHLD (see clone(2)).

       *  The port access permission bits set by ioperm(2) are not inherited by the child; the
          child must turn on any bits that it requires using ioperm(2).

       Note the following further points:

       *  The child process is created with a single thread—the one that called  fork().   The
          entire virtual address space of the parent is replicated in the child, including the
          states of mutexes, condition variables, and  other  pthreads  objects;  the  use  of
          pthread_atfork(3) may be helpful for dealing with problems that this can cause.

       *  After a fork() in a multithreaded program, the child can safely call only async-sig‐
          nal-safe functions (see signal-safety(7)) until such time as it calls execve(2).

       *  The child inherits copies of the parent's set of open file descriptors.   Each  file
          descriptor  in  the  child refers to the same open file description (see open(2)) as
          the corresponding file descriptor in the parent.  This means that the two  file  de‐
          scriptors  share  open  file  status  flags,  file offset, and signal-driven I/O at‐
          tributes (see the description of F_SETOWN and F_SETSIG in fcntl(2)).

       *  The child inherits copies of the parent's set of open message queue descriptors (see
          mq_overview(7)).   Each file descriptor in the child refers to the same open message
          queue description as the corresponding file descriptor in the  parent.   This  means
          that the two file descriptors share the same flags (mq_flags).

       *  The  child  inherits  copies  of  the  parent's  set  of open directory streams (see
          opendir(3)).  POSIX.1 says that the corresponding directory streams  in  the  parent
          and child may share the directory stream positioning; on Linux/glibc they do not.

## execv()

SYNOPSIS <br>
       #include <unistd.h>

       extern char **environ;

       int execl(const char *pathname, const char *arg, ...
                       /* (char  *) NULL */);
       int execlp(const char *file, const char *arg, ...
                       /* (char  *) NULL */);
       int execle(const char *pathname, const char *arg, ...
                       /*, (char *) NULL, char *const envp[] */);
       int execv(const char *pathname, char *const argv[]);
       int execvp(const char *file, char *const argv[]);
       int execvpe(const char *file, char *const argv[],
                       char *const envp[]);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       execvpe(): _GNU_SOURCE

DESCRIPTION <br>
       The  exec()  family  of functions replaces the current process image with a new process
       image.  The functions described in this manual page are layered on  top  of  execve(2).
       (See  the  manual  page  for execve(2) for further details about the replacement of the
       current process image.)

       The initial argument for these functions is the name of a file that is to be executed.

       The functions can be grouped based on the letters following the "exec" prefix.

## getpid

SYNOPSIS<br>
       #include <sys/types.h>
       #include <unistd.h>

       pid_t getpid(void);
       pid_t getppid(void);

DESCRIPTION<br>
       getpid()  returns  the process ID (PID) of the calling process.  (This is often used by
       routines that generate unique temporary filenames.)

       getppid() returns the process ID of the parent of the calling process.   This  will  be
       either  the  ID  of  the  process  that  created this process using fork(), or, if that
       process has already terminated, the ID of the process to which this  process  has  been
       reparented   (either  init(1)  or  a  "subreaper"  process  defined  via  the  prctl(2)
       PR_SET_CHILD_SUBREAPER operation).

## getppid
SYNOPSIS <br>
       #include <sys/types.h>
       #include <unistd.h>

       pid_t getpid(void);
       pid_t getppid(void);

DESCRIPTION <br>
       getpid()  returns  the process ID (PID) of the calling process.  (This is often used by
       routines that generate unique temporary filenames.)

       getppid() returns the process ID of the parent of the calling process.   This  will  be
       either  the  ID  of  the  process  that  created this process using fork(), or, if that
       process has already terminated, the ID of the process to which this  process  has  been
       reparented   (either  init(1)  or  a  "subreaper"  process  defined  via  the  prctl(2)
       PR_SET_CHILD_SUBREAPER operation).

## waitpid

SYNOPSIS <br>
       #include <sys/types.h>
       #include <sys/wait.h>

       pid_t wait(int *wstatus);

       pid_t waitpid(pid_t pid, int *wstatus, int options);

       int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options);
                       /* This is the glibc and POSIX interface; see
                          NOTES for information on the raw system call. */

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       waitid():
           Since glibc 2.26: _XOPEN_SOURCE >= 500 ||
               _POSIX_C_SOURCE >= 200809L
           Glibc 2.25 and earlier:
               _XOPEN_SOURCE
                   || /* Since glibc 2.12: */ _POSIX_C_SOURCE >= 200809L
                   || /* Glibc versions <= 2.19: */ _BSD_SOURCE

DESCRIPTION <br>
       All  of these system calls are used to wait for state changes in a child of the calling
       process, and obtain information about the child  whose  state  has  changed.   A  state
       change is considered to be: the child terminated; the child was stopped by a signal; or
       the child was resumed by a signal.  In the case of a  terminated  child,  performing  a
       wait allows the system to release the resources associated with the child; if a wait is
       not performed, then the terminated child remains in a "zombie" state (see NOTES below).

       If a child has already changed state, then these calls return immediately.   Otherwise,
       they  block  until either a child changes state or a signal handler interrupts the call
       (assuming that system calls are not automatically restarted using the  SA_RESTART  flag
       of  sigaction(2)).   In the remainder of this page, a child whose state has changed and
       which has not yet been waited upon by one of these system calls is termed waitable.

## wait

SYNOPSIS <br>
       #include <sys/types.h>
       #include <sys/wait.h>

       pid_t wait(int *wstatus);

       pid_t waitpid(pid_t pid, int *wstatus, int options);

       int waitid(idtype_t idtype, id_t id, siginfo_t *infop, int options);
                       /* This is the glibc and POSIX interface; see
                          NOTES for information on the raw system call. */

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       waitid():
           Since glibc 2.26: _XOPEN_SOURCE >= 500 ||
               _POSIX_C_SOURCE >= 200809L
           Glibc 2.25 and earlier:
               _XOPEN_SOURCE
                   || /* Since glibc 2.12: */ _POSIX_C_SOURCE >= 200809L
                   || /* Glibc versions <= 2.19: */ _BSD_SOURCE

DESCRIPTION <br>
       All  of these system calls are used to wait for state changes in a child of the calling
       process, and obtain information about the child  whose  state  has  changed.   A  state
       change is considered to be: the child terminated; the child was stopped by a signal; or
       the child was resumed by a signal.  In the case of a  terminated  child,  performing  a
       wait allows the system to release the resources associated with the child; if a wait is
       not performed, then the terminated child remains in a "zombie" state (see NOTES below).

       If a child has already changed state, then these calls return immediately.   Otherwise,
       they  block  until either a child changes state or a signal handler interrupts the call
       (assuming that system calls are not automatically restarted using the  SA_RESTART  flag
       of  sigaction(2)).   In the remainder of this page, a child whose state has changed and
       which has not yet been waited upon by one of these system calls is termed waitable.

## Codigo 1
```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int id_proc;
    id_proc=fork();
    if (id_proc == 0){
        printf("Soy el proceso hijo\n");
        exit(0);
    }else{
        printf("Soy el proceso padre\n");
        exit(0);
    }
}
```

## Codigo 2

```c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
    int id_proc;
    id_proc=fork();
    if (id_proc == 0)
    {
        printf("Soy el proceso hijo\n");
    }else{
        printf("Soy el proceso padre\n");
    }
    printf("Mensaje en ambos\n");
    exit(0);
}
```

![](https://lh3.googleusercontent.com/fife/AK0iWDy1yseASjmowyQrBweaWT_WySewt0aEBXtmWYSlhD-S2nfHybZiCLaXf1STnsl2nhgdwWv7Pn4E7wqgE_zyKGlhzvi9-s0Vu6BBM5Co9Ts1OSnditJn86n12yyISVy2e-WqkaAdh-YgdZ2xSRzwlO7tVFPzR9cuZhKI4YVmQWYJLUgBLALGMapjXa7h3WuqsClvaoYj0av6JVubDsgc1m8A4Vt9D5TrEIIatTBTLwtPPk95WKIGcfVtyDpuCQK9dqEl-EkwD9aK9AY96O3qKm_y8ErMNZIz2ePexhw9-KzAV46mbB5GQUYEsr0pCgb6O4gE3JTa9u3xt03jZLnFKclmfME6dNt9KS3TYmbIeU4F112mWK6t8hDlBCDvIWNUZ7J6ZyVDLk-ocRGlh8NqZxOFtAODCnqOHlxgiPgCzyhsb9KTT5sNKf2VknAcLytB3gPOAt5agpjRhvOdWq9ucEFEn_QCbNzZ9okaYeousm5WCpVhMX0QTr-rp2bUvF19EiLoElqrMmU4wxqDZY3nnX0FIg0QZ7RhdYEoRAR5xFKmuqvbOSKBJcnhjZVISxSDZOF4J7C9Oo3Bn5e1t2rHY_dIunE_EsNTChuKNoyrN9pljLAKec9OpH0rba8r90utGb53Uvw7O1TXizsxF36bNIFCuBktVf6wzZFFE0voRSJJS1xZP5A9_HZo2AmzgwR20S4hkSurALdsGte_kKm3uCXbrJ9K-kVahdE1GX4LaiKSDbG0V5fOzzQf7_fCziB4rmIr69oUm8eftCYs-j-JMnLpTSF-kvOepqcqZoHHP3pwTR6UV6pwSHWGC35lSZMAhTby9-nM88RRvTJXSE4AmQ7okXm-Rmez_P_Xenn4uXOqBXWbtxaO2tJCc6-oixxKw4lVxoqkDDr5jwShnC-bv59ffW_3nMcjGzoKkFCxIchLAcIXY0oGbYsOZlWT0CscYxdyz_50SQHjdTPkZ-m23NoxcHSZB4kSD14Z64ovHb4437Ev6TadTsM2MNkFs66B4uZVvV7ioU21vyX1x2lhBzkeKt8j958uv4u4RD0odrme3E9ms02LJMwlIJ1imQVOQP4iIJYGH6Y5_Ri5HItSTjVFTUNhxdChJQyalXqiCTfQ1qgpoFkhb41Mrcj_zBOMRrX0nTMfFAJ0pultXVShAjcDWbadhQe30xCqye3ONcdy-RJSzMX9U868ERvSRrFMRgvqAu6qemHLWlWZOfNtc7l_zeg6pfxN0WllNI1U_ZsbYuKKuRzyf9C0aodxqzalFO7cRcevdVsion1ml1UZlhcLZZwMrC5K_3Bswou_qLWMnbwhuO_KfSxuMcAZoyy4GIEfvx7re4j_5oPsjR6zxG6iGh-rMPZGzxQfL0YaVRJc-5IjEIUSn3_lz6I2fdCaJTMrEXxV1J7it4lyDM4EbDL1Bpb3j9X0p3x5il3g3Eomo3OepOUwJv7u4ZuA6PlIYa2B12ocFGCLXwF-J-xJy-rx8noUvi6fCNuDmnhkWMh37EDvWNdF5F0IoIpJp244ceBALCX4WW7ezSDlGPuN39XsEfgUbwqhgkvyi2ZsF9Hp1QpF=w810-h663)

## codigo