// 函数: sub_5ab650
// 地址: 0x5ab650
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_5c
int32_t eax_1 = data_78c474 ^ &var_5c
int32_t eax_2 = *(arg1 + 0xb4)
int32_t ebp = arg2
var_5c = eax_2
int32_t ecx

if (ebp u> eax_2)
    int32_t eax_5
    
    do
        int32_t eax_3 = *(arg1 + 0x54)
        int32_t esi_1 = *(arg1 + 0xb4)
        int32_t edi_1 = *(arg1 + 0xb0)
        
        if (eax_3 == 0)
            goto label_5ab701
        
        char* ecx_1
        void* edx_1
        edx_1, ecx_1 = eax_3(arg1, edi_1, esi_1)
        int32_t var_7c_1 = edi_1
        void* var_80_1 = arg1
        ecx = sub_5a3fe0(esi_1, edx_1, ecx_1)
        eax_5 = var_5c
        ebp -= eax_5
    while (ebp u> eax_5)

if (ebp != 0)
    int32_t eax_6 = *(arg1 + 0x54)
    int32_t esi_2 = *(arg1 + 0xb0)
    
    if (eax_6 == 0)
    label_5ab701:
        sub_5a5c60(arg1, "Call to NULL read function")
        noreturn
    
    char* ecx_2
    void* edx_2
    edx_2, ecx_2 = eax_6(arg1, esi_2, ebp)
    int32_t var_7c_2 = esi_2
    void* var_80_2 = arg1
    ecx = sub_5a3fe0(ebp, edx_2, ecx_2)

int32_t eax_8
void* edx_3
eax_8, edx_3 = sub_5ab790(ecx, arg1)

if (eax_8 != 0)
    int32_t ecx_3 = *(arg1 + 0x70)
    int32_t eax_12
    
    if ((*(arg1 + 0x100) & 0x20000000) == 0)
        eax_12 = ecx_3 & 0x400
    else
        eax_12 = not.d(ecx_3 u>> 9) & 1
    
    char var_58[0x54]
    
    if (eax_12 != 0)
        char* var_70_3 = "CRC error"
        sub_5a6010(arg1, &var_58, edx_3)
        sub_5a5de0(&var_58, arg1)
        sub_6b4885(eax_1 ^ &var_5c)
        return 1
    
    if ((ecx_3 & 0x800000) == 0)
        void* var_70_5 = arg1
        sub_5a60e0("CRC error", edx_3)
        noreturn
    
    char* var_70_4 = "CRC error"
    sub_5a6010(arg1, &var_58, edx_3)
    sub_5a5de0(&var_58, arg1)

sub_6b4885(eax_1 ^ &var_5c)
return 0
