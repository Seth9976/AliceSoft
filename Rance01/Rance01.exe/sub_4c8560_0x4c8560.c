// 函数: sub_4c8560
// 地址: 0x4c8560
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = *(arg1 + 0x1d0)

if (edi == 0)
    arg1.b = 0
    return arg1

if (*(arg1 + 0x214) == 0)
    int32_t ecx
    sub_4efb40(ecx, arg1 + 0x214)
    
    if (edi == 0)
        return 0
    
    if (sub_4efbb0(edi, arg1 + 0x214) == 0)
        return 0
    
    char eax
    int80_t st0_1
    st0_1, eax = sub_4efc10(arg1 + 0x214)
    
    if (eax == 0)
        return 0
    
    sub_4f2190(arg1 + 0x214)
    *(arg1 + 0x214) = 1

int32_t var_c_2 = arg5
return sub_4f00b0(arg1 + 0x214, arg2, arg3, arg4)
