/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_PRCTL_H
#define _LINUX_PRCTL_H
#include <linux/types.h>
#define PR_SET_PDEATHSIG 1
#define PR_GET_PDEATHSIG 2
#define PR_GET_DUMPABLE 3
#define PR_SET_DUMPABLE 4
#define PR_GET_UNALIGN 5
#define PR_SET_UNALIGN 6
#define PR_UNALIGN_NOPRINT 1
#define PR_UNALIGN_SIGBUS 2
#define PR_GET_KEEPCAPS 7
#define PR_SET_KEEPCAPS 8
#define PR_GET_FPEMU 9
#define PR_SET_FPEMU 10
#define PR_FPEMU_NOPRINT 1
#define PR_FPEMU_SIGFPE 2
#define PR_GET_FPEXC 11
#define PR_SET_FPEXC 12
#define PR_FP_EXC_SW_ENABLE 0x80
#define PR_FP_EXC_DIV 0x010000
#define PR_FP_EXC_OVF 0x020000
#define PR_FP_EXC_UND 0x040000
#define PR_FP_EXC_RES 0x080000
#define PR_FP_EXC_INV 0x100000
#define PR_FP_EXC_DISABLED 0
#define PR_FP_EXC_NONRECOV 1
#define PR_FP_EXC_ASYNC 2
#define PR_FP_EXC_PRECISE 3
#define PR_GET_TIMING 13
#define PR_SET_TIMING 14
#define PR_TIMING_STATISTICAL 0
#define PR_TIMING_TIMESTAMP 1
#define PR_SET_NAME 15
#define PR_GET_NAME 16
#define PR_GET_ENDIAN 19
#define PR_SET_ENDIAN 20
#define PR_ENDIAN_BIG 0
#define PR_ENDIAN_LITTLE 1
#define PR_ENDIAN_PPC_LITTLE 2
#define PR_GET_SECCOMP 21
#define PR_SET_SECCOMP 22
#define PR_CAPBSET_READ 23
#define PR_CAPBSET_DROP 24
#define PR_GET_TSC 25
#define PR_SET_TSC 26
#define PR_TSC_ENABLE 1
#define PR_TSC_SIGSEGV 2
#define PR_GET_SECUREBITS 27
#define PR_SET_SECUREBITS 28
#define PR_SET_TIMERSLACK 29
#define PR_GET_TIMERSLACK 30
#define PR_TASK_PERF_EVENTS_DISABLE 31
#define PR_TASK_PERF_EVENTS_ENABLE 32
#define PR_MCE_KILL 33
#define PR_MCE_KILL_CLEAR 0
#define PR_MCE_KILL_SET 1
#define PR_MCE_KILL_LATE 0
#define PR_MCE_KILL_EARLY 1
#define PR_MCE_KILL_DEFAULT 2
#define PR_MCE_KILL_GET 34
#define PR_SET_MM 35
#define PR_SET_MM_START_CODE 1
#define PR_SET_MM_END_CODE 2
#define PR_SET_MM_START_DATA 3
#define PR_SET_MM_END_DATA 4
#define PR_SET_MM_START_STACK 5
#define PR_SET_MM_START_BRK 6
#define PR_SET_MM_BRK 7
#define PR_SET_MM_ARG_START 8
#define PR_SET_MM_ARG_END 9
#define PR_SET_MM_ENV_START 10
#define PR_SET_MM_ENV_END 11
#define PR_SET_MM_AUXV 12
#define PR_SET_MM_EXE_FILE 13
#define PR_SET_MM_MAP 14
#define PR_SET_MM_MAP_SIZE 15
struct prctl_mm_map {
  __u64 start_code;
  __u64 end_code;
  __u64 start_data;
  __u64 end_data;
  __u64 start_brk;
  __u64 brk;
  __u64 start_stack;
  __u64 arg_start;
  __u64 arg_end;
  __u64 env_start;
  __u64 env_end;
  __u64 * auxv;
  __u32 auxv_size;
  __u32 exe_fd;
};
#define PR_SET_PTRACER 0x59616d61
#define PR_SET_PTRACER_ANY ((unsigned long) - 1)
#define PR_SET_CHILD_SUBREAPER 36
#define PR_GET_CHILD_SUBREAPER 37
#define PR_SET_NO_NEW_PRIVS 38
#define PR_GET_NO_NEW_PRIVS 39
#define PR_GET_TID_ADDRESS 40
#define PR_SET_THP_DISABLE 41
#define PR_GET_THP_DISABLE 42
#define PR_MPX_ENABLE_MANAGEMENT 43
#define PR_MPX_DISABLE_MANAGEMENT 44
#define PR_SET_FP_MODE 45
#define PR_GET_FP_MODE 46
#define PR_FP_MODE_FR (1 << 0)
#define PR_FP_MODE_FRE (1 << 1)
#define PR_CAP_AMBIENT 47
#define PR_CAP_AMBIENT_IS_SET 1
#define PR_CAP_AMBIENT_RAISE 2
#define PR_CAP_AMBIENT_LOWER 3
#define PR_CAP_AMBIENT_CLEAR_ALL 4
#define PR_SVE_SET_VL 50
#define PR_SVE_SET_VL_ONEXEC (1 << 18)
#define PR_SVE_GET_VL 51
#define PR_SVE_VL_LEN_MASK 0xffff
#define PR_SVE_VL_INHERIT (1 << 17)
#define PR_GET_SPECULATION_CTRL 52
#define PR_SET_SPECULATION_CTRL 53
#define PR_SPEC_STORE_BYPASS 0
#define PR_SPEC_INDIRECT_BRANCH 1
#define PR_SPEC_L1D_FLUSH 2
#define PR_SPEC_NOT_AFFECTED 0
#define PR_SPEC_PRCTL (1UL << 0)
#define PR_SPEC_ENABLE (1UL << 1)
#define PR_SPEC_DISABLE (1UL << 2)
#define PR_SPEC_FORCE_DISABLE (1UL << 3)
#define PR_SPEC_DISABLE_NOEXEC (1UL << 4)
#define PR_PAC_RESET_KEYS 54
#define PR_PAC_APIAKEY (1UL << 0)
#define PR_PAC_APIBKEY (1UL << 1)
#define PR_PAC_APDAKEY (1UL << 2)
#define PR_PAC_APDBKEY (1UL << 3)
#define PR_PAC_APGAKEY (1UL << 4)
#define PR_SET_TAGGED_ADDR_CTRL 55
#define PR_GET_TAGGED_ADDR_CTRL 56
#define PR_TAGGED_ADDR_ENABLE (1UL << 0)
#define PR_MTE_TCF_NONE 0UL
#define PR_MTE_TCF_SYNC (1UL << 1)
#define PR_MTE_TCF_ASYNC (1UL << 2)
#define PR_MTE_TCF_MASK (PR_MTE_TCF_SYNC | PR_MTE_TCF_ASYNC)
#define PR_MTE_TAG_SHIFT 3
#define PR_MTE_TAG_MASK (0xffffUL << PR_MTE_TAG_SHIFT)
#define PR_MTE_TCF_SHIFT 1
#define PR_SET_IO_FLUSHER 57
#define PR_GET_IO_FLUSHER 58
#define PR_SET_SYSCALL_USER_DISPATCH 59
#define PR_SYS_DISPATCH_OFF 0
#define PR_SYS_DISPATCH_ON 1
#define SYSCALL_DISPATCH_FILTER_ALLOW 0
#define SYSCALL_DISPATCH_FILTER_BLOCK 1
#define PR_PAC_SET_ENABLED_KEYS 60
#define PR_PAC_GET_ENABLED_KEYS 61
#define PR_SCHED_CORE 62
#define PR_SCHED_CORE_GET 0
#define PR_SCHED_CORE_CREATE 1
#define PR_SCHED_CORE_SHARE_TO 2
#define PR_SCHED_CORE_SHARE_FROM 3
#define PR_SCHED_CORE_MAX 4
#define PR_SCHED_CORE_SCOPE_THREAD 0
#define PR_SCHED_CORE_SCOPE_THREAD_GROUP 1
#define PR_SCHED_CORE_SCOPE_PROCESS_GROUP 2
#define PR_SME_SET_VL 63
#define PR_SME_SET_VL_ONEXEC (1 << 18)
#define PR_SME_GET_VL 64
#define PR_SME_VL_LEN_MASK 0xffff
#define PR_SME_VL_INHERIT (1 << 17)
#define PR_SET_MDWE 65
#define PR_MDWE_REFUSE_EXEC_GAIN 1
#define PR_GET_MDWE 66
#define PR_SET_VMA 0x53564d41
#define PR_SET_VMA_ANON_NAME 0
#define PR_GET_AUXV 0x41555856
#define PR_SET_MEMORY_MERGE 67
#define PR_GET_MEMORY_MERGE 68
#define PR_RISCV_V_SET_CONTROL 69
#define PR_RISCV_V_GET_CONTROL 70
#define PR_RISCV_V_VSTATE_CTRL_DEFAULT 0
#define PR_RISCV_V_VSTATE_CTRL_OFF 1
#define PR_RISCV_V_VSTATE_CTRL_ON 2
#define PR_RISCV_V_VSTATE_CTRL_INHERIT (1 << 4)
#define PR_RISCV_V_VSTATE_CTRL_CUR_MASK 0x3
#define PR_RISCV_V_VSTATE_CTRL_NEXT_MASK 0xc
#define PR_RISCV_V_VSTATE_CTRL_MASK 0x1f
#endif
