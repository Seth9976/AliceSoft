// 函数: sub_40bb70
// 地址: 0x40bb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = *(arg1 + 0x2cc)

if (result == 0)
    int32_t* esi_1 = *(arg1 + 0x2c4)
    
    if (esi_1 != 0)
        int32_t* ecx_1 = *esi_1
        
        if (ecx_1 != 0 && (*(*ecx_1 + 0xc))(arg2).b != 0)
            result.b = 1
            return result
else if (result == 1 && *(arg1 + 0x2c8) != 0)
    void** eax_1 = sub_40bf30()
    int32_t ecx_3 = *(*(arg1 + 0x2d4) + 0xc)
    
    if (sub_437020(ecx_3, eax_1, *(arg1 + 0x2c8), ecx_3, arg2).b != 0)
        result.b = 1
        return result

result.b = 0
return result
