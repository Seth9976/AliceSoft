// 函数: sub_52e880
// 地址: 0x52e880
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx = arg2
int32_t edi = arg3
int32_t esi = ebx * 2 + 2
arg2 = ebx
bool cond:0 = esi != edi

if (esi s< edi)
    do
        int32_t eax_2 = esi * 7
        void* edi_1 = arg1 + (eax_2 << 3)
        int32_t eax_3
        uint32_t edx_2
        eax_3, edx_2 =
            __allmul(*(arg1 + (eax_2 << 3) + 0x30), *(arg1 + (eax_2 << 3) + 0x34), 0x3e8, 0)
        uint32_t eax_4
        int32_t edx_3
        eax_4, edx_3 = __alldiv(eax_3, edx_2, data_797de8, data_797dec)
        int32_t eax_6
        uint32_t edx_5
        eax_6, edx_5 = __allmul(*(edi_1 - 8), *(edi_1 - 4), 0x3e8, 0)
        uint32_t eax_7
        int32_t edx_6
        eax_7, edx_6 = __alldiv(eax_6, edx_5, data_797de8, data_797dec)
        
        if (edx_3 s>= edx_6 && (edx_3 s> edx_6 || eax_4 u> eax_7))
            esi -= 1
        
        int32_t* ebx_1 = arg1 + ebx * 0x38
        int32_t* edi_2 = arg1 + esi * 0x38
        sub_401180(ebx_1, 0xffffffff, edi_2, 0)
        ebx_1[7] = edi_2[7]
        sub_52d8c0(&ebx_1[8], &edi_2[8])
        ebx_1[0xc] = edi_2[0xc]
        ebx_1[0xd] = edi_2[0xd]
        ebx = esi
        esi = esi * 2 + 2
    while (esi s< arg3)
    
    edi = arg3
    cond:0 = esi != edi

if (not(cond:0))
    int32_t* ebx_2 = arg1 + ebx * 0x38
    sub_401180(ebx_2, 0xffffffff, arg1 + edi * 0x38 - 0x38, 0)
    ebx_2[7] = *(arg1 + edi * 0x38 - 0x1c)
    sub_52d8c0(&ebx_2[8], arg1 + edi * 0x38 - 0x18)
    ebx_2[0xc] = *(arg1 + edi * 0x38 - 8)
    ebx_2[0xd] = *(arg1 + edi * 0x38 - 4)
    ebx = edi - 1

int32_t var_1c_5 = arg5
return sub_52e9f0(arg1, ebx, arg2, arg4)
