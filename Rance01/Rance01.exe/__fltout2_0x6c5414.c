// 函数: __fltout2
// 地址: 0x6c5414
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t __saved_ebp
int32_t eax_1 = data_78c474 ^ &__saved_ebp
int32_t edi
int32_t var_40 = edi
int32_t var_34
void arg_4
sub_6c5361(&var_34, &arg_4)
int16_t var_24
int16_t* var_44_1 = &var_24
char var_48_1 = 0
int32_t var_4c = 0x11
int32_t var_58 = var_34
uint32_t var_54
uint32_t* edi_1 = &var_54
void var_30
void* esi = &var_30
*edi_1 = *esi
edi_1[1].w = *(esi + 4)
int16_t var_50
arg1[2] = sub_6c5d7e(var_58, var_54, var_50, var_4c, var_48_1, var_44_1)
char var_22
*arg1 = sx.d(var_22)
arg1[1] = sx.d(var_24)
void var_20
void* var_5c = &var_20

if (sub_6b5353(arg2, arg3, var_5c) != 0)
    __builtin_memset(&var_54, 0, 0x14)
    sub_6b86b7()
    noreturn

arg1[3] = arg2
sub_6b4885(eax_1 ^ &__saved_ebp)
return arg1
