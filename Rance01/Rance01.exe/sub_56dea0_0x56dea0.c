// 函数: sub_56dea0
// 地址: 0x56dea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg4
int32_t ebp = arg3
void* esi = arg1

if (*(esi + 0x18) == 0)
    arg1.b = 0
    return arg1

if (*(esi + 0x3c) == 0)
    sub_56e0c0(esi, &arg4, &arg3)
    int32_t eax_4 = (*(**(esi + 0x18) + 0x10))()
    void* edx_5 = **(esi + 0x18)
    *ebx = divs.dp.d(sx.q(*(esi + 0x34) * arg2), eax_4)
    int32_t eax_10 = (*(edx_5 + 0x14))()
    int32_t eax_13
    int32_t edx_6
    edx_6:eax_13 = sx.q(*(esi + 0x38) * ebp)
    int32_t* edx_7 = arg4
    int32_t temp2_1 = *ebx
    *ebx += edx_7
    int32_t ebx_1 = *ebx
    arg1 = divs.dp.d(edx_6:eax_13, eax_10) + arg3
    *arg5 = arg1
    
    if (temp2_1 + edx_7 s>= 0 && ebx_1 s< *(esi + 0x2c) && arg1 s>= 0 && arg1 s< *(esi + 0x30))
        arg1.b = 1
        return arg1
else if (arg2 s>= 0 && ebp s>= 0 && arg2 s< (*(**(esi + 0x18) + 0x10))()
        && ebp s< (*(**(esi + 0x18) + 0x14))())
    *ebx = arg2
    *arg5 = ebp
    int32_t* eax_2
    eax_2.b = 1
    return eax_2

arg1.b = 0
return arg1
