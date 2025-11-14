// 函数: sub_5f4940
// 地址: 0x5f4940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg2 u> 3)
    return 

int32_t ecx_1 = *(*(arg1 + 0xc) + 0x21c)

if (*(ecx_1 + (arg2 << 2)) == arg3)
    return 

if (*(ecx_1 + (arg2 << 2)) != arg3)
    *(ecx_1 + (arg2 << 2)) = arg3

if (arg2 == 2)
    int32_t* ecx_3 = *(arg1 + 0x2c)
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 4))()
        *(arg1 + 0x2c) = 0
else if (arg2 == 3)
    int32_t* ecx_2 = *(arg1 + 0x30)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(arg1 + 0x30) = 0

if (arg3 != 0)
    sub_5f2890(arg2, arg1, arg3)
