// 函数: sub_5e8700
// 地址: 0x5e8700
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ecx
int32_t* var_4 = ecx
int32_t edx = arg3
int32_t edi = arg2

if (arg1[1] != 0)
    arg1 = *arg1
    
    if (arg1 != 0xffffffff)
        int32_t ecx_2 = edi + arg4
        arg4 = ecx_2
        int32_t* eax_2 = &arg4
        
        if (ecx_2 s>= edi)
            eax_2 = &arg2
        
        int32_t ebp = *eax_2
        int32_t eax_4 = arg5 + edx
        arg4 = eax_4
        int32_t* esi = &arg4
        
        if (eax_4 s>= edx)
            esi = &arg3
        
        int32_t esi_1 = *esi
        arg4 = ecx_2
        int32_t* ecx_3 = &arg4
        
        if (edi s>= ecx_2)
            ecx_3 = &arg2
        
        int32_t ebx = *ecx_3
        arg2 = eax_4
        int32_t* eax_5 = &arg2
        
        if (edx s>= eax_4)
            eax_5 = &arg3
        
        int32_t edi_1 = *eax_5
        
        if (ebp s>= 0 && esi_1 s>= 0 && ebx s<= sub_5f9f40(arg1) && edi_1 s<= sub_5f9f90(arg1)
                && ebp != ebx)
            eax_5.b = esi_1 == edi_1
            return eax_5
        
        eax_5.b = 1
        return eax_5

arg1.b = 1
return arg1
