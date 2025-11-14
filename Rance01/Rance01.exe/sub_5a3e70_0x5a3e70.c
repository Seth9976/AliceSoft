// 函数: sub_5a3e70
// 地址: 0x5a3e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c
int32_t eax_1 = data_78c474 ^ &var_c
void* i_1 = arg4
var_c = 0x474e5089
int32_t var_8 = 0xa1a0a0d

if (i_1 u> 8)
    i_1 = 8
label_5a3e9f:
    
    if (arg2 u<= 7)
        if (arg2 + i_1 u> 8)
            i_1 = 8 - arg2
        
        int32_t __saved_esi
        void* ecx_1 = &__saved_esi + arg2 + 4
        int32_t* edx = arg2 + arg3
        void* i = i_1
        
        if (i_1 u>= 4)
            do
                if (*edx != *ecx_1)
                    goto label_5a3ee0
                
                i -= 4
                ecx_1 += 4
                edx = &edx[1]
            while (i u>= 4)
        
        if (i != 0)
        label_5a3ee0:
            uint32_t eax_3 = zx.d(*edx)
            uint32_t edi_1 = zx.d(*ecx_1)
            
            if (eax_3 != edi_1)
                sub_6b4885(eax_1 ^ &var_c)
                return (eax_3 - edi_1) s>> 0x1f | 1
            
            if (i u> 1)
                uint32_t eax_5 = zx.d(*(edx + 1))
                uint32_t edi_2 = zx.d(*(ecx_1 + 1))
                
                if (eax_5 != edi_2)
                    sub_6b4885(eax_1 ^ &var_c)
                    return (eax_5 - edi_2) s>> 0x1f | 1
                
                if (i u> 2)
                    uint32_t eax_6 = zx.d(*(edx + 2))
                    uint32_t edi_3 = zx.d(*(ecx_1 + 2))
                    
                    if (eax_6 != edi_3)
                        sub_6b4885(eax_1 ^ &var_c)
                        return (eax_6 - edi_3) s>> 0x1f | 1
                    
                    if (i u> 3)
                        uint32_t eax_4 = zx.d(*(edx + 3)) - zx.d(*(ecx_1 + 3))
                        sub_6b4885(eax_1 ^ &var_c)
                        return eax_4 s>> 0x1f | 1
        
        sub_6b4885(eax_1 ^ &var_c)
        return 0
else if (i_1 u>= 1)
    goto label_5a3e9f

sub_6b4885(eax_1 ^ &var_c)
return 0xffffffff
