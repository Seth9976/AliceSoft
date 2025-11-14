// 函数: sub_5f63b0
// 地址: 0x5f63b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg3
void* result = sub_5f7370(*data_797da0, arg2)

if (result != 0)
    result = sub_5f33b0(result, arg6)
    
    if (result != 0)
        int32_t var_38[0x8]
        __builtin_memcpy(&var_38, result + 8, 0x30)
        
        if (ebx s<= 0)
            ebx = 0
        else if (ebx s> 0xff)
            ebx = 0xff
        
        int32_t esi_1
        
        if (arg4 s<= 0)
            esi_1 = 0
        else
            esi_1 = arg4
            
            if (arg4 s> 0xff)
                esi_1 = 0xff
        
        int32_t ecx_2
        
        if (arg5 s<= 0)
            ecx_2 = 0
        else
            ecx_2 = arg5
            
            if (arg5 s> 0xff)
                ecx_2 = 0xff
        
        int32_t var_10 = ecx_2
        int32_t var_18 = ebx
        int32_t var_14 = esi_1
        int32_t var_c = 0xff
        
        if (sub_5e0140(&var_38, result + 8) == 0)
            __builtin_memcpy(result + 8, &var_38, 0x30)
            *(result + 0x95) = 1
        
        return 1

result.b = 0
return result
