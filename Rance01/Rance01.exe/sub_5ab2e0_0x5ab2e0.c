// 函数: sub_5ab2e0
// 地址: 0x5ab2e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg3
arg3.b = *(arg1 + 8)

if ((arg3.b & 2) == 0)
    return 

int32_t i_2 = *arg1
arg1.b = *(arg1 + 9)

if (arg1.b != 8)
    if (arg1.b == 0x10)
        int32_t ebp_1
        
        if (arg3.b == 2)
            ebp_1 = 6
        label_5ab34b:
            
            if (i_2 != 0)
                arg1 = edi + 1
                int32_t i_3 = i_2
                int32_t i
                
                do
                    uint16_t esi_4 = (zx.d(*(arg1 + 1)) << 8).w | zx.w(*(arg1 + 2))
                    uint32_t ecx_5 = zx.d(((zx.d(*(arg1 - 1)) << 8).w | zx.w(*arg1)) + esi_4)
                    uint32_t edx_5 = zx.d(((zx.d(*(arg1 + 3)) << 8).w | zx.w(*(arg1 + 4))) + esi_4)
                    *arg1 = ecx_5.b
                    *(arg1 - 1) = (ecx_5 u>> 8).b
                    *(arg1 + 3) = (edx_5 u>> 8).b
                    *(arg1 + 4) = edx_5.b
                    arg1 += ebp_1
                    i = i_3
                    i_3 -= 1
                while (i != 1)
        else if (arg3.b == 6)
            ebp_1 = 8
            goto label_5ab34b
else
    int32_t esi_1
    
    if (arg3.b == 2)
        esi_1 = 3
    label_5ab313:
        
        if (i_2 != 0)
            void* eax = edi + 2
            int32_t i_1
            
            do
                arg3.b = *(eax - 1)
                *(eax - 2) += arg3.b
                *eax += arg3.b
                eax += esi_1
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else if (arg3.b == 6)
        esi_1 = 4
        goto label_5ab313
