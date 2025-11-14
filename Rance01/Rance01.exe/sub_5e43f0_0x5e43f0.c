// 函数: sub_5e43f0
// 地址: 0x5e43f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* result = *(arg2 + 0x18)

if (result != 0xffffffff)
    if (*(arg2 + 0x1c) == 0)
    label_5e4426:
        int32_t __saved_ebx_1 = *(arg1 + 0x40)
        int32_t __saved_edi_1 = *(arg1 + 0x30)
        int32_t var_10_1 = *(arg1 + 0x2c)
        int32_t var_14_1 = *(arg1 + 0x20)
        int32_t var_18_1 = *(arg1 + 0x1c)
        sub_40da60(0x735898)
        return 1
    
    int32_t* eax = sub_5f9dd0(result)
    
    if (eax == 0)
        goto label_5e4426
    
    if ((*(*eax + 0x28))() == 0)
        goto label_5e4426
    
    int32_t var_10_2 = *(arg1 + 0x40)
    int32_t var_14_2 = *(arg1 + 0x30)
    int32_t var_18_2 = *(arg1 + 0x2c)
    int32_t var_1c_1 = *(arg1 + 0x20)
    
    if (sub_5e8c70(arg2 + 0x18, *(arg1 + 0x1c)) != 0)
        return 1
    
    int32_t __saved_ebx_2 = *(arg1 + 0x40)
    int32_t __saved_edi_2 = *(arg1 + 0x30)
    int32_t var_10_3 = *(arg1 + 0x2c)
    int32_t var_14_3 = *(arg1 + 0x20)
    int32_t var_18_3 = *(arg1 + 0x1c)
    sub_40da60(0x735930)

result.b = 0
return result
