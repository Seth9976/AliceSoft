// 函数: sub_503260
// 地址: 0x503260
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi

if (*(arg1 + 0xc) != 0 && sub_4cce80(arg1 + 0x14) != 0 && *(arg1 + 0x165) != 0
        && *(arg1 + 0xd4) != 0 && (*(**(arg1 + 0xd4) + 0x10))(data_78c474 ^ &__saved_edi) != 0)
    char eax_3
    int80_t st0_1
    st0_1, eax_3 = sub_4ce510(arg1 + 0x24)
    
    if (eax_3 != 0)
        (*(*arg3 + 0x94))(1)
        (*(*arg3 + 0x98))(1)
        (*(*arg3 + 0x8c))(0, 0)
        (*(*arg3 + 0x84))(0)
        (*(*arg3 + 0x90))(0, 1)
        
        if (*(arg1 + 0xd8) != 0 && sub_5033a0(arg1) != 0)
            int32_t var_1c = 0
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            int32_t var_4 = 0
            bool cond:0_1 = sub_4ced90(arg1 + 0xe0, arg1 + 0x24, arg2, &var_1c, *(arg1 + 0xd4)) == 0
            sub_65ab60(&var_1c)
            int32_t eax_15
            eax_15.b = cond:0_1 == 0

fsbase->NtTib.ExceptionList = ExceptionList
