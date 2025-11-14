// 函数: sub_559770
// 地址: 0x559770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = 0
arg1[1] = 0
int32_t* eax = arg2[3]
int32_t edx = arg2[1]

if (edx s< &eax[1])
    eax.b = 0
    return eax

int32_t edx_1

if (edx != 0)
    edx_1 = *arg2
else
    edx_1 = 0

int32_t ebp = *(eax + edx_1)
arg2[3] = &eax[1]

if (ebp s> 0)
    do
        int32_t* eax_2 = arg2[3]
        int32_t edx_2 = arg2[1]
        
        if (edx_2 s< &eax_2[1])
            eax_2.b = 0
            return eax_2
        
        if (edx_2 != 0)
            edx_2 = *arg2
        
        int32_t eax_1 = *(eax_2 + edx_2)
        arg2[3] = &eax_2[1]
        sub_427a60(arg1, eax_1)
        ebx += 1
    while (ebx s< ebp)

eax.b = 1
return eax
