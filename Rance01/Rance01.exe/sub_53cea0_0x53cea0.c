// 函数: sub_53cea0
// 地址: 0x53cea0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7181e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_30
int32_t eax_2 = data_78c474 ^ &var_30
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_30 = arg2
int32_t* result = arg1[0x66]

if (result == arg1[0x90])
    if (sub_4022d0(0x74cbac, 0x74cb5c) == 0)
        if (sub_4022d0(0x74cbac, 0x74cbec) != 0)
            arg1[0x92] = &arg1[0x77]
            arg1[0x93] = arg1
            result = sub_54f200(0x74cbec, &arg1[0x92])
            goto label_53d01b
        
        if (sub_4022d0(0x74cbac, 0x74cbfc) != 0)
            arg1[0x92] = &arg1[0x77]
            arg1[0x93] = arg1
            result = sub_54f200(0x74cbfc, &arg1[0x92])
            goto label_53d01b
        
        if (sub_4022d0(0x74cbac, 0x74cb6c) != 0)
            arg1[0x92] = &arg1[0x77]
            arg1[0x93] = arg1
            result = sub_54f200(0x74cb6c, &arg1[0x92])
            goto label_53d01b
        
        if (sub_4022d0(0x74cbac, 0x74cbac) != 0)
            arg1[0x92] = &arg1[0x77]
            arg1[0x93] = arg1
            result = sub_54f200(0x74cbac, &arg1[0x92])
            goto label_53d01b
        
        result = sub_4022d0(0x74cbac, 0x74cb7c)
        
        if (result.b != 0)
            result = (*(*arg1 + 0x10))(0x74cb7c)
            goto label_53d01b
    else
        arg1[0x92] = &arg1[0x77]
        arg1[0x93] = arg1
        result = sub_54f200(0x74cb5c, &arg1[0x92])
    label_53d01b:
        int32_t* result_2 = result
        
        if (result_2 != 0)
            result = sub_54a630(arg1)
            int32_t* result_1 = result
            
            if (result_1 != 0)
                int32_t ebp_1 = 0
                result = (*(*result_1 + 0x2c))(eax_4)
                
                if (result s> 0)
                    do
                        if ((**result_2)((*(*result_1 + 0x18))((*(*result_1 + 0x30))(ebp_1))) != 0)
                            int32_t var_4 = 0
                            sub_405150(sub_53d900(), var_30)
                            int32_t var_4_1 = 0xffffffff
                            char var_2c
                            int32_t var_18
                            
                            if (var_18 u>= 0x10)
                                int32_t var_48_5 = var_2c.d
                                sub_6b4d5b()
                            
                            var_18 = 0xf
                            int32_t var_1c_1 = 0
                            var_2c = 0
                        
                        ebp_1 += 1
                        result = (*(*result_1 + 0x2c))()
                    while (ebp_1 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_30)
return result
