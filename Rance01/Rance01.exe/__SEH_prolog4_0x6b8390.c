// 函数: __SEH_prolog4
// 地址: 0x6b8390
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t (* var_4)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t arg_8
int32_t eax = arg_8
int32_t ebp
arg_8 = ebp
void* esp = &ExceptionList - eax
int32_t entry_ebx
*(esp - 4) = entry_ebx
*(esp - 8) = arg1
*(esp - 0xc) = arg2
int32_t eax_1 = data_78c474
*(esp - 0x10) = eax_1 ^ &arg_8
void* var_10 = esp - 0x10
*(esp - 0x14) = __return_addr
void* __return_addr_1 = arg3 ^ eax_1
arg3 = 0xfffffffe
__return_addr = __return_addr_1
fsbase->NtTib.ExceptionList = &ExceptionList
