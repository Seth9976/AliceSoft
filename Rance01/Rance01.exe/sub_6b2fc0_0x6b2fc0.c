// 函数: sub_6b2fc0
// 地址: 0x6b2fc0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3

if (*arg1 == 0)
    if (*(arg1 + 4) == 0 && sub_6b2a50(&arg1[0x10]) == 0)
        *(arg1 + 4) = 1
    
    *arg1 = 1

int32_t eax_1 = *(arg1 + 4)
enum MESSAGEBOX_RESULT eax_4
int32_t arg_4

if (eax_1 == 0)
    if (sub_6b2c70(&arg1[0x10], arg_4, arg2, &arg_4, &arg3).b != 0)
        int32_t ecx = arg_4
        int32_t* edx = arg3
        arg1[8] = 1
        *(arg1 + 0xc) = 0
        *ebp = ecx
        ebp[1] = edx
        eax_4.b = 1
        return eax_4
else
    if (eax_1 == 1)
        return sub_6b2ef0(arg1, arg_4, arg2, ebp)
    
    if (eax_1 == 2)
        int32_t eax_5 = GetSystemMetrics(eax_1 - 2)
        int32_t eax_6 = GetSystemMetrics(SM_CYSCREEN)
        *ebp = eax_5
        ebp[1] = eax_6
        eax_6.b = 1
        return eax_6
eax_4.b = 0
return eax_4
