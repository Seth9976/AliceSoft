// 函数: sub_5f0ce0
// 地址: 0x5f0ce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char result

if (sub_402680(0x72d8c1, arg1 + 0x10) == 0)
label_5f0d29:
    result = sub_401270(arg1 + 0x10, nullptr, 0x72d8c2)
    __builtin_memcpy(arg1 + 0x2e0, arg2, 0x30)
    int128_t* ecx_2 = *(arg1 + 0x34)
    int128_t* esi_2 = *(arg1 + 0x30)
    
    if (esi_2 != ecx_2)
        int32_t edi_2 = 0 s>> 2 << 2
        result, ecx_2 = sub_6b49d0(esi_2, ecx_2, edi_2)
        *(arg1 + 0x34) = edi_2 + esi_2
    
    ecx_2.b = arg3
    *(arg1 + 0x310) = ecx_2.b
    *(arg1 + 0x2c) = 2
    *(arg1 + 0x350) = 1
else
    if (sub_5e0140(arg2, arg1 + 0x2e0) == 0)
        goto label_5f0d29
    
    result = arg3
    
    if (*(arg1 + 0x310) != result || *(arg1 + 0x2c) != 2)
        goto label_5f0d29

return result
