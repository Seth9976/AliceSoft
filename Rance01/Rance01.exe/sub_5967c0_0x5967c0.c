// 函数: sub_5967c0
// 地址: 0x5967c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_20
int32_t eax_1 = data_78c474 ^ &var_20
int128_t* eax_3 = (**arg1)()
char* ecx_1 = eax_3
int32_t var_c = 0xf
int32_t var_10 = 0
var_20 = 0
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
sub_401270(&var_20, ecx_1 - &ecx_1[1], eax_3)
char* lpFileName = var_20.d

if (var_c u< 0x10)
    lpFileName = &var_20

bool ebx = DeleteFileA(lpFileName) != 0

if (var_c u>= 0x10)
    int32_t __saved_edi_1 = var_20.d
    sub_6b4d5b()

BOOL result
result.b = ebx
sub_6b4885(eax_1 ^ &var_20)
return result
