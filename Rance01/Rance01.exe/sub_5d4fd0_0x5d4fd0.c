// 函数: sub_5d4fd0
// 地址: 0x5d4fd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_7 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71dfc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_74
int32_t eax_2 = data_78c474 ^ &var_74
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0x1c)

if (eax_5 != 0)
    (*(*eax_5 + 8))(eax_5)
    *(arg1 + 0x1c) = 0

int32_t* eax_6 = *(arg1 + 0x18)

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)
    *(arg1 + 0x18) = 0

int32_t var_64
__builtin_memset(&var_64, 0, 0x18)
int32_t var_4 = 0
int32_t var_54
int128_t* var_50
void var_28
int32_t* result
int16_t var_26
int32_t* var_58

if (sub_5d9860(&var_28, &var_64, arg2, arg3, &var_50, &var_54, *(arg1 + 0x28)).b == 0)
    sub_402cb0(arg1 + 0x60, 0x736cb8, 0x17)
    int32_t var_4_1 = 0xffffffff
    
    if (var_58 != 0)
        (*(*var_58 + 4))(eax_4)
    
    result.b = 0
else
    int16_t var_1a
    
    if (var_26 != 1 && var_26 != 2)
        sub_402cb0(arg1 + 0x60, 0x736cd0, 0x11)
        int32_t var_4_2 = 0xffffffff
        
        if (var_58 == 0)
            result.b = 0
        else
            (*(*var_58 + 4))(eax_4)
            result.b = 0
    else
        int32_t var_24
        
        if (var_1a != 8 && var_1a != 0x10)
            sub_402cb0(arg1 + 0x60, 0x736ce4, 0x11)
            int32_t var_4_3 = 0xffffffff
            
            if (var_58 == 0)
                result.b = 0
            else
                (*(*var_58 + 4))(eax_4)
                result.b = 0
        else if (var_24 == 0x5622 || var_24 == 0xac44)
            int32_t edi_2 = var_54
            int32_t eax_20
            uint32_t edx_6
            edx_6:eax_20 = mulu.dp.d(edi_2, 0x3e8)
            int32_t var_20
            *(arg1 + 0x44) = __alldiv(eax_20, edx_6, var_20, 0)
            int32_t var_4c
            __builtin_memset(&var_4c, 0, 0x24)
            int32_t var_38_1 = 0
            int32_t var_30_1 = 0
            int32_t var_2c_1 = 0
            void* var_3c_1 = &var_28
            int32_t* eax_22 = *(arg1 + 0x14)
            var_4c = 0x24
            int32_t var_48_1 = 0x8188
            int32_t var_34_1 = 0
            char const* const var_8c_4
            int32_t* ecx_9
            
            if ((*(*eax_22 + 0xc))(eax_22, &var_4c, arg1 + 0x18, 0) s>= 0)
                int32_t* eax_27 = *(arg1 + 0x18)
                int128_t* var_6c = nullptr
                var_74 = nullptr
                int128_t* var_68 = nullptr
                void* var_70 = nullptr
                
                if ((*(*eax_27 + 0x2c))(eax_27, 0, edi_2, &var_6c, &var_74, &var_68, &var_70, 0)
                        s< 0)
                    sub_402cb0(arg1 + 0x60, 0x736d34, 0x27)
                    
                    if (**(arg1 + 0x10) != 0)
                        goto label_5d5233
                    
                    var_8c_4 = "DirectSound"
                    goto label_5d5225
                
                int128_t* esi_1 = var_50
                sub_6c02a0(var_6c, esi_1, var_74, eax_4)
                int128_t* eax_32 = var_68
                
                if (eax_32 != 0)
                    sub_6c02a0(eax_32, var_74 + esi_1, var_70)
                    eax_32 = var_68
                
                int32_t* ebp_1 = *(arg1 + 0x18)
                int32_t var_4_6 = 0xffffffff
                ecx_9 = var_58
                
                if ((*(*ebp_1 + 0x4c))(ebp_1, var_6c, var_74, eax_32, var_70) s< 0)
                    goto label_5d5244
                
                if (ecx_9 != 0)
                    (*(*ecx_9 + 4))()
                
                result.b = 1
            else
                sub_402cb0(arg1 + 0x60, 0x736d0c, 0x25)
                
                if (**(arg1 + 0x10) != 0)
                    goto label_5d5233
                
                var_8c_4 = "DirectSound"
            label_5d5225:
                sub_604c90(var_8c_4)
                **(arg1 + 0x10) = 1
            label_5d5233:
                int32_t var_4_5 = 0xffffffff
                ecx_9 = var_58
            label_5d5244:
                
                if (ecx_9 != 0)
                    (*(*ecx_9 + 4))(eax_4)
                
                result.b = 0
        else
            sub_402cb0(arg1 + 0x60, 0x736cf8, 0x11)
            int32_t var_4_4 = 0xffffffff
            
            if (var_58 == 0)
                result.b = 0
            else
                (*(*var_58 + 4))(eax_4)
                result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_74)
return result
