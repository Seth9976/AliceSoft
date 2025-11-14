// 函数: sub_509910
// 地址: 0x509910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (*(arg2 + 0x550) != 0)
    int32_t* ecx = *(arg2 + 0x554)
    
    if (ecx == 0)
        return 0
    
    if ((*(*ecx + 0x14))(arg1) == 0)
        return 0
    
    int32_t* ecx_1 = *(arg2 + 4)
    int32_t* var_8_1 = ecx_1
    (*(*ecx_1 + 0x44))(0, fconvert.s(float.t(1)))
    int32_t* edi
    
    if (sub_4ced50(edi, 4, arg2 + 8, *(arg2 + 4)) == 0)
        sub_51ddc0(0x754710)
        return 0
    
    int32_t* ecx_3 = *(arg2 + 0x554)
    
    if (ecx_3 != 0 && (*(*ecx_3 + 0x18))() == 0)
        return 0

return 1
