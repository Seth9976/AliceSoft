// 函数: sub_62c380
// 地址: 0x62c380
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_7215c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_54
int32_t eax_2 = data_78c474 ^ &var_54
int32_t __saved_edi
int32_t eax_4 = data_78c474 ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dplogviewer::CTextChildWnd::dplogviewer::CLogWnd::VTable** var_4c = arg1
sub_6306f0(arg1)
int32_t var_4 = 0
*arg1 = &dplogviewer::CLogWnd::`vftable'{for `dplogviewer::CTextChildWnd'}
arg1[0x53] = 0
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x5d] = 0xf
arg1[0x5c] = 0
arg1[0x58].b = 0
arg1[0x64] = 0xf
arg1[0x63] = 0
arg1[0x5f].b = 0
arg1[0x6c] = 0xf
arg1[0x6b] = 0
arg1[0x67].b = 0
var_4.b = 4
void* eax_5 = data_797d60
__builtin_memset(&arg1[0x6e], 0, 0x11)
arg1[0x57] = 0
arg1[0x66].b = 0
void** eax_6 = *(eax_5 + 4)
void** esi = eax_6[1]
void** edi = eax_6

while (*(esi + 0x21) == 0)
    if (sub_40f4a0(&esi[3], 0x733c60) == 0)
        edi = esi
        esi = *esi
    else
        esi = esi[2]

void** esi_1 = *(data_797d60 + 4)
var_54 = edi
char eax_8

if (edi != esi_1)
    eax_8 = sub_40f4a0(0x733c60, &edi[3])

void*** eax_9

if (edi == esi_1 || eax_8 != 0)
    void** var_50 = esi_1
    eax_9 = &var_50
else
    eax_9 = &var_54

void** eax_10 = *eax_9

if (eax_10 != esi_1)
    int32_t* ecx_3 = eax_10[7]
    
    if (ecx_3 != 0)
        int32_t* eax_12 = (**ecx_3)(0x733c70)
        
        if (eax_12 != 0)
            int128_t* esi_2 = (*(*eax_12 + 8))(eax_4)
            char* ecx_5 = esi_2
            int32_t var_34_1 = 0xf
            int32_t var_38_1 = 0
            char var_48 = 0
            int128_t* eax_14
            
            do
                eax_14.b = *ecx_5
                ecx_5 = &ecx_5[1]
            while (eax_14.b != 0)
            char* var_6c_2 = &var_48
            var_4.b = 5
            char var_2c
            sub_402c60(&var_2c, "LOG", sub_401270(&var_48, ecx_5 - &ecx_5[1], esi_2))
            var_4.b = 6
            sub_401ef0(&arg1[0x5f], &var_2c)
            int32_t var_18
            
            if (var_18 u>= 0x10)
                int32_t var_6c_3 = var_2c.d
                sub_6b4d5b()
            
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (var_34_1 u>= 0x10)
                int32_t var_6c_4 = var_48.d
                sub_6b4d5b()

fsbase->NtTib.ExceptionList = ExceptionList
sub_6b4885(eax_2 ^ &var_54)
return arg1
