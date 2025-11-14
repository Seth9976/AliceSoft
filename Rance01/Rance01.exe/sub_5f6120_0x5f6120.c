// 函数: sub_5f6120
// 地址: 0x5f6120
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax_1 = sub_5f7370(*data_797da0, arg2)

if (eax_1 != 0)
    eax_1 = sub_5f33b0(eax_1, arg4)
    
    if (eax_1 != 0)
        int32_t var_38[0xc]
        __builtin_memcpy(&var_38, eax_1 + 8, 0x30)
        var_38[0] = arg3
        
        if (sub_5e0140(&var_38, eax_1 + 8).b == 0)
            __builtin_memcpy(eax_1 + 8, &var_38, 0x30)
            *(eax_1 + 0x95) = 1
        
        void* eax_2
        eax_2.b = 1
        return eax_2

eax_1.b = 0
return eax_1
