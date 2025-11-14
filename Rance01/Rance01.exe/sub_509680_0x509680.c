// 函数: sub_509680
// 地址: 0x509680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
int32_t* result

if (ebx[0x49].b != 0)
    if (ebx[0x4b] == ebx[0x4c])
        result.b = 0
        return result
    
    void* eax = *ebx
    ebx[0x7f] = *(eax + 0x58)
    ebx[0x80] = *(eax + 0x5c)
    int32_t edx_2 = ebx[0xb5]
    ebx[0x81] = *(eax + 0x60)
    __builtin_memcpy(&ebx[0x56], &ebx[0xbb], 0x40)
    __builtin_memcpy(&ebx[0x66], eax + 0xd4, 0x64)
    int32_t ecx_3 = ebx[0xb6]
    ebx[0x50] = edx_2
    int32_t edx_3 = ebx[0xb7]
    ebx[0x51] = ecx_3
    ebx[0x53] = ebx[0xb8]
    int32_t ecx_5 = ebx[0xba]
    ebx[0x52] = edx_3
    ebx[0x54] = ebx[0xb9]
    ebx[0x55] = ecx_5
    int32_t edx_5 = *(eax + 0x48)
    int32_t esi_3 = 0
    
    if (((ebx[0x4c] - ebx[0x4b]) & 0xfffffffc) s> 0)
        while (true)
            void* eax_2 = *ebx
            long double x87_r7_1
            
            if (esi_3 s>= 0)
                int32_t ecx_10 = (*(eax_2 + 0xac) - *(eax_2 + 0xa8)) s>> 2
                
                if (esi_3 s< ecx_10)
                    x87_r7_1 = fconvert.t(*(*(eax_2 + 0xa8) + (esi_3 << 2)))
                else
                    x87_r7_1 = fconvert.t(*(*(eax_2 + 0xa8) + (ecx_10 << 2) - 4))
            else
                x87_r7_1 = fconvert.t(**(eax_2 + 0xa8))
            
            long double x87_r7_2
            
            if (esi_3 + 1 s>= 0)
                int32_t ecx_14 = (*(eax_2 + 0xac) - *(eax_2 + 0xa8)) s>> 2
                
                if (esi_3 + 1 s< ecx_14)
                    x87_r7_2 = fconvert.t(*(*(eax_2 + 0xa8) + (esi_3 << 2) + 4))
                else
                    x87_r7_2 = fconvert.t(*(*(eax_2 + 0xa8) + (ecx_14 << 2) - 4))
            else
                x87_r7_2 = fconvert.t(**(eax_2 + 0xa8))
            
            if (sub_519bf0(esi_3, &ebx[0x4b], edx_5, &ebx[0xb1], 
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_1))), 
                    fconvert.s(fconvert.t(fconvert.s(x87_r7_2)))).b == 0)
                break
            
            void* eax_6 = *ebx
            long double x87_r7_5
            
            if (esi_3 s< 0 || esi_3 s>= (*(eax_6 + 0x8c) - *(eax_6 + 0x88)) s>> 2)
                x87_r7_5 = float.t(0)
            else
                x87_r7_5 = fconvert.t(*(*(eax_6 + 0x88) + (esi_3 << 2)))
            
            ebx[0x82] = fconvert.s(fconvert.t(fconvert.s(x87_r7_5)))
            long double x87_r7_7
            
            if (esi_3 s< 0 || esi_3 s>= (*(eax_6 + 0x9c) - *(eax_6 + 0x98)) s>> 2)
                x87_r7_7 = float.t(0)
            else
                x87_r7_7 = fconvert.t(*(*(eax_6 + 0x98) + (esi_3 << 2)))
            
            ebx[0x83] = fconvert.s(fconvert.t(fconvert.s(x87_r7_7)))
            
            if (sub_519cf0(esi_3, &ebx[0x4b]).b == 0)
                break
            
            int32_t eax_7
            
            if (esi_3 s>= 0)
                eax_7 = ebx[0x4b]
            
            void* const eax_8
            
            if (esi_3 s< 0 || esi_3 s>= (ebx[0x4c] - eax_7) s>> 2)
                eax_8 = nullptr
            else
                eax_8 = *(eax_7 + (esi_3 << 2))
            
            if (sub_4cb360(ebx[1], &ebx[0x41], eax_8, ebx[0x4a]).b == 0)
                break
            
            if (esi_3 s< 0)
                break
            
            result = ebx[0x4b]
            
            if (esi_3 s>= (ebx[0x4c] - result) s>> 2)
                break
            
            if (sub_515340(result[esi_3]).b == 0)
                break
            
            esi_3 += 1
            
            if (esi_3 s>= (ebx[0x4c] - ebx[0x4b]) s>> 2)
                goto label_5098fe
        
        result.b = 0
        return result

label_5098fe:
result.b = 1
return result
