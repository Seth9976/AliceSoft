// 函数: sub_551d60
// 地址: 0x551d60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax = arg3[1]
uint32_t ecx_1 = eax u>> 2

if (ecx_1 s< 3)
    eax.b = 1
    return eax

int32_t esi

if (eax != 0)
    esi = *arg3
else
    esi = 0

int32_t eax_1 = 0

if (ecx_1 s> 0)
    do
        if (*(esi + (eax_1 << 2)) == arg4 && *(esi + (eax_1 << 2) + 4) == arg2)
            if (eax_1 s< ecx_1 - 3)
                void* ecx_2 = esi + (eax_1 << 2) + 0x10
                int32_t i_1 = (ecx_1 - 3 - eax_1 - 1) u/ 3 + 1
                int32_t i
                
                do
                    *(ecx_2 - 0x10) = *(ecx_2 - 4)
                    *(ecx_2 - 0xc) = *ecx_2
                    *(ecx_2 - 8) = *(ecx_2 + 4)
                    ecx_2 += 0xc
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            uint32_t dwBytes = arg3[2]
            int32_t esi_2 = arg3[1] - 0xc
            
            if (esi_2 u>= dwBytes)
                uint32_t dwBytes_1 = dwBytes
                dwBytes += esi_2
                arg3[2] = dwBytes
                
                if (dwBytes_1 != neg.d(esi_2))
                    int32_t lpMem = *arg3
                    
                    if (lpMem == 0)
                        dwBytes = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
                    else
                        dwBytes = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
                    
                    *arg3 = dwBytes
                    
                    if (dwBytes == 0)
                        dwBytes.b = 0
                        return dwBytes
            
            arg3[1] = esi_2
            dwBytes.b = 1
            return dwBytes
        
        eax_1 += 3
    while (eax_1 s< ecx_1)

eax_1.b = 1
return eax_1
