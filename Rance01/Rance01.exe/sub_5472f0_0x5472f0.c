// 函数: sub_5472f0
// 地址: 0x5472f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

arg1[0xac] -= 4
float edi = *arg1[0xac]
arg1[0xac] -= 4
int32_t eax_2 = *arg1[0xac]
arg1[0xac] -= 4
int32_t ebp
uint32_t result = sub_5466f0("A_SORT", *arg1[0xac], ebp, arg1, edi, arg1, eax_2)

if (result != 0)
    int32_t ecx_1 = *(result + 0x34)
    
    if (ecx_1 - 0xe u> 3)
        int32_t var_10_5 = ecx_1
        return sub_53d1c0(result, ecx_1 - 0xe, arg1, 0x74ffcc)
    
    switch (ecx_1)
        case 0xe
            if (sub_5474b0(arg1, result, edi).b != 0)
                result.b = 1
                return result
        case 0xf
            result = sub_547b70(arg1, result, edi)
            
            if (result.b == 0)
                return result
            
            result.b = 1
            return result
        case 0x10
            result = sub_547d00(result, arg1, edi)
            
            if (result.b == 0)
                return result
            
            result.b = 1
            return result
        case 0x11
            result = sub_547ea0(ecx_1, result, arg1, edi)
            
            if (result.b == 0)
                return result
            
            result.b = 1
            return result

result.b = 0
return result
