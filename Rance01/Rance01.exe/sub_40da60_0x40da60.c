// 函数: sub_40da60
// 地址: 0x40da60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7242bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x4020)
int32_t eax_2 = data_78c474 ^ &ExceptionList
int32_t __saved_edi
int32_t var_1c = data_78c474 ^ &__saved_edi
int32_t arg_4014
fsbase->NtTib.ExceptionList = &arg_4014
char outputString = 0
void arg_4028
sub_6b5336(&outputString, 0x4000, arg1, &arg_4028)
sub_40d8d0(&outputString)
OutputDebugStringA(&outputString)
char* eax_5 = &outputString
int32_t arg_8 = 0xf
int32_t arg_4 = 0
ExceptionList.b = 0
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
void arg_11
sub_401270(&ExceptionList, eax_5 - &arg_11, &outputString)
int32_t arg_401c = 0
void* result = data_797dcc

if (result != 0)
    int32_t ecx_1 = *(result + 0x264)
    
    if (ecx_1 s>= 0)
        int32_t edx_1 = *(result + 0x254)
        result = (*(result + 0x258) - edx_1) s>> 2
        
        if (ecx_1 s< result)
            result = sub_62cb40(*(edx_1 + (ecx_1 << 2)), &ExceptionList)

fsbase->NtTib.ExceptionList = arg_4014
sub_6b4885(eax_2 ^ &ExceptionList)
return result
