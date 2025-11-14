// 函数: sub_6dbf50
// 地址: 0x6dbf50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebp = arg1
int32_t result = 0

if (arg4 s> 0)
    void* edx_1 = nullptr
    int32_t ecx_1 = 0
    
    do
        int32_t i = 0
        
        if (arg3 s> 0)
            int32_t ebp_2 = ecx_1
            void* esi_2 = edx_1
            
            do
                i += 1
                *(arg5 + (ebp_2 << 1)) = zx.w(*(esi_2 + arg1)) - 0x80
                *(arg5 + (ebp_2 << 1) + 0x80) = zx.w(*(esi_2 + arg1 + 1)) - 0x80
                *(arg5 + (ebp_2 << 1) + 0x100) = zx.w(*(esi_2 + arg1 + 2)) - 0x80
                esi_2 += 3
                ebp_2 += 1
            while (i s< arg3)
        
        int32_t ebp_3 = i * 3
        void* esi_3 = edx_1 + ebp_3
        
        if (i s< 8)
            char* edi
            
            if (neg.d(i) + 8 s< 4)
                edi = &(edx_1 + ebp_3 - 3)[arg1]
            else
                edi = &(edx_1 + ebp_3 - 3)[arg1]
                int32_t ebp_7 = i + ecx_1
                
                do
                    i += 3
                    *(arg5 + (ebp_7 << 1)) = zx.w(*(esi_3 + arg1 - 3)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x80) = zx.w(*(esi_3 + arg1 - 2)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x100) = zx.w(*(esi_3 + arg1 - 1)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 2) = zx.w(*(esi_3 + arg1 - 3)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x82) = zx.w(*(esi_3 + arg1 - 2)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x102) = zx.w(*(esi_3 + arg1 - 1)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 4) = zx.w(*(esi_3 + arg1 - 3)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x84) = zx.w(*(esi_3 + arg1 - 2)) - 0x80
                    *(arg5 + (ebp_7 << 1) + 0x104) = zx.w(*(esi_3 + arg1 - 1)) - 0x80
                    ebp_7 += 3
                while (i s< 4)
            
            int16_t* ebp_9 = arg5 + ((i + ecx_1) << 1)
            
            do
                i += 1
                *ebp_9 = zx.w(*edi) - 0x80
                ebp_9[0x40] = zx.w(edi[1]) - 0x80
                ebp_9[0x80] = zx.w(edi[2]) - 0x80
                ebp_9 = &ebp_9[1]
            while (i s< 8)
        
        edx_1 += arg2
        ecx_1 += 8
        result += 1
    while (result s< arg4)
    
    ebp = arg1

int32_t ecx_23 = result * 8
void* edx_4 = (result << 3) + 0xfffffff8

if (result s< 8)
    while (true)
        result += 1
        *(arg5 + (ecx_23 << 1)) = zx.w(*(edx_4 + ebp)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x80) = zx.w(*(edx_4 + ebp + 1)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x100) = zx.w(*(edx_4 + ebp + 2)) - 0x80
        *(arg5 + (ecx_23 << 1) + 2) = zx.w(*(edx_4 + ebp + 3)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x82) = zx.w(*(edx_4 + ebp + 4)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x102) = zx.w(*(edx_4 + ebp + 5)) - 0x80
        *(arg5 + (ecx_23 << 1) + 4) = zx.w(*(edx_4 + ebp + 6)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x84) = zx.w(*(edx_4 + ebp + 7)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x104) = zx.w(*(edx_4 + ebp + 8)) - 0x80
        *(arg5 + (ecx_23 << 1) + 6) = zx.w(*(edx_4 + ebp + 9)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x86) = zx.w(*(edx_4 + ebp + 0xa)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x106) = zx.w(*(edx_4 + ebp + 0xb)) - 0x80
        *(arg5 + (ecx_23 << 1) + 8) = zx.w(*(edx_4 + ebp + 0xc)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x88) = zx.w(*(edx_4 + ebp + 0xd)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x108) = zx.w(*(edx_4 + ebp + 0xe)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0xa) = zx.w(*(edx_4 + ebp + 0xf)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x8a) = zx.w(*(edx_4 + ebp + 0x10)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x10a) = zx.w(*(edx_4 + ebp + 0x11)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0xc) = zx.w(*(edx_4 + ebp + 0x12)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x8c) = zx.w(*(edx_4 + ebp + 0x13)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x10c) = zx.w(*(edx_4 + ebp + 0x14)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0xe) = zx.w(*(edx_4 + ebp + 0x15)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x8e) = zx.w(*(edx_4 + ebp + 0x16)) - 0x80
        *(arg5 + (ecx_23 << 1) + 0x10e) = zx.w(*(edx_4 + ebp + 0x17)) - 0x80
        
        if (result s>= 8)
            break
        
        ecx_23 = result * 8

return result
