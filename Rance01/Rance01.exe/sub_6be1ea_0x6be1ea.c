// 函数: sub_6be1ea
// 地址: 0x6be1ea
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_1 = 0x14
int32_t var_8 = 0x771248
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_15 = data_78c474
int32_t var_8_3 = 0x771248 ^ eax_15
int32_t __saved_ebp
int32_t var_38 = eax_15 ^ &__saved_ebp
int32_t* var_1c = &var_38
void* const var_3c_8 = &data_6be1f6
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = 0xffffffff
uint32_t* eax = __getptd()
sub_6bdee1()
void* ebx = eax[0x1a]
uint32_t eax_1 = sub_6bdf85(arg1)

if (eax_1 == *(ebx + 4))
    result = 0
else
    int32_t* eax_2 = sub_6b8223(0x220)
    
    if (eax_2 != 0)
        __builtin_memcpy(eax_2, eax[0x1a], 0x220)
        *eax_2 = 0
        int32_t result_1 = sub_6be001(eax_1, eax_2)
        result = result_1
        
        if (result_1 == 0)
            if (InterlockedDecrement(eax[0x1a]) == 0)
                int32_t eax_4 = eax[0x1a]
                
                if (eax_4 != 0x78c6a0)
                    __free_base(eax_4)
            
            eax[0x1a] = eax_2
            InterlockedIncrement(eax_2)
            
            if ((eax[0x1c].b & 2) == 0 && (data_78cbc0.b & 1) == 0)
                sub_6bf5de(0xd)
                int32_t var_8_1 = 0
                data_797948 = eax_2[1]
                data_79794c = eax_2[2]
                data_797950 = eax_2[3]
                int32_t eax_8 = 0
                
                while (true)
                    int32_t var_20_1 = eax_8
                    
                    if (eax_8 s>= 5)
                        break
                    
                    *((eax_8 << 1) + &data_79793c) = *(eax_2 + (eax_8 << 1) + 0x10)
                    eax_8 += 1
                
                void* eax_9 = nullptr
                int16_t ecx_4
                
                while (true)
                    void* var_20_2 = eax_9
                    
                    if (eax_9 s>= 0x101)
                        break
                    
                    ecx_4.b = *(eax_9 + eax_2 + 0x1c)
                    *(eax_9 + 0x78c8c0) = ecx_4.b
                    eax_9 += 1
                
                void* eax_10 = nullptr
                
                while (true)
                    void* var_20_3 = eax_10
                    
                    if (eax_10 s>= 0x100)
                        break
                    
                    ecx_4.b = *(eax_10 + eax_2 + 0x11d)
                    *(eax_10 + 0x78c9c8) = ecx_4.b
                    eax_10 += 1
                
                if (InterlockedDecrement(data_78cac8) == 0)
                    int32_t eax_12 = data_78cac8
                    
                    if (eax_12 != 0x78c6a0)
                        __free_base(eax_12)
                
                data_78cac8 = eax_2
                InterlockedIncrement(eax_2)
                int32_t var_8_2 = 0xfffffffe
                sub_6be34b()
        else if (result_1 == 0xffffffff)
            if (eax_2 != 0x78c6a0)
                __free_base(eax_2)
            
            *__errno() = 0x16

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6be383
return result
