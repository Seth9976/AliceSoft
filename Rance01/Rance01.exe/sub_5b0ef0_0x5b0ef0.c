// 函数: sub_5b0ef0
// 地址: 0x5b0ef0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t edx_22 = zx.d(*(arg2 + 0x12c))
uint32_t esi = zx.d(*(arg1 + 9))

if (edx_22 s>= 1 << esi.b || edx_22.w == 0)
    return 

int32_t edx = *(arg2 + 0x108)
char ecx_4 = (neg.d(zx.d(*(arg1 + 0xb)) * *arg1)).b & 7
arg1 = *(arg1 + 4) + edx

if (esi - 1 u> 7)
    return 

switch (esi)
    case 1
        if (arg1 u> edx)
            do
                edx.b = *arg1
                edx.b u>>= ecx_4
                
                if (edx.b != 0)
                    *(arg2 + 0x130) = 1
                
                arg1 -= 1
                ecx_4 = 0
            while (arg1 u> *(arg2 + 0x108))
    case 2
        if (arg1 u> edx)
            uint32_t esi_2 = *(arg2 + 0x130)
            
            do
                uint32_t edx_3 = zx.d(*arg1) u>> ecx_4 & 3
                
                if (edx_3 s> esi_2)
                    esi_2 = edx_3
                    *(arg2 + 0x130) = edx_3
                
                uint32_t edx_7 = zx.d(*arg1) u>> ecx_4 u>> 2 & 3
                
                if (edx_7 s> esi_2)
                    esi_2 = edx_7
                    *(arg2 + 0x130) = edx_7
                
                uint32_t edx_11 = zx.d(*arg1) u>> ecx_4 u>> 4 & 3
                
                if (edx_11 s> esi_2)
                    esi_2 = edx_11
                    *(arg2 + 0x130) = edx_11
                
                uint32_t edx_14 = zx.d(*arg1) u>> ecx_4 u>> 6
                
                if (edx_14 s> esi_2)
                    esi_2 = edx_14
                    *(arg2 + 0x130) = edx_14
                
                arg1 -= 1
                ecx_4 = 0
            while (arg1 u> *(arg2 + 0x108))
    case 4
        if (arg1 u> edx)
            uint32_t esi_3 = *(arg2 + 0x130)
            
            do
                uint32_t edx_17 = zx.d(*arg1) u>> ecx_4 & 0xf
                
                if (edx_17 s> esi_3)
                    esi_3 = edx_17
                    *(arg2 + 0x130) = edx_17
                
                uint32_t edx_20 = zx.d(*arg1) u>> ecx_4 u>> 4
                
                if (edx_20 s> esi_3)
                    esi_3 = edx_20
                    *(arg2 + 0x130) = edx_20
                
                arg1 -= 1
                ecx_4 = 0
            while (arg1 u> *(arg2 + 0x108))
    case 8
        if (arg1 u> edx)
            uint32_t edx_21 = *(arg2 + 0x130)
            
            do
                uint32_t ecx_5 = zx.d(*arg1)
                
                if (ecx_5 s> edx_21)
                    edx_21 = ecx_5
                    *(arg2 + 0x130) = edx_21
                
                arg1 -= 1
            while (arg1 u> *(arg2 + 0x108))
