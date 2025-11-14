// 函数: sub_4b55f0
// 地址: 0x4b55f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg1 == arg2)
    return 

int32_t ecx_1 = arg2[1]
int128_t* eax = *arg2
int32_t edx_3 = (ecx_1 - eax) s>> 2

if (edx_3 == 0)
    int128_t* ecx_2 = arg1[1]
    int128_t* edi_1 = *arg1
    
    if (edi_1 != ecx_2)
        int32_t ebx_1 = 0 s>> 2 << 2
        sub_6b49d0(edi_1, ecx_2, ebx_1)
        arg1[1] = ebx_1 + edi_1
    
    return 

int128_t* ebp_1 = *arg1
int32_t edi_4 = (arg1[1] - ebp_1) s>> 2

if (edx_3 u<= edi_4)
    sub_6b49d0(ebp_1, eax, ((ecx_1 - eax) s>> 2) * 4)
    arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 2 << 2)
    return 

if (edx_3 u<= (arg1[2] - ebp_1) s>> 2)
    void* edi_5 = eax + (edi_4 << 2)
    sub_6b49d0(ebp_1, eax, ((edi_5 - eax) s>> 2) * 4)
    int32_t ebx_3 = (arg2[1] - edi_5) s>> 2 << 2
    arg1[1] = sub_6b49d0(arg1[1], edi_5, ebx_3) + ebx_3
    return 

if (ebp_1 != 0)
    int128_t* var_14_4 = ebp_1
    sub_6b4d5b()

if (sub_618020(arg1, (arg2[1] - *arg2) s>> 2) != 0)
    arg1[1] = sub_591bf0(*arg2, arg2[1], *arg1)
