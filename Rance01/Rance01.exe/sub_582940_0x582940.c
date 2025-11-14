// 函数: sub_582940
// 地址: 0x582940
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx = *(arg1 + 0xc)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0xc) = 0

int32_t result = (*(**(arg1 + 8) + 0xc))(arg2, arg3, 0x20)
*(arg1 + 0xc) = result

if (result != 0)
    int32_t* ecx_2 = *(arg1 + 0x10)
    
    if (ecx_2 != 0)
        (*(*ecx_2 + 4))()
        *(arg1 + 0x10) = 0
    
    result = (*(**(arg1 + 8) + 0xc))(arg2, arg3, 0x20)
    *(arg1 + 0x10) = result
    
    if (result != 0)
        *(arg1 + 0x18) = arg3
        *(arg1 + 0x14) = arg2
        result.b = 1
        return result

result.b = 0
return result
