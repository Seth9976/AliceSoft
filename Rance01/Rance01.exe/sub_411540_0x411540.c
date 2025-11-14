// 函数: sub_411540
// 地址: 0x411540
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char* esi = (*(*arg2 + 8))(arg3, arg4)
int32_t eax_3 = *(arg1 + 4)
int32_t edi_1 = *(eax_3 + ((0xff - arg10) << 2))
char* eax_4 = *(eax_3 + (arg10 << 2))
int32_t ebx
ebx.b = eax_4[arg9]
int32_t ecx_3
ecx_3.b = eax_4[arg8]
eax_4.b = eax_4[arg7]
void* edx_3 = *arg2
arg2.b = ecx_3.b
arg4.b = eax_4.b
int32_t j_1 = arg5
uint32_t result = arg6
int32_t ebp_2 = (*(edx_3 + 0x1c))() - (j_1 << 2)

if (result s> 0)
    arg3 = result
    uint32_t i
    
    do
        if (j_1 s> 0)
            int32_t j
            
            do
                uint32_t eax_8 = zx.d(esi[1])
                *esi = *(zx.d(*esi) + edi_1) + ebx.b
                result = zx.d(esi[2])
                esi[1] = *(eax_8 + edi_1) + arg2.b
                esi = &esi[4]
                j = j_1
                j_1 -= 1
                esi[0xfffffffe] = *(result + edi_1) + arg4.b
            while (j != 1)
            j_1 = arg5
        
        esi = &esi[ebp_2]
        i = arg3
        arg3 -= 1
    while (i != 1)

return result
