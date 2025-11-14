// 函数: sub_5a6010
// 地址: 0x5a6010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = *(arg1 + 0x100)
char* result = nullptr
uint32_t edx_3

for (int32_t i = 0x18; i s>= 0; )
    uint8_t edx_2 = (ebx u>> i.b).b
    i -= 8
    edx_3 = zx.d(edx_2)
    
    if (edx_3 - 0x41 u> 0x39 || (edx_3 s> 0x5a && edx_3 s< 0x61))
        result[arg2] = 0x5b
        int32_t ecx_5
        ecx_5.b = (*"0123456789ABCDEFJan")[edx_3 s>> 4 & 0xf]
        result[arg2 + 1] = ecx_5.b
        edx_3.b = (*"0123456789ABCDEFJan")[edx_3 & 0xf]
        result[arg2 + 2] = edx_3.b
        result[arg2 + 3] = 0x5d
        result = &result[4]
    else
        result[arg2] = edx_3.b
        result = &result[1]

if (arg3 != 0)
    char* ecx_6 = nullptr
    *(result + arg2) = 0x203a
    result = &result[2]
    
    while (true)
        edx_3.b = ecx_6[arg3]
        
        if (edx_3.b == 0)
            break
        
        result[arg2] = edx_3.b
        edx_3.b = ecx_6[arg3 + 1]
        
        if (edx_3.b == 0)
            result[1 + arg2] = 0
            return &result[1]
        
        result[arg2 + 1] = edx_3.b
        edx_3.b = ecx_6[arg3 + 2]
        
        if (edx_3.b == 0)
            result = &result[2]
            break
        
        result[arg2 + 2] = edx_3.b
        ecx_6 = &ecx_6[3]
        result = &result[3]
        
        if (ecx_6 s>= 0x3f)
            result[arg2] = 0
            return result

result[arg2] = 0
return result
