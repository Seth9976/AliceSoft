// 函数: sub_58a950
// 地址: 0x58a950
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7113d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct graphengine::CGraphicsObjectManager<class graphengine::CTexture, class ITexture>::VTable** 
    var_18 = arg1
*arg1 = &graphengine::CGraphicsObjectManager<class graphengine::CTexture, class ITexture>::`vftable'
int32_t var_4 = 1
sub_58ad40(arg1)
void* var_14 = &arg1[5]
var_4.b = 2
int32_t* eax_4 = arg1[6]
void var_10
sub_58bc40(&arg1[5], &var_10, *eax_4, eax_4)
int32_t var_2c_1 = arg1[6]
sub_6b4d5b()
int32_t result = arg1[1]

if (result != 0)
    int32_t result_1 = result
    result = sub_6b4d5b()

arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
