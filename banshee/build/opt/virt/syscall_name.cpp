/** $lic$
 * Copyright (C) 2012-2014 by Massachusetts Institute of Technology
 * Copyright (C) 2010-2013 by The Board of Trustees of Stanford University
 *
 * This file is part of zsim.
 *
 * zsim is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, version 2.
 *
 * If you use this software in your research, we request that you reference
 * the zsim paper ("ZSim: Fast and Accurate Microarchitectural Simulation of
 * Thousand-Core Systems", Sanchez and Kozyrakis, ISCA-40, June 2013) as the
 * source of the simulator in any publications that use this software, and that
 * you send us a citation of your work.
 *
 * zsim is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

static const char* syscallNames[] = {
// Auto-generated at build time
"io_setup",
"io_destroy",
"io_submit",
"io_cancel",
"io_getevents",
"setxattr",
"lsetxattr",
"fsetxattr",
"getxattr",
"lgetxattr",
"fgetxattr",
"listxattr",
"llistxattr",
"flistxattr",
"removexattr",
"lremovexattr",
"fremovexattr",
"getcwd",
"lookup_dcookie",
"eventfd2",
"epoll_create1",
"epoll_ctl",
"epoll_pwait",
"dup",
"dup3",
"INVALID",
"inotify_init1",
"inotify_add_watch",
"inotify_rm_watch",
"ioctl",
"ioprio_set",
"ioprio_get",
"flock",
"mknodat",
"mkdirat",
"unlinkat",
"symlinkat",
"linkat",
"renameat",
"umount2",
"mount",
"pivot_root",
"nfsservctl",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"fallocate",
"faccessat",
"chdir",
"fchdir",
"chroot",
"fchmod",
"fchmodat",
"fchownat",
"fchown",
"openat",
"close",
"vhangup",
"pipe2",
"quotactl",
"getdents64",
"INVALID",
"read",
"write",
"readv",
"writev",
"pread64",
"pwrite64",
"preadv",
"pwritev",
"INVALID",
"pselect6",
"ppoll",
"signalfd4",
"vmsplice",
"splice",
"tee",
"readlinkat",
"INVALID",
"INVALID",
"sync",
"fsync",
"fdatasync",
"sync_file_range",
"timerfd_create",
"timerfd_settime",
"timerfd_gettime",
"utimensat",
"acct",
"capget",
"capset",
"personality",
"exit",
"exit_group",
"waitid",
"set_tid_address",
"unshare",
"futex",
"set_robust_list",
"get_robust_list",
"nanosleep",
"getitimer",
"setitimer",
"kexec_load",
"init_module",
"delete_module",
"timer_create",
"timer_gettime",
"timer_getoverrun",
"timer_settime",
"timer_delete",
"clock_settime",
"clock_gettime",
"clock_getres",
"clock_nanosleep",
"syslog",
"ptrace",
"sched_setparam",
"sched_setscheduler",
"sched_getscheduler",
"sched_getparam",
"sched_setaffinity",
"sched_getaffinity",
"sched_yield",
"sched_get_priority_max",
"sched_get_priority_min",
"sched_rr_get_interval",
"restart_syscall",
"kill",
"tkill",
"tgkill",
"sigaltstack",
"rt_sigsuspend",
"rt_sigaction",
"rt_sigprocmask",
"rt_sigpending",
"rt_sigtimedwait",
"rt_sigqueueinfo",
"rt_sigreturn",
"setpriority",
"getpriority",
"reboot",
"setregid",
"setgid",
"setreuid",
"setuid",
"setresuid",
"getresuid",
"setresgid",
"getresgid",
"setfsuid",
"setfsgid",
"times",
"setpgid",
"getpgid",
"getsid",
"setsid",
"getgroups",
"setgroups",
"uname",
"sethostname",
"setdomainname",
"getrlimit",
"setrlimit",
"getrusage",
"umask",
"prctl",
"getcpu",
"gettimeofday",
"settimeofday",
"adjtimex",
"getpid",
"getppid",
"getuid",
"geteuid",
"getgid",
"getegid",
"gettid",
"sysinfo",
"mq_open",
"mq_unlink",
"mq_timedsend",
"mq_timedreceive",
"mq_notify",
"mq_getsetattr",
"msgget",
"msgctl",
"msgrcv",
"msgsnd",
"semget",
"semctl",
"semtimedop",
"semop",
"shmget",
"shmctl",
"shmat",
"shmdt",
"socket",
"socketpair",
"bind",
"listen",
"accept",
"connect",
"getsockname",
"getpeername",
"sendto",
"recvfrom",
"setsockopt",
"getsockopt",
"shutdown",
"sendmsg",
"recvmsg",
"readahead",
"brk",
"munmap",
"mremap",
"add_key",
"request_key",
"keyctl",
"clone",
"execve",
"INVALID",
"INVALID",
"swapon",
"swapoff",
"mprotect",
"msync",
"mlock",
"munlock",
"mlockall",
"munlockall",
"mincore",
"madvise",
"remap_file_pages",
"mbind",
"get_mempolicy",
"set_mempolicy",
"migrate_pages",
"move_pages",
"rt_tgsigqueueinfo",
"perf_event_open",
"accept4",
"recvmmsg",
"arch_specific_syscall",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"INVALID",
"wait4",
"prlimit64",
"fanotify_init",
"fanotify_mark",
"name_to_handle_at",
"open_by_handle_at",
"clock_adjtime",
"syncfs",
"setns",
"sendmmsg",
"process_vm_readv",
"process_vm_writev",
"kcmp",
"finit_module",
"sched_setattr",
"sched_getattr",
"renameat2",
"seccomp",
"getrandom",
"memfd_create",
"bpf",
"execveat",
"userfaultfd",
"membarrier",
"mlock2",
"syscalls"
};

#include <stdint.h>

const char* GetSyscallName(uint32_t syscall) {
    return (syscall >= sizeof(syscallNames)/sizeof(syscallNames[0]))? "INVALID" : syscallNames[syscall];
}

