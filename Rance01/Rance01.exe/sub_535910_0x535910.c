// 函数: sub_535910
// 地址: 0x535910
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_725fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_2c
int32_t eax_2 = data_78c474 ^ &var_2c
int32_t __saved_edi
int32_t var_38 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg1

if (&result[4] u> arg1[1])
    result.b = 0
else
    *arg2 = ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg1 += 4
    result = *arg1
    
    if (&result[4] u> arg1[1])
        result.b = 0
    else
        arg2[1] =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg1 += 4
        int32_t edx_16 = arg2[1]
        
        if (edx_16 - 0xa u> 0x2a)
        label_535a36:
            int32_t var_3c_4 = edx_16
            sub_604c90(0x751c30)
            result.b = 0
        else
            switch (edx_16 + &jump_table_535a64[1]:2)
                case &lookup_table_535a74, &lookup_table_535a74[8], &lookup_table_535a74[9], 
                        &lookup_table_535a74[0xa], &lookup_table_535a74[0xb], 
                        &lookup_table_535a74[0xc], &lookup_table_535a74[0xd], 
                        &lookup_table_535a74[0xe], &lookup_table_535a74[0xf], 
                        &lookup_table_535a74[0x11], &lookup_table_535a74[0x16], 
                        &lookup_table_535a74[0x25], &lookup_table_535a74[0x29], 
                        &lookup_table_535a74[0x2a]
                    if (sub_5546f0(arg1, &arg2[2]).b != 0)
                        result.b = 1
                    else
                        result.b = 0
                case &lookup_table_535a74[1]
                    if (sub_554730(arg1, &arg2[3]).b != 0)
                        result.b = 1
                    else
                        result.b = 0
                case &lookup_table_535a74[2]
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    var_2c = 0
                    int32_t var_4 = 0
                    
                    if (sub_410070(arg1, &var_2c) != 0)
                        sub_401180(&arg2[4], 0xffffffff, &var_2c, 0)
                        sub_401110(&var_2c)
                        result.b = 1
                    else
                        sub_401110(&var_2c)
                        result.b = 0
                case &lookup_table_535a74[3], &lookup_table_535a74[4], &lookup_table_535a74[5], 
                        &lookup_table_535a74[6], &lookup_table_535a74[7], 
                        &lookup_table_535a74[0x10], &lookup_table_535a74[0x12], 
                        &lookup_table_535a74[0x13], &lookup_table_535a74[0x14], 
                        &lookup_table_535a74[0x15], &lookup_table_535a74[0x17], 
                        &lookup_table_535a74[0x18], &lookup_table_535a74[0x19], 
                        &lookup_table_535a74[0x1a], &lookup_table_535a74[0x1b], 
                        &lookup_table_535a74[0x1c], &lookup_table_535a74[0x1d], 
                        &lookup_table_535a74[0x1e], &lookup_table_535a74[0x1f], 
                        &lookup_table_535a74[0x20], &lookup_table_535a74[0x21], 
                        &lookup_table_535a74[0x22], &lookup_table_535a74[0x23], 
                        &lookup_table_535a74[0x24], &lookup_table_535a74[0x26], 
                        &lookup_table_535a74[0x27], &lookup_table_535a74[0x28]
                    goto label_535a36

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_2c)
return result
