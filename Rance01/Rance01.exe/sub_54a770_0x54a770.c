// 函数: sub_54a770
// 地址: 0x54a770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg2
arg2 = nullptr
int32_t* eax = sub_53da10(ebx, 0x74cb5c, 0)

if (eax != 0 && arg3 s< (*(*eax + 0x2c))())
    void* ebp = *eax
    int32_t eax_6 = (*(ebp + 0x18))((*(ebp + 0x30))(arg3))
    int32_t eax_7
    int32_t edx_5
    edx_5:eax_7 = muls.dp.d(0x6bca1af3, ebx[0x2f] - ebx[0x2e])
    int32_t edx_6 = edx_5 s>> 5
    
    if (eax_6 u< (edx_6 u>> 0x1f) + edx_6)
        int32_t ecx_6 = eax_6 * 0x4c
        
        if (ecx_6 != neg.d(ebx[0x2e]))
            int32_t* ecx_8 = ecx_6 + ebx[0x2e] + 4
            *(arg1 + 0x14) = 0xf
            *(arg1 + 0x10) = 0
            *arg1 = 0
            sub_401180(arg1, 0xffffffff, ecx_8, 0)
            return arg1
    
    *(arg1 + 0x14) = 0xf
    *(arg1 + 0x10) = 0
    *arg1 = 0
    return arg1

*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0xf
*arg1 = 0
return arg1
