// 函数: sub_6b6f1e
// 地址: 0x6b6f1e
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp_2 = 0x20
int32_t var_8 = 0x771058
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_6b83f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t eax_12 = data_78c474
int32_t var_8_3 = 0x771058 ^ eax_12
int32_t __saved_ebp
int32_t var_44 = eax_12 ^ &__saved_ebp
int32_t* var_1c = &var_44
void* const var_48_6 = &data_6b6f2a
int32_t var_8_4 = 0xfffffffe
int32_t var_c = var_8_3
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6bf5de(8)
int32_t var_8_1 = 0

if (data_796ee8 != 1)
    data_796ee4 = 1
    data_796ee0 = arg3.b
    
    if (arg2 == 0)
        int32_t ebx_1 = DecodePointer(data_79821c)
        int32_t var_34_1 = ebx_1
        
        if (ebx_1 != 0)
            int32_t* edi_1 = DecodePointer(data_798218)
            int32_t* var_30_1 = edi_1
            int32_t var_28_1 = ebx_1
            int32_t* var_2c_1 = edi_1
            
            while (true)
                edi_1 -= 4
                int32_t* var_30_2 = edi_1
                
                if (edi_1 u< ebx_1)
                    break
                
                int32_t eax_3 = sub_6bb7eb()
                
                if (*edi_1 != eax_3)
                    if (edi_1 u< ebx_1)
                        break
                    
                    int32_t eax_4 = DecodePointer(*edi_1)
                    *edi_1 = sub_6bb7eb()
                    eax_4()
                    int32_t eax_6 = DecodePointer(data_79821c)
                    int32_t* eax_7 = DecodePointer(data_798218)
                    
                    if (var_28_1 != eax_6 || var_2c_1 != eax_7)
                        var_28_1 = eax_6
                        var_34_1 = eax_6
                        var_2c_1 = eax_7
                        edi_1 = eax_7
                        int32_t* var_30_3 = edi_1
                    
                    ebx_1 = var_34_1
        
        for (void* const i = &data_72a524; i u< 0x72a530; i += 4)
            int32_t eax_9 = *i
            
            if (eax_9 != 0)
                eax_9()
    
    for (void* const i_1 = &data_72a534; i_1 u< 0x72a538; i_1 += 4)
        int32_t eax_11 = *i_1
        
        if (eax_11 != 0)
            eax_11()

int32_t var_8_2 = 0xfffffffe
int32_t result = $LN17(&__saved_ebp)

if (arg3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_6b705d
    return result

data_796ee8 = 1
__unlock(8)
__endthreadex(arg1)
noreturn
