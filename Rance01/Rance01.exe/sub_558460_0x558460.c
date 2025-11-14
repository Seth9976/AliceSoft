// 函数: sub_558460
// 地址: 0x558460
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg3
*(arg1 + 0x400) = arg1
int32_t* result = ebx[3]
int32_t edx = ebx[1]

if (edx s< &result[1])
    result.b = 0
    return result

if (edx != 0)
    edx = *ebx

int32_t ebp = *(result + edx)
int32_t edi = 0
ebx[3] = &result[1]

if (ebp s> 0)
    do
        if (sub_5582e0(ebx, arg4, arg2, &arg3) == 0)
            return 0
        
        **(arg1 + 0x400) = arg3
        *(arg1 + 0x400) += 4
        edi += 1
    while (edi s< ebp)

result.b = 1
return result
