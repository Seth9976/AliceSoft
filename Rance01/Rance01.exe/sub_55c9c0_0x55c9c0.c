// 函数: sub_55c9c0
// 地址: 0x55c9c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx = *arg2
int32_t result = arg2[1]

if (ecx != result)
    int32_t var_14_1 = arg3
    void* eax = sub_52fc30(result, arg3, ecx, result)
    sub_52f330(eax, arg2[1])
    arg2[1] = eax

if (arg3 s> 0)
    sub_55cbd0(arg3, arg2)
    int32_t edi_2 = 0
    
    if (arg3 s> 0)
        int32_t ebp_3 = 0
        
        do
            if (sub_55c8a0(*arg2 + ebp_3, arg1).b == 0)
                result.b = 0
                return result
            
            edi_2 += 1
            ebp_3 += 0x2c
        while (edi_2 s< arg3)

result.b = 1
return result
