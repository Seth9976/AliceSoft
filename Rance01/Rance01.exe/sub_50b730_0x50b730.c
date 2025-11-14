// 函数: sub_50b730
// 地址: 0x50b730
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7287e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
int32_t result

if (sub_50d0f0(ebx, arg1) == 0)
    if (sub_4ae840(ebx, arg1 + 0x30) != 0)
        struct IMemory::common::CIMemory::VTable** eax_14 = sub_4ae920(ebx, arg1 + 0x30)
        
        if (eax_14 == 0)
            if (ebx[5] u>= 0x10)
                ebx = *ebx
            
            void** var_34_5 = ebx
            sub_51ddc0(0x7542f8)
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
        
        void* ebx_1 = **(arg1 + 0x28)
        int32_t eax_19 = (*eax_14)->vFunc_6((*eax_14)->vFunc_5(eax_2))
        *(arg1 + 0x28)
        result = (*(ebx_1 + 8))(eax_19)
        (*eax_14)->vFunc_1()
        
        if (result != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
else
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    int32_t var_4 = 0
    
    if (sub_50c390(ebx, arg1) != 0)
        int32_t edx_1 = var_20
        
        if (edx_1 != var_1c_1)
            result = (*(**(arg1 + 0x28) + 8))(edx_1, var_1c_1 - edx_1)
            sub_65ab60(&var_20)
            
            if (result == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        if (edx_1 != 0)
            int32_t var_34_3 = edx_1
            sub_6b4d5b()
            fsbase->NtTib.ExceptionList = ExceptionList
            return 0
    else
        int32_t eax_5 = var_20
        
        if (eax_5 != 0)
            int32_t var_34_2 = eax_5
            sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return 0
