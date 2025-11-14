// 函数: sub_563af0
// 地址: 0x563af0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71156b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x4e8c)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t arg_4e80
fsbase->NtTib.ExceptionList = &arg_4e80
int32_t __saved_esi
int32_t j_2 = (*(*arg1 + 0x10))(data_78c474 ^ &__saved_esi)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = (*(*arg1 + 0x14))()
ExceptionList = ExceptionList_1
__builtin_memset(&__return_addr, 0, 0xc)
int32_t arg_4e88 = 0

if ((*(*arg1 + 0x18))() == 0x20)
    sub_404f60(ExceptionList_1 * j_2 * 3, &__return_addr)
    void* const __return_addr_1 = __return_addr
    char* esi_2 = (*(*arg1 + 8))(0, 0)
    int32_t eax_15 = (*(*arg1 + 0x1c))() - (j_2 << 2)
    
    if (ExceptionList s> 0)
        struct _EXCEPTION_REGISTRATION_RECORD* var_4 = ExceptionList
        struct _EXCEPTION_REGISTRATION_RECORD* i
        
        do
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t j
                
                do
                    *__return_addr_1 = *esi_2
                    *(__return_addr_1 + 1) = esi_2[1]
                    *(__return_addr_1 + 2) = esi_2[2]
                    __return_addr_1 += 3
                    esi_2 = &esi_2[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            esi_2 = &esi_2[eax_15]
            i = var_4
            var_4 -= 1
        while (i != 1)
    
    ExceptionList_1 = ExceptionList

void arg_10
void* const result

if (sub_6c6f00(&arg_10) == 0)
    int32_t j_3 = j_2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = ExceptionList_1
    int32_t arg_24 = 3
    int32_t arg_28 = 2
    
    if (arg2[5] u< 0x10)
        int32_t* arg_30 = arg2
    else
        arg_30 = *arg2
    
    int32_t arg_44 = 3
    int32_t arg_48 = 3
    int32_t arg_4c = 2
    int32_t j_4 = j_2
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = ExceptionList_1
    int32_t arg_60 = 0x5a
    void* const __return_addr_2
    void* const __return_addr_5
    int32_t arg_20
    
    if ((*(*arg1 + 0x18))() != 0x20)
        __return_addr_5 = (*(*arg1 + 8))(0, 0)
        int32_t eax_22 = (*(*arg1 + 0x10))()
        int32_t eax_25 = (*(*arg1 + 0x1c))() - eax_22 * 3
        __return_addr_2 = __return_addr
        arg_20 = eax_25
    else
        __return_addr_2 = __return_addr
        __return_addr_5 = __return_addr_2
        arg_20 = 0
    
    if (sub_6c8ba0(&arg_10, 8) == 0)
        sub_6c7690(&arg_10)
        
        if (__return_addr_2 != 0)
            void* const __return_addr_4 = __return_addr_2
            sub_6b4d5b()
        
        result.b = 1
    else
        sub_6c7690(&arg_10)
        
        if (__return_addr_2 == 0)
            result.b = 0
        else
            void* const __return_addr_3 = __return_addr_2
            sub_6b4d5b()
            result.b = 0
else
    result = __return_addr
    
    if (result != 0)
        void* const result_1 = result
        sub_6b4d5b()
    
    result.b = 0

fsbase->NtTib.ExceptionList = arg_4e80
sub_6b4885(eax_2 ^ &ExceptionList)
return result
