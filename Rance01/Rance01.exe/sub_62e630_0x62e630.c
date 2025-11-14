// 函数: sub_62e630
// 地址: 0x62e630
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_726eeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** eax_3 = operator new(0x1cc)
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** var_1c = eax_3
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** ebx = nullptr
int32_t var_c_1 = 0

if (eax_3 != 0)
    ebx = sub_62c380(eax_3)

char* eax_5 = arg2
int32_t var_c_2 = 0xffffffff
var_1c = ebx
char i

do
    i = *eax_5
    eax_5 = &eax_5[1]
while (i != 0)
sub_401270(&ebx[0x58], eax_5 - &eax_5[1], arg2)
void* eax_7 = arg1

if (*(eax_7 + 0xc) != 0)
    if (sub_630880(ebx, *(eax_7 + 0xa4), *(eax_7 + 0x9c)) == 0)
        if (ebx != 0)
            sub_62c5a0(ebx)
            struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** var_30_5 = ebx
            sub_6b4d5b()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0xffffffff
    
    sub_631320(ebx)
    sub_6311e0(ebx, 0, 0)
    sub_630310(arg2, arg1 + 0xa0, ebx[1])
    eax_7 = arg1

sub_61b5a0(&var_1c, eax_7 + 0x254)
fsbase->NtTib.ExceptionList = ExceptionList
return ((*(eax_7 + 0x258) - *(eax_7 + 0x254)) s>> 2) - 1
