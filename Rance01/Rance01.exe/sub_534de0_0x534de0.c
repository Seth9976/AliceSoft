// 函数: sub_534de0
// 地址: 0x534de0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71aaa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_esi
int32_t var_1c = data_78c474 ^ &__saved_esi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]

if (arg1 u< ecx)
    result = *arg2

if (arg1 u>= ecx || result u> arg1)
    if (ecx == arg2[2])
        result = sub_535050(arg2)
    
    int32_t* ebx_2 = arg2[1]
    int32_t* var_10_2 = ebx_2
    int32_t var_4_1 = 2
    
    if (ebx_2 != 0)
        *ebx_2 = *arg1
        sub_6b05e0(&ebx_2[1], &arg1[1])
        var_4_1.b = 3
        result = sub_535460(&ebx_2[5], &arg1[5])
else
    if (ecx == arg2[2])
        sub_535050(arg2)
    
    result = (arg1 - result) s/ 0x24 * 9
    int32_t* esi_5 = arg2[1]
    void* ebx = &(*arg2)[result]
    int32_t* var_10_1 = esi_5
    int32_t var_4 = 0
    
    if (esi_5 != 0)
        *esi_5 = *ebx
        sub_6b05e0(&esi_5[1], ebx + 4)
        var_4.b = 1
        result = sub_535460(&esi_5[5], ebx + 0x14)

arg2[1] = &arg2[1][9]
fsbase->NtTib.ExceptionList = ExceptionList
return result
