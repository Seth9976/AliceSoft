// 函数: sub_541e10
// 地址: 0x541e10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebx_2
int32_t eax_1 = data_78c474 ^ &__saved_ebx_2
int32_t* eax_3 = arg1[0xac] - 4
arg1[0xac] = eax_3
char* eax_5 = sub_54a770(&__saved_ebx_2, arg1, *eax_3)
arg1[0xac] -= 4
char* ebx = eax_5
int32_t eax_7 = *arg1[0xac]
int32_t* esi_1

if (eax_7 u< (arg1[0x7a] - arg1[0x79]) s>> 2)
    esi_1 = *(arg1[0x79] + (eax_7 << 2))
else
    esi_1 = nullptr

void* edi_2 = *(ebx + 0x10) + 1
char result

if (edi_2 u> esi_1[1])
    result = sub_54fa60(esi_1, edi_2)

if (edi_2 u<= esi_1[1] || result != 0)
    if (*(ebx + 0x14) u>= 0x10)
        ebx = *ebx
    
    int128_t* esi_2
    
    if (esi_1[1] != 0)
        esi_2 = *esi_1
    else
        esi_2 = nullptr
    
    result = sub_6c02a0(esi_2, ebx, edi_2)

int32_t var_c

if (var_c u>= 0x10)
    int32_t __saved_ebx_1 = __saved_ebx_2
    result = sub_6b4d5b()

sub_6b4885(eax_1 ^ &__saved_ebx_2)
return result
