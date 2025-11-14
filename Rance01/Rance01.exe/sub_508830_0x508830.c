// 函数: sub_508830
// 地址: 0x508830
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* result = *arg1
char ecx

if (arg1[0x3f] s< 2 || *(arg1 + 0x103) == 0)
    ecx = 0
else
    ecx = 1

if (result[0x60] s<= 0 || ecx == 0)
    if (arg1[0x15b].b != 0)
        sub_51a6c0(&arg1[0x15c])
        arg1[0x15b].b = 0
else if (arg1[0x15b].b != 0)
label_5088aa:
    
    if (sub_51a0a0(&arg1[0x15c]).b == 0)
        result.b = 0
        return result
else
    int32_t ecx_1 = result[0x50]
    int32_t eax = result[0x51]
    arg1[0x185] = arg1[0x1a6]
    
    if (sub_51a560(&arg1[0x15c], ecx_1, eax, arg1[1]).b == 0)
        result.b = 0
        return result
    
    arg1[0x15b].b = 1
    
    if (arg1[0x15b].b != 0)
        goto label_5088aa

result.b = 1
return result
