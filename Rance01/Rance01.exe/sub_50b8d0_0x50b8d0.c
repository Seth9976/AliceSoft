// 函数: sub_50b8d0
// 地址: 0x50b8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71f910
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMemory::common::CIMemory::VTable** arg_4
struct IMemory::common::CIMemory::VTable** ebx = arg_4
int32_t* result

if (sub_50d0f0(ebx, arg1) == 0)
    if (sub_4ae840(ebx, arg1 + 0x30) == 0)
        result = nullptr
    else
        struct IMemory::common::CIMemory::VTable** eax_20 = sub_4ae920(ebx, arg1 + 0x30)
        
        if (eax_20 != 0)
            void* ebx_2 = **(arg1 + 0x28)
            int32_t eax_24 = (*eax_20)->vFunc_6((*eax_20)->vFunc_5(eax_2))
            *(arg1 + 0x28)
            int32_t* eax_25 = (*(ebx_2 + 8))(eax_24)
            (*eax_20)->vFunc_1()
            
            if (eax_25 == 0)
                result = nullptr
            else
                arg_4 = nullptr
                char eax_28 = sub_50c430(arg1, arg2, &arg_4)
                struct IMemory::common::CIMemory::VTable** esi_13
                
                if (eax_28 != 0)
                    esi_13 = arg_4
                
                if (eax_28 == 0 || esi_13 == 0)
                    (*(*eax_25 + 4))()
                    result = nullptr
                else
                    void* ebp_1 = **(arg1 + 0x28)
                    int32_t eax_33 = (*esi_13)->vFunc_6((*esi_13)->vFunc_5())
                    *(arg1 + 0x28)
                    int32_t* eax_34 = (*(ebp_1 + 8))(eax_33)
                    
                    if (eax_34 != 0)
                        (*esi_13)->vFunc_1()
                        int32_t* result_2 = sub_50c480(eax_34, arg1, eax_25)
                        (*(*eax_25 + 4))()
                        (*(*eax_34 + 4))()
                        result = result_2
                    else
                        (*(*eax_25 + 4))()
                        (*esi_13)->vFunc_1()
                        result = nullptr
        else
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            struct IMemory::common::CIMemory::VTable** var_48_10 = ebx
            sub_51ddc0(0x7542f8)
            result = nullptr
else
    int32_t var_2c = 0
    int32_t var_28_1 = 0
    int32_t var_24_1 = 0
    int32_t var_4 = 0
    
    if (sub_50c390(ebx, arg1) != 0)
        int32_t edx_1 = var_2c
        
        if (edx_1 != var_28_1)
            int32_t* eax_9 = (*(**(arg1 + 0x28) + 8))(edx_1, var_28_1 - edx_1)
            
            if (eax_9 == 0)
                sub_65ab60(&var_2c)
                result = nullptr
            else
                void** esi_2 = arg2
                
                if (sub_50d0f0(esi_2, arg1) != 0)
                    int32_t var_1c = 0
                    int32_t var_18_1 = 0
                    int32_t var_14_1 = 0
                    var_4.b = 1
                    char eax_12 = sub_50c390(arg2, arg1)
                    int32_t* eax_16
                    
                    if (eax_12 != 0)
                        int32_t eax_14 = var_1c
                        eax_16 = (*(**(arg1 + 0x28) + 8))(eax_14, var_18_1 - eax_14)
                    
                    if (eax_12 == 0 || eax_16 == 0)
                        (*(*eax_9 + 4))(eax_2)
                        sub_65ab60(&var_1c)
                        sub_65ab60(&var_2c)
                        result = nullptr
                    else
                        int32_t* result_1 = sub_50c480(eax_16, arg1, eax_9)
                        (*(*eax_9 + 4))(eax_2)
                        (*(*eax_16 + 4))()
                        sub_65ab60(&var_1c)
                        sub_65ab60(&var_2c)
                        result = result_1
                else
                    (*(*eax_9 + 4))(eax_2)
                    
                    if (esi_2[5] u>= 0x10)
                        esi_2 = *esi_2
                    
                    void** var_48_6 = esi_2
                    sub_51ddc0(0x7541f8)
                    sub_65ab60(&var_2c)
                    result = nullptr
        else if (edx_1 == 0)
            result = nullptr
        else
            int32_t var_48_3 = edx_1
            sub_6b4d5b()
            result = nullptr
    else
        int32_t eax_5 = var_2c
        
        if (eax_5 != 0)
            int32_t var_48_2 = eax_5
            sub_6b4d5b()
        
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
