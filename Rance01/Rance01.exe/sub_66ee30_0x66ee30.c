// 函数: sub_66ee30
// 地址: 0x66ee30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_7 = arg1[1]
void* eax = *arg1
int32_t edx

if (eax != ecx_7)
    int32_t* eax_1 = sub_66fbe0(eax, edx, ecx_7, ecx_7)
    edx = sub_668ba0(eax_1, arg1[1])
    arg1[1] = eax_1

void* ecx = arg1[5]
void* eax_2 = arg1[4]

if (eax_2 != ecx)
    int32_t* eax_3 = sub_66fbe0(eax_2, edx, ecx, ecx)
    sub_668ba0(eax_3, arg1[5])
    arg1[5] = eax_3

int32_t ebx_3 = 0
arg1[8] = 0
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x38e38e39, arg2[1] - *arg2)
int32_t edx_2 = edx_1 s>> 3
int32_t edi_5 = (edx_2 u>> 0x1f) + edx_2
int32_t ebp = 0

if (edi_5 s> 0)
    do
        if (sub_66ef30(arg1, *arg2 + ebx_3) == 0)
            return 0
        
        ebp += 1
        ebx_3 += 0x24
    while (ebp s< edi_5)

int32_t ecx_3 = arg1[4]
int32_t i

for (i = arg1[5]; ecx_3 != i; i = arg1[5])
    sub_668940(arg1[4] + (i - ecx_3) s/ 0x24 * 0x24 - 0x24, arg1)
    void* edi_7 = arg1[5]
    
    if (arg1[4] != edi_7)
        if (*(edi_7 - 0x10) u>= 0x10)
            int32_t var_10_4 = *(edi_7 - 0x24)
            sub_6b4d5b()
        
        *(edi_7 - 0x10) = 0xf
        *(edi_7 - 0x14) = 0
        *(edi_7 - 0x24) = 0
        arg1[5] -= 0x24
    
    ecx_3 = arg1[4]

i.b = 1
return i
