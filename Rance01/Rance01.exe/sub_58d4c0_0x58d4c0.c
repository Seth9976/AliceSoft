// 函数: sub_58d4c0
// 地址: 0x58d4c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(*arg1 + 0xc))()
int32_t ecx
int32_t edi

if (arg3 == 0)
    edi = 0x65
    ecx = arg2 * 2
else
    edi = 0x66
    ecx = arg2 << 2

int32_t result

if (arg2 s> 0)
    int32_t* eax_2 = **(arg1[2] + 0x1c)
    result, ecx = (*(*eax_2 + 0x6c))(eax_2, ecx, 8, edi, 0, &arg1[3], 0)
    
    if (result s< 0)
        result.b = 0
        return result

ecx.b = arg3
arg1[6] = edi
arg1[4] = arg2
arg1[5].b = ecx.b
result.b = 1
return result
