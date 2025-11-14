// 函数: sub_4102d0
// 地址: 0x4102d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx_1 = arg4 - arg3

if (arg4 == arg3)
    return 

int32_t edx_1 = *arg1
int128_t* eax_1 = arg1[1]

if (edx_1 - eax_1 - 1 u< ebx_1)
    sub_6b47bf("vector<T> too long")
    noreturn

void* edi_3 = eax_1 - edx_1 + ebx_1
int32_t ecx_5 = arg1[2] - edx_1

if (ecx_5 u< edi_3)
    uint32_t eax_3 = ecx_5 u>> 1
    uint32_t ecx_6
    
    if (0xffffffff - eax_3 u>= ecx_5)
        ecx_6 = ecx_5 + eax_3
        arg4 = ecx_6
    else
        arg4 = 0
        ecx_6 = 0
    
    if (ecx_6 u< edi_3)
        arg4 = edi_3
        ecx_6 = edi_3
    
    int128_t* eax_4 = sub_4015e0(ecx_6)
    int128_t* eax_5 = *arg1
    void* edi_5 = arg2 - eax_5
    sub_6b49d0(sub_6b49d0(sub_6b49d0(eax_4, eax_5, edi_5) + edi_5, arg3, ebx_1) + ebx_1, arg2, 
        arg1[1] - arg2)
    int32_t eax_10 = *arg1
    void* edi_7 = ebx_1 + arg1[1] - eax_10
    
    if (eax_10 != 0)
        int32_t var_14_2 = eax_10
        sub_6b4d5b()
    
    *arg1 = eax_4
    arg1[2] = arg4 + eax_4
    arg1[1] = edi_7 + eax_4
    return 

int32_t edx_7 = sub_6b49d0(eax_1, arg3, ebx_1)
int32_t eax = arg1[1]
void* edi_8 = eax + ebx_1

if (arg2 != eax && eax != edi_8)
    int128_t* var_14_4 = arg2
    sub_4103e0(eax, edi_8, edx_7)

arg1[1] += ebx_1
