// 函数: sub_6728d0
// 地址: 0x6728d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edx = arg1
int32_t** eax = *(edx + 4)
void** result = arg2
int32_t** esi = eax[1]
int32_t** ebp = eax
eax.b = 1
int32_t* edi = arg3
arg2 = ebp
char var_10 = 1

if (*(esi + 0x45) == 0)
    int32_t eax_1 = edi[7]
    int32_t ecx_1 = edi[8]
    int32_t edx_1 = eax_1
    int32_t var_c_1 = edx_1
    
    while (true)
        int32_t edi_1 = esi[7]
        arg2 = esi
        void* ecx_2
        
        if (esi[8] u< 0x10)
            ecx_2 = &esi[3]
        else
            ecx_2 = esi[3]
        
        int32_t ebp_1 = eax_1
        
        if (edx_1 u< ebp_1)
            ebp_1 = edx_1
        
        int32_t eax_2 = ebp_1
        
        if (ebp_1 u>= edi_1)
            eax_2 = edi_1
        
        int32_t* edx_2 = arg3
        void* edx_3
        
        if (ecx_1 u< 0x10)
            edx_3 = &edx_2[3]
        else
            edx_3 = edx_2[3]
        
        eax = sub_402320(eax_2, edx_3, ecx_2, eax_2)
        bool cond:3_1 = eax s< 0
        
        if (eax == 0)
            if (ebp_1 u>= edi_1)
                eax.b = ebp_1 != edi_1
            else
                eax = 0xffffffff
            
            cond:3_1 = eax s< 0
        
        eax.b = cond:3_1
        var_10 = eax.b
        
        if (eax.b == 0)
            esi = esi[2]
        else
            esi = *esi
        
        if (*(esi + 0x45) != 0)
            break
        
        edx_1 = var_c_1
    
    edi = arg3
    edx = arg1
    ebp = arg2

arg3 = ebp

if (eax.b != 0)
    if (ebp == **(edx + 4))
        *result = *sub_672a40(ebp, edx, &arg3, 1, edi)
        result[1].b = 1
        return result
    
    sub_5754f0(&arg3)
    ebp = arg3

if (sub_405dd0(&edi[3], &ebp[3]) != 0)
    *result = *sub_672a40(arg2, arg1, &arg3, var_10, edi)
    result[1].b = 1
    return result

sub_5618e0(&edi[3])
int32_t* var_24_4 = edi
sub_6b4d5b()
*result = ebp
result[1].b = 0
return result
