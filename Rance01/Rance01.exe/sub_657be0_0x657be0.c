// 函数: sub_657be0
// 地址: 0x657be0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg3
int32_t* edx = *arg1
int32_t* eax = arg1[1]
__builtin_memset(&arg1[4], 0, 0x11)

if (edx != eax)
    int32_t* ecx_1 = eax
    
    if (eax != eax)
        do
            *edx = *ecx_1
            ecx_1 = &ecx_1[1]
            edx = &edx[1]
        while (ecx_1 != eax)
        
        ebp = arg3
    
    arg1[1] = edx

if (ebp == 0 || arg2 == 0)
    eax.b = 0
    return eax

void* eax_2 = ((ebp << 2) + 0xf) & 0xfffffff0
arg1[6] = eax_2
arg1[8].b = 1
arg1[4] = ebp
arg1[5] = arg2
arg1[7] = 4
sub_658100(eax_2 * arg2, arg1)
int32_t* eax_4
eax_4.b = 1
return eax_4
