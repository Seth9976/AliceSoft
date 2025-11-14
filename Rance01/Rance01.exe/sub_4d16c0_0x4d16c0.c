// 函数: sub_4d16c0
// 地址: 0x4d16c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_70
int32_t eax_1 = data_78c474 ^ &var_70
long double x87_r7 = fconvert.t(arg3)
int32_t* edi = arg1
int32_t* var_4c = edi
int32_t eax_2 = sub_70c710(x87_r7)
int32_t var_68 = eax_2

if (eax_2 s>= 0)
    int32_t ecx = *(arg2 + 8)
    
    if (eax_2 s>= ecx)
        var_68 = ecx - 1
        eax_2 = ecx - 1
else
    var_68 = 0
    eax_2 = 0

int32_t var_60 = eax_2 + 1

if (eax_2 + 1 s>= 0)
    int32_t ecx_2 = *(arg2 + 8)
    
    if (eax_2 + 1 s>= ecx_2)
        var_60 = ecx_2 - 1
else
    var_60 = 0

float var_50 = fconvert.s(x87_r7 - float.t(var_68))
long double x87_r7_2 = fconvert.t(arg5)
int32_t esi = sub_70c710(x87_r7_2)
int32_t var_6c = esi

if (esi s>= 0)
    int32_t eax_5 = *(arg4 + 8)
    
    if (esi s>= eax_5)
        var_6c = eax_5 - 1
        esi = eax_5 - 1
else
    var_6c = 0
    esi = 0

int32_t var_5c = esi + 1

if (esi + 1 s< 0)
    var_5c = 0
else
    int32_t ecx_5 = *(arg4 + 8)
    
    if (esi + 1 s>= ecx_5)
        var_5c = ecx_5 - 1

float var_58 = fconvert.s(x87_r7_2 - float.t(var_6c))
int32_t eax_11 = (*(arg2 + 0x10) - *(arg2 + 0xc)) s/ 0x9c

if (eax_11 != (edi[1] - *edi) s>> 6)
    sub_4c8660(eax_11, edi)

int32_t result = (*(arg2 + 0x10) - *(arg2 + 0xc)) s/ 0x9c
int32_t ebp_1 = 0

if (result s> 0)
    int32_t var_64_1 = 0
    
    while (true)
        long double x87_r7_4 = float.t(1)
        long double x87_r7_5 = float.t(0)
        float var_48 = fconvert.s(x87_r7_4)
        float var_34_1 = fconvert.s(x87_r7_4)
        float var_20_1 = fconvert.s(x87_r7_4)
        float var_c_1 = fconvert.s(x87_r7_4)
        float var_44_1 = fconvert.s(x87_r7_5)
        float var_40_1 = fconvert.s(x87_r7_5)
        float var_3c_1 = fconvert.s(x87_r7_5)
        float var_38_1 = fconvert.s(x87_r7_5)
        float var_30_1 = fconvert.s(x87_r7_5)
        float var_2c_1 = fconvert.s(x87_r7_5)
        float var_28_1 = fconvert.s(x87_r7_5)
        float var_24_1 = fconvert.s(x87_r7_5)
        float var_1c_1 = fconvert.s(x87_r7_5)
        float var_18_1 = fconvert.s(x87_r7_5)
        float var_14_1 = fconvert.s(x87_r7_5)
        float var_10_1 = fconvert.s(x87_r7_5)
        float var_84_1 = fconvert.s(fconvert.t(arg6))
        float var_88 = fconvert.s(fconvert.t(var_58))
        int32_t var_98_1 = var_5c
        sub_4d1940(arg2, &var_48, ebp_1, var_68, var_60, fconvert.s(fconvert.t(var_50)), arg4, esi, 
            var_5c, var_88, var_84_1)
        int32_t edi_2 = *edi + var_64_1
        var_64_1 += 0x40
        __builtin_memcpy(edi_2, &var_48, 0x40)
        ebp_1 += 1
        result = (*(arg2 + 0x10) - *(arg2 + 0xc)) s/ 0x9c
        
        if (ebp_1 s>= result)
            break
        
        esi = var_6c
        edi = var_4c

sub_6b4885(eax_1 ^ &var_70)
return result
