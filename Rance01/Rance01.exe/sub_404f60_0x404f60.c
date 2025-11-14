// 函数: sub_404f60
// 地址: 0x404f60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ecx_3 = *arg2
int128_t* eax = arg2[1]
void* edx_1 = eax - ecx_3

if (edx_1 u> arg1)
    int128_t* ebx_1 = ecx_3 + arg1
    
    if (ebx_1 != eax)
        void* edi_2 = 0
        eax = sub_6b49d0(ebx_1, eax, edi_2)
        arg2[1] = edi_2 + ebx_1
else if (edx_1 u< arg1)
    sub_4247b0(arg2, edx_1, ecx_3 - eax + arg1)
    int128_t* ecx_2 = arg2[1]
    void* eax_3 = *arg2 - ecx_2
    
    if (eax_3 != neg.d(arg1))
        sub_6bc670(ecx_2, 0, eax_3 + arg1)
    
    int32_t eax_6 = *arg2 + arg1
    arg2[1] = eax_6
    return eax_6

return eax
