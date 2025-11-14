// 函数: sub_504d40
// 地址: 0x504d40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_c = ecx
int32_t* ecx_1 = arg1[0x7e]
int32_t eax

if (ecx_1 != 0)
    eax = (**ecx_1)()
else
    eax = 0

int32_t edx_2 = arg1[0x7f]

if (edx_2 != 0)
    arg1[0x80] = eax - edx_2

if (edx_2 == 0 || eax == edx_2)
    arg1[0x80] = 1

arg1[0x7f] = eax
int32_t eax_2 = arg1[0x80]
data_78f507 = 0
char eax_3
int80_t result
result, eax_3 = sub_4c8bc0(arg1, eax_2)

if (eax_3 != 0)
    sub_51df10()
    enum MESSAGEBOX_RESULT eax_5
    eax_5.b = 1
    data_78f507 = 1
    return result

sub_51ddc0(0x7547d8)
sub_51df10()
enum MESSAGEBOX_RESULT eax_4
eax_4.b = 0
data_78f507 = 1
return result
