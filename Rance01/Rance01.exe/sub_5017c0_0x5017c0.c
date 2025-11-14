// 函数: sub_5017c0
// 地址: 0x5017c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_714a82
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 0
int32_t* eax_3 = sub_416b10(1)
*eax_3 = eax_3
eax_3[1] = eax_3
eax_3[2] = eax_3
eax_3[4].b = 1
*(eax_3 + 0x11) = 1
int32_t var_c_1 = 0
int32_t* eax_7 = *(arg1 + 4)
int32_t* i = *eax_7
void var_28

if (i != eax_7)
    do
        sub_5011f0(i[4], &var_28)
        
        if (*(i + 0x15) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0x15) != 0)
                int32_t* i_4 = i[1]
                
                if (*(i_4 + 0x15) == 0)
                    while (i == i_4[2])
                        i = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0x15) != 0)
                            break
                
                i = i_4
            else
                i = i_2
                int32_t* i_3 = *i
                
                while (*(i_3 + 0x15) == 0)
                    i = i_3
                    i_3 = *i
    while (i != *(arg1 + 4))

int32_t* ecx_2 = eax_3
int32_t* i_1 = *ecx_2
int32_t result = 0
int32_t var_2c

while (i_1 != ecx_2)
    void* eax_8 = i_1[3]
    int32_t eax_9
    
    if (*(eax_8 + 8) != 0)
        int32_t* ecx_3 = *(eax_8 + 8)
        int32_t eax_11 = (*(*ecx_3 + 0x14))(eax_2)
        int32_t edx_3 = *(*ecx_3 + 0x10)
        var_2c = eax_11
        int32_t eax_12 = edx_3()
        var_2c = var_2c * eax_12 * 4
        eax_9 = sub_70c710(float.t(var_2c) * fconvert.t(1.5))
        ecx_2 = eax_3
    else
        eax_9 = 0
    
    result += eax_9
    
    if (*(i_1 + 0x11) == 0)
        int32_t* i_5 = i_1[2]
        
        if (*(i_5 + 0x11) != 0)
            int32_t* i_7 = i_1[1]
            
            if (*(i_7 + 0x11) == 0)
                while (i_1 == i_7[2])
                    i_1 = i_7
                    i_7 = i_7[1]
                    
                    if (*(i_7 + 0x11) != 0)
                        break
            
            i_1 = i_7
        else
            i_1 = i_5
            int32_t* i_6 = *i_1
            
            while (*(i_6 + 0x11) == 0)
                i_1 = i_6
                i_6 = *i_1

int32_t var_c_2 = 1
sub_58bc40(&var_28, &var_2c, *ecx_2, ecx_2)
int32_t* var_40_3 = eax_3
sub_6b4d5b()
fsbase->NtTib.ExceptionList = ExceptionList
return result
