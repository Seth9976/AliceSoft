// 函数: sub_541980
// 地址: 0x541980
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_20
int32_t eax_1 = data_78c474 ^ &var_20
int32_t* eax_2 = *(arg1 + 0x28c)
int32_t ecx = *eax_2
*(arg1 + 0x28c) = &eax_2[1]
int32_t edx = *(arg1 + 0x7c)
int32_t eax_4 = *(arg1 + 0x78)
int128_t* var_30
int32_t var_c
void* edi

if (ecx u>= (edx - eax_4) s>> 2 || eax_4 == edx)
label_5419fe:
    var_c = 0xf
    int32_t var_10_1 = 0
    var_20 = 0
    var_30 = "(null)"
    edi = 6
else
    int32_t edx_1 = *(arg1 + 0x88)
    
    if (edx_1 == *(arg1 + 0x8c))
        goto label_5419fe
    
    void* ecx_1 = *(eax_4 + (ecx << 2))
    int128_t* ecx_2 = ecx_1 + edx_1
    
    if (ecx_1 == neg.d(edx_1))
        goto label_5419fe
    
    char* eax_5 = ecx_2
    var_c = 0xf
    int32_t var_10 = 0
    var_20 = 0
    
    do
        edx_1.b = *eax_5
        eax_5 = &eax_5[1]
    while (edx_1.b != 0)
    
    var_30 = ecx_2
    edi = eax_5 - &eax_5[1]

sub_401270(&var_20, edi, var_30)
*(arg1 + 0x2b0) -= 4
int32_t eax_8 = **(arg1 + 0x2b0)
int32_t* eax_9

if (eax_8 u< (*(arg1 + 0x1e8) - *(arg1 + 0x1e4)) s>> 2)
    eax_9 = *(*(arg1 + 0x1e4) + (eax_8 << 2))
else
    eax_9 = nullptr

int32_t result = sub_550660(eax_9, &var_20)

if (var_c u>= 0x10)
    int32_t var_30_2 = var_20.d
    result = sub_6b4d5b()

sub_6b4885(eax_1 ^ &var_20)
return result
