// 函数: sub_64f5e0
// 地址: 0x64f5e0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_71c66b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_188 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CDialog::dpparts::CDialogSelectViewItem::VTable* dwInitParam
sub_636a50(&dwInitParam)
int32_t var_4 = 0
sub_65b9a0(*(arg1 + 0x8c))
int32_t var_17c
int32_t var_163 = var_17c
int32_t var_178
int32_t var_15f = var_178
int32_t var_174
int32_t var_15b = var_174
int32_t var_170
int32_t var_157 = var_170
int32_t var_16c
int32_t var_153 = var_16c
char var_164

if (var_164 != 0)
    sub_636f50(&dwInitParam, &var_163)

int32_t* result = &var_17c
sub_637490(result, DialogBoxParamA(*(arg1 + 0x18), 0x84, arg2, sub_6a46f0, &dwInitParam), 
    &dwInitParam)
void* ecx_5 = *(*(arg1 + 0x8c) + 0x108)

if (ecx_5 != 0)
    void* ecx_6 = *(ecx_5 + 0x8c)
    
    if (ecx_6 != 0)
        result = sub_63c540(ecx_6, &var_17c)

fsbase->NtTib.ExceptionList = ExceptionList
return result
