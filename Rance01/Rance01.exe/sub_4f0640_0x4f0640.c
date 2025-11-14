// 函数: sub_4f0640
// 地址: 0x4f0640
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = sub_70c710(fconvert.t(arg2))
int32_t eax_1 = sub_70c710(fconvert.t(arg3))
int32_t edx = *(arg1 + 0x24)

if (eax s< edx || eax s> *(arg1 + 0x28))
    return 

int32_t ecx_1 = *(arg1 + 0x2c)

if (eax_1 s< ecx_1 || eax_1 s> *(arg1 + 0x30))
    return 

int32_t eax_4 = (eax_1 - ecx_1) * *(arg1 + 0x34) - edx
int32_t eax_5 = eax_4 + eax

if (eax_4 + eax s< 0)
    return 

int32_t ecx_2 = *(arg1 + 0x14)

if (eax_5 s>= (*(arg1 + 0x18) - ecx_2) s>> 4)
    return 

int32_t eax_6 = eax_5 * 2
int32_t* i = *(ecx_2 + (eax_6 << 3))

for (int32_t esi_1 = *(ecx_2 + (eax_6 << 3) + 4); i != esi_1; i = &i[1])
    int32_t* edi_1 = *i
    char eax_8
    int80_t st0_1
    st0_1, eax_8 = sub_4f1950(edi_1, fconvert.s(fconvert.t(arg2)), fconvert.s(fconvert.t(arg3)))
    
    if (eax_8 != 0)
        *edi_1
        return 
