// 函数: sub_4f9550
// 地址: 0x4f9550
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_71b0a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_4c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t* var_28 = nullptr
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_c_1 = 0
sub_4f93a0(arg1, &var_28)
char* eax_3 = operator new(0x5c)
char* var_2c = eax_3
var_c_1.b = 1
char* result
char var_34

if (eax_3 == 0)
    result = nullptr
else
    var_34 = *(arg1 + 0x20)
    result = sub_4ffea0(arg1 + 4, eax_3, (var_34.d).b, &var_28)

var_c_1.b = 0
int32_t eax_7 = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2

if (eax_7 s> 0)
    while (true)
        if (ebx s>= 0)
            int32_t eax_8 = *(arg1 + 0x34)
            
            if (ebx s< (*(arg1 + 0x38) - eax_8) s>> 2)
                int32_t eax_9 = *(eax_8 + (ebx << 2))
                
                if (eax_9 != 0)
                    int32_t eax_10 = sub_4f9550(eax_9)
                    
                    if (eax_10 == 0)
                        if (result != 0)
                            sub_4fff40(result)
                            char* result_2 = result
                            sub_6b4d5b()
                        
                        int32_t var_c_4 = 0xffffffff
                        sub_4f5da0(&var_28)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 0
                    
                    int32_t eax_11 = *(result + 0x50)
                    var_34.d = eax_10
                    int32_t ecx_4
                    
                    if (&var_34 u< eax_11)
                        ecx_4 = *(result + 0x4c)
                    
                    if (&var_34 u>= eax_11 || ecx_4 u> &var_34)
                        if (eax_11 == *(result + 0x54))
                            sub_4307a0(&result[0x4c])
                        
                        int32_t* eax_16 = *(result + 0x50)
                        
                        if (eax_16 != 0)
                            *eax_16 = eax_10
                    else
                        if (eax_11 == *(result + 0x54))
                            sub_4307a0(&result[0x4c])
                        
                        int32_t* eax_14 = *(result + 0x50)
                        
                        if (eax_14 != 0)
                            *eax_14 = *(*(result + 0x4c) + ((&var_34 - ecx_4) s>> 2 << 2))
                    
                    *(result + 0x50) += 4
                    ebx += 1
                    
                    if (ebx s>= eax_7)
                        break
                    
                    continue
        
        if (result != 0)
            sub_4fff40(result)
            char* result_1 = result
            sub_6b4d5b()
        
        int32_t var_c_3 = 0xffffffff
        int32_t* ebx_2 = var_28
        
        if (ebx_2 != 0)
            int32_t* esi_5 = ebx_2
            
            if (ebx_2 != var_24)
                do
                    (**esi_5)(0)
                    esi_5 = &esi_5[0xb]
                while (esi_5 != var_24)
            
            int32_t* var_50_5 = ebx_2
            sub_6b4d5b()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0

int32_t var_c_2 = 0xffffffff
int32_t* ebx_1 = var_28

if (ebx_1 != 0)
    int32_t* esi_4 = ebx_1
    
    if (ebx_1 != var_24)
        do
            (**esi_4)(0)
            esi_4 = &esi_4[0xb]
        while (esi_4 != var_24)
    
    int32_t* var_50_3 = ebx_1
    sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
return result
