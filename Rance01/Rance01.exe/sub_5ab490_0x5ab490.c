// 函数: sub_5ab490
// 地址: 0x5ab490
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_14
int32_t eax_1 = data_78c474 ^ &var_14
int32_t eax_2 = *(arg1 + 0x54)
var_14 = arg1
*(arg1 + 0x2ac) = 0x21

if (eax_2 == 0)
    sub_5a5c60(arg1, "Call to NULL read function")
    noreturn

char var_c
eax_2(arg1, &var_c, 8)
char var_b
char var_a
char var_9
uint32_t result = (((((zx.d(var_c) << 8) + zx.d(var_b)) << 8) + zx.d(var_a)) << 8) + zx.d(var_9)
uint32_t result_1 = result

if (result u> 0x7fffffff)
    sub_5a5c60(arg1, "PNG unsigned integer out of range")
    noreturn

void* eax_7 = var_14
char var_8
char var_7
char var_6
char var_5
uint32_t esi_6 = ((zx.d(var_8) << 8 | zx.d(var_7)) << 8 | zx.d(var_6)) << 8 | zx.d(var_5)
*(arg1 + 0x100) = esi_6
*(arg1 + 0x124) = 0
int32_t ebp = 4
char* ebx_1 = &var_8

if ((esi_6 & 0x20000000) == 0)
    if ((*(eax_7 + 0x70) & 0x800) == 0)
    label_5ab56b:
        int32_t eax_8 = 0
        int32_t edi_1
        int32_t temp0_1
        
        do
            edi_1 = ebp
            
            if (ebp == 0)
                edi_1 = 0xffffffff
            
            if (ebx_1 != 0)
                eax_8 = sub_59e5d0(eax_8, result, ebx_1, edi_1)
                result = result_1
            else
                eax_8 = 0
            
            ebx_1 = &ebx_1[edi_1]
            temp0_1 = ebp
            ebp -= edi_1
        while (temp0_1 != edi_1)
        *(var_14 + 0x124) = eax_8
else if ((*(eax_7 + 0x70) & 0x300) != 0x300)
    goto label_5ab56b

for (int32_t i = 1; i s<= 4; )
    uint32_t eax_10 = zx.d(esi_6.b)
    
    if (eax_10 - 0x41 u> 0x39)
    label_5ab5ea:
        void* edx_6 = var_14
        void* var_28_2 = edx_6
        sub_5a60e0("invalid chunk type", edx_6)
        noreturn
    
    if (eax_10 s> 0x5a && eax_10 s< 0x61)
        goto label_5ab5ea
    
    i += 1
    esi_6 u>>= 8

*(var_14 + 0x2ac) = 0x41
sub_6b4885(eax_1 ^ &var_14)
return result
