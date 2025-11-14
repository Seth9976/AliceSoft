// 函数: sub_54f630
// 地址: 0x54f630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_712958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 8)
struct _EXCEPTION_REGISTRATION_RECORD** lpMem = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = (*(*ecx + 8))(arg3, arg4)
    
    if (edi_1 == 0)
        result.b = 0
    else
        struct _EXCEPTION_REGISTRATION_RECORD** lpMem_1 = nullptr
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4 = 0
        result = (*edi_1)->__offset(0x14).d(eax_2)
        void* dwBytes = &result[2]
        void* dwBytes_2 = dwBytes
        
        if (result != 0xfffffff8)
            lpMem = HeapAlloc(data_797df4, HEAP_NONE, dwBytes)
            lpMem_1 = lpMem
        
        if (result != 0xfffffff8 && lpMem == 0)
            result.b = 0
        else
            void* dwBytes_1 = dwBytes
            
            if (dwBytes == 0)
                if (lpMem == 0)
                    result.b = 0
                else
                    int32_t var_34_3 = 0
                    HeapFree(data_797df4, HEAP_NONE, lpMem)
                    result.b = 0
            else if (lpMem == 0)
                result.b = 0
            else
                *lpMem = 0x4447
                result.b = *arg1
                *(lpMem + 2) = result.b
                *(lpMem + 3) = arg1[1]
                lpMem[1] = arg4
                sub_6c02a0(&lpMem[2], (*edi_1)->__offset(0x18).d((*edi_1)->__offset(0x14).d()))
                (*edi_1)->Handler()
                
                if (sub_54f270(arg2, &lpMem_1) == 0)
                    HeapFree(data_797df4, HEAP_NONE, lpMem)
                    result.b = 0
                else
                    HeapFree(data_797df4, HEAP_NONE, lpMem)
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
