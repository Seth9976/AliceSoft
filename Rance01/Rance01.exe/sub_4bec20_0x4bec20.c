// 函数: sub_4bec20
// 地址: 0x4bec20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7241f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebp = arg_4
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
arg_4 = 0xffffffff
sub_4257e0(&var_1c, 0x400, &arg_4)
int32_t var_4 = 0
int32_t* ecx = ebp[5]
int32_t* i = *ecx
int32_t edi = var_1c

if (i != ecx)
    do
        *(edi + (i[3] << 2)) = i[4]
        
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
    while (i != ebp[5])

for (int32_t* i_1 = *ebp; i_1 != ebp[1]; i_1 = &i_1[0x45])
    if (sub_4be5e0(i_1, &var_1c, arg1).b == 0)
        if (edi != 0)
            int32_t var_38_3 = edi
            sub_6b4d5b()
        
        i.b = 0
        goto label_4bed08

if (edi != 0)
    int32_t var_38_2 = edi
    sub_6b4d5b()

i.b = 1
label_4bed08:
fsbase->NtTib.ExceptionList = ExceptionList
return i
