// 函数: sub_5543e0
// 地址: 0x5543e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2
int32_t* ebx

if (arg2 u< eax_1)
    ebx = *(*(arg1 + 8) + (arg2 << 2))
else
    ebx = nullptr

int32_t* ebp

if (arg3 u< eax_1)
    ebp = *(*(arg1 + 8) + (arg3 << 2))
else
    ebp = nullptr

BOOL lpMem

if (ebx != 0 && ebp != 0)
    int32_t edi_2 = ebx[1]
    BOOL lpMem_3 = 0
    void* var_8_1 = nullptr
    int32_t var_4_1 = 0
    
    if (edi_2 u<= 0)
    label_554484:
        int32_t edi_3 = ebp[1]
        
        if (edi_3 != 0)
            if (sub_54fa60(ebx, edi_3) == 0)
                BOOL lpMem_1 = lpMem_3
                
                if (lpMem_1 != 0)
                    HeapFree(data_797df4, HEAP_NONE, lpMem_1)
                
                lpMem_1.b = 0
                return lpMem_1
            
            void* ecx_2 = ebp[1]
            int128_t* eax_9
            
            if (ecx_2 != 0)
                eax_9 = *ebp
            else
                eax_9 = nullptr
            
            int128_t* ebx_1
            
            if (ebx[1] != 0)
                ebx_1 = *ebx
            else
                ebx_1 = nullptr
            
            sub_6c02a0(ebx_1, eax_9, ecx_2)
        else
            ebx[1] = edi_3
        
        if (var_8_1 != 0)
            if (sub_54fa60(ebp, var_8_1) == 0)
                sub_560430(&lpMem_3)
                BOOL eax_12
                eax_12.b = 0
                return eax_12
            
            int128_t* eax_13
            
            if (ebp[1] != 0)
                eax_13 = *ebp
            else
                eax_13 = nullptr
            
            sub_6c02a0(eax_13, lpMem_3, var_8_1)
        else
            ebp[1] = var_8_1
        
        BOOL lpMem_2 = lpMem_3
        
        if (lpMem_2 != 0)
            HeapFree(data_797df4, HEAP_NONE, lpMem_2)
        
        lpMem_2.b = 1
        return lpMem_2
    
    if (sub_427ad0(&lpMem_3, edi_2) != 0)
        void* edx = ebx[1]
        int128_t* ecx_1
        
        if (edx != 0)
            ecx_1 = *ebx
        else
            ecx_1 = nullptr
        
        int32_t eax_5 = neg.d(var_8_1)
        sub_6c02a0(sbb.d(eax_5, eax_5, var_8_1 != 0) & lpMem_3, ecx_1, edx)
        goto label_554484
    
    lpMem = lpMem_3
    
    if (lpMem != 0)
        HeapFree(data_797df4, HEAP_NONE, lpMem)

lpMem.b = 0
return lpMem
