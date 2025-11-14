// 函数: sub_6107b0
// 地址: 0x6107b0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg2[1]
int32_t ecx_1

if (arg1 u< eax)
    ecx_1 = *arg2

if (arg1 u>= eax || ecx_1 u> arg1)
    if (eax == arg2[2])
        sub_610810(arg2)
    
    eax = arg2[1]
    
    if (eax != 0)
        *eax = *arg1
        *(eax + 4) = arg1[1]
else
    int32_t esi_2 = (arg1 - ecx_1) s>> 3
    
    if (eax == arg2[2])
        eax = sub_610810(arg2)
    
    int32_t* ecx_3 = arg2[1]
    
    if (ecx_3 != 0)
        int32_t eax_1 = *arg2
        *ecx_3 = *(eax_1 + (esi_2 << 3))
        int32_t eax_2 = *(eax_1 + (esi_2 << 3) + 4)
        ecx_3[1] = eax_2
        arg2[1] += 8
        return eax_2

arg2[1] += 8
return eax
