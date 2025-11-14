// 函数: sub_6b6ac0
// 地址: 0x6b6ac0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx = arg2
int32_t edi
int32_t var_c = edi
char* edi_1 = arg1

if (edi_1 u<= edx)
    return 

int32_t i_2 = arg3
int32_t eax = edx + i_2

do
    int32_t esi_1 = eax
    int32_t ebx_1 = edx
    
    if (esi_1 u<= edi_1)
        do
            if (arg4(esi_1, ebx_1) s> 0)
                ebx_1 = esi_1
            
            esi_1 += arg3
        while (esi_1 u<= edi_1)
        
        i_2 = arg3
        edx = arg2
    
    int32_t i_1 = i_2
    arg1 = edi_1
    
    if (ebx_1 != edi_1 && i_2 != 0)
        char* ecx_2 = ebx_1 - edi_1
        int32_t i
        
        do
            ebx_1.b = *arg1
            edx.b = *(ecx_2 + arg1)
            *(ecx_2 + arg1) = ebx_1.b
            *arg1 = edx.b
            arg1 = &arg1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_2 = arg3
        edx = arg2
    
    edi_1 -= i_2
while (edi_1 u> edx)
