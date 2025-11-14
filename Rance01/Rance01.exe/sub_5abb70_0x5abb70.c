// 函数: sub_5abb70
// 地址: 0x5abb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_20
int32_t eax_1 = data_78c474 ^ &var_20
int32_t eax_3 = *(arg1 + 0x6c)

if ((eax_3.b & 1) != 0)
    sub_5a5c60(arg1, "Out of place IHDR")
    noreturn

int32_t esi = 0xd

if (arg3 != 0xd)
    sub_5a5c60(arg1, "Invalid IHDR chunk")
    noreturn

*(arg1 + 0x6c) = eax_3 | 1
int32_t eax_7 = *(arg1 + 0x54)

if (eax_7 == 0)
    sub_5a5c60(arg1, "Call to NULL read function")
    noreturn

char var_14
int32_t edx = eax_7(arg1, &var_14, 0xd)
char* ebp = &var_14

if ((*(arg1 + 0x100) & 0x20000000) != 0)
    edx = *(arg1 + 0x70) & 0x300
    
    if (edx != 0x300)
        goto label_5abc01
else if ((*(arg1 + 0x70) & 0x800) == 0)
label_5abc01:
    int32_t eax_8 = *(arg1 + 0x124)
    int32_t edi_1
    int32_t temp3_1
    
    do
        edi_1 = esi
        
        if (esi == 0)
            edi_1 = 0xffffffff
        
        if (ebp != 0)
            eax_8, edx = sub_59e5d0(eax_8, edx, ebp, edi_1)
        else
            eax_8 = 0
        
        ebp = &ebp[edi_1]
        temp3_1 = esi
        esi -= edi_1
    while (temp3_1 != edi_1)
    *(arg1 + 0x124) = eax_8

sub_5ab650(arg1, 0)
char var_13
char var_12
char var_11
uint32_t edi_8 = (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)

if (edi_8 u> 0x7fffffff)
    sub_5a5c60(arg1, "PNG unsigned integer out of range")
    noreturn

char var_10
char var_f
char var_e
char var_d
uint32_t ebp_7 = (((((zx.d(var_10) << 8) + zx.d(var_f)) << 8) + zx.d(var_e)) << 8) + zx.d(var_d)

if (ebp_7 u> 0x7fffffff)
    sub_5a5c60(arg1, "PNG unsigned integer out of range")
    noreturn

char var_b
uint32_t ecx_4 = zx.d(var_b)
char var_a
var_20 = zx.d(var_a)
char var_8
*(arg1 + 0x138) = var_8
char var_9
*(arg1 + 0x25c) = var_9
*(arg1 + 0x27c) = var_20.b
*(arg1 + 0xe4) = edi_8
*(arg1 + 0xe8) = ebp_7
char var_c
*(arg1 + 0x13c) = var_c
*(arg1 + 0x13b) = ecx_4.b

if (ecx_4 == 2)
    *(arg1 + 0x13f) = 3
else if (ecx_4 == 4)
    *(arg1 + 0x13f) = 2
else if (ecx_4 == 6)
    *(arg1 + 0x13f) = 4
else
    *(arg1 + 0x13f) = 1

int32_t eax_19
eax_19.b = *(arg1 + 0x13f)
eax_19.w = muls.dp.b(eax_19.b, var_c)
*(arg1 + 0x13e) = eax_19.b
uint32_t eax_20 = zx.d(eax_19.b)
uint32_t eax_22

if (eax_19.b u< 8)
    eax_22 = (eax_20 * edi_8 + 7) u>> 3
else
    eax_22 = (eax_20 u>> 3) * edi_8

*(arg1 + 0xf4) = eax_22
uint32_t result = sub_5aff90(arg2, edi_8, arg1, ebp_7, var_c, ecx_4.b, var_8, var_a, var_9)
sub_6b4885(eax_1 ^ &var_20)
return result
