// 函数: sub_5374c0
// 地址: 0x5374c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx_3 = arg1[3]
int32_t edx = arg1[1]
int128_t* result

if (edx s< &ecx_3[1])
    result.b = 0
    return result

int32_t edi

if (edx != 0)
    edi = *arg1
else
    edi = 0

int32_t edi_1 = *(ecx_3 + edi) << 2
arg1[3] = &ecx_3[1]

if (edi_1 != 0)
    if (edx s< &ecx_3[1 + *(ecx_3 + edi)])
        result.b = 0
        return result
    
    int32_t ecx_2
    
    if (edx != 0)
        ecx_2 = *arg1
    else
        ecx_2 = 0
    
    sub_6c02a0(arg2, &ecx_3[1] + ecx_2, edi_1)
    arg1[3] += edi_1

arg2[0x40].d = edi_1 + arg2
result.b = 1
return result
