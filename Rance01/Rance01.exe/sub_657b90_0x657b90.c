// 函数: sub_657b90
// 地址: 0x657b90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* edx = *arg1
int32_t* ecx = arg1[1]
__builtin_memset(&arg1[4], 0, 0x11)

if (edx != ecx)
    int32_t* eax_1 = ecx
    
    if (ecx != ecx)
        do
            *edx = *eax_1
            eax_1 = &eax_1[1]
            edx = &edx[1]
        while (eax_1 != ecx)
    
    arg1[1] = edx

int32_t result = *arg1

if (result != 0)
    int32_t __saved_edi_1 = result
    result = sub_6b4d5b()

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
return result
