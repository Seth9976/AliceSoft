// 函数: sub_551e70
// 地址: 0x551e70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_719428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
int32_t ecx = ebx[1]
uint32_t result = ecx u>> 2

if (result s< 3)
    result.b = 1
else
    int128_t* ebp_1 = nullptr
    int128_t* var_20 = nullptr
    uint32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    void* esi_1
    
    if (ecx != 0)
        esi_1 = *ebx
    else
        esi_1 = nullptr
    
    if (result s> 0)
        void* esi_2 = esi_1 + 8
        int32_t i_1 = (result - 1) u/ 3 + 1
        int32_t i
        
        do
            int32_t eax_5 = *(esi_2 - 4)
            int32_t* ecx_2 = *(esi_2 - 8)
            int32_t edx_2 = *esi_2
            arg_4 = ecx_2
            int32_t var_28 = eax_5
            int32_t var_24 = edx_2
            
            if (eax_5 s> 0)
                void* eax_6 = ebx[5]
                
                if (ecx_2 u< (*(eax_6 + 0xc) - *(eax_6 + 8)) s>> 2)
                    void* ecx_3 = *(*(eax_6 + 8) + (ecx_2 << 2))
                    
                    if (ecx_3 != 0 && *(ecx_3 + 0x18) == edx_2)
                        int32_t* edi_4 = &var_20
                        sub_416780(&arg_4, edi_4)
                        sub_416780(&var_28, edi_4)
                        sub_416780(&var_24, edi_4)
            
            esi_2 += 0xc
            i = i_1
            i_1 -= 1
        while (i != 1)
        ebp_1 = var_20
    
    if (result s> 0 && ebp_1 != var_1c_1)
        void* esi_3 = ((var_1c_1 - ebp_1) s>> 2) * 4
        int32_t eax_14 = ebx[2]
        ebx[1] = 0
        
        if (esi_3 u< eax_14)
        label_551f9c:
            ebx[1] = esi_3
            int128_t* ebx_1
            
            if (esi_3 != 0)
                ebx_1 = *ebx
            else
                ebx_1 = nullptr
            
            sub_6c02a0(ebx_1, ebp_1, esi_3, eax_2)
            goto label_551fc5
        
        uint32_t dwBytes = eax_14 + esi_3
        ebx[2] = dwBytes
        
        if (eax_14 == neg.d(esi_3))
            goto label_551f9c
        
        int32_t lpMem = *ebx
        
        if (lpMem == 0)
            result = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
        else
            result = HeapReAlloc(data_797df4, HEAP_NONE, lpMem, dwBytes)
        
        *ebx = result
        
        if (result != 0)
            goto label_551f9c
        
        if (ebp_1 != 0)
            int128_t* var_44_2 = ebp_1
            sub_6b4d5b()
        
        result.b = 0
    else
        ebx[1] = 0
    label_551fc5:
        
        if (ebp_1 == 0)
            result.b = 1
        else
            int128_t* var_44_4 = ebp_1
            sub_6b4d5b()
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
