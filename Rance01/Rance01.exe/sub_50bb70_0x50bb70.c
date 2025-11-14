// 函数: sub_50bb70
// 地址: 0x50bb70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** edi = arg1
*arg3 = 0
int32_t* result

if (sub_50d0f0(arg1, arg2) == 0)
    if (sub_4ae840(edi, arg2 + 0x30) == 0)
        result = nullptr
    else
        struct IMemory::common::CIMemory::VTable** eax_14 = sub_4ae920(edi, arg2 + 0x30)
        
        if (eax_14 != 0)
            void* edi_2 = **(arg2 + 0x28)
            int32_t eax_18 = (*eax_14)->vFunc_6((*eax_14)->vFunc_5(eax_2))
            *(arg2 + 0x28)
            int32_t* eax_19 = (*(edi_2 + 8))(eax_18)
            (*eax_14)->vFunc_1()
            
            if (eax_19 == 0)
                result = nullptr
            else
                int32_t* result_2 = sub_50c620(eax_19, arg2)
                char eax_23 = (*(*eax_19 + 0x28))()
                void* edx_10 = *eax_19
                *arg3 = eax_23
                (*(edx_10 + 4))()
                result = result_2
        else
            if (edi[5] u>= 0x10)
                edi = *edi
            
            void** var_38_6 = edi
            sub_51ddc0(0x7542f8)
            result = nullptr
else
    int32_t var_1c = 0
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_4 = 0
    
    if (sub_50c390(edi, arg2) != 0)
        int32_t edx_1 = var_1c
        
        if (edx_1 != var_18_1)
            int32_t* eax_9 = (*(**(arg2 + 0x28) + 8))(edx_1, var_18_1 - edx_1)
            
            if (eax_9 != 0)
                int32_t* result_1 = sub_50c620(eax_9, arg2)
                char eax_11 = (*(*eax_9 + 0x28))(eax_2)
                void* edx_4 = *eax_9
                *arg3 = eax_11
                (*(edx_4 + 4))()
                sub_65ab60(&var_1c)
                result = result_1
            else
                sub_65ab60(&var_1c)
                result = nullptr
        else if (edx_1 == 0)
            result = nullptr
        else
            int32_t var_38_3 = edx_1
            sub_6b4d5b()
            result = nullptr
    else
        int32_t eax_6 = var_1c
        
        if (eax_6 != 0)
            int32_t var_38_2 = eax_6
            sub_6b4d5b()
        
        result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
