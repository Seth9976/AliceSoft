// 函数: sub_5086c0
// 地址: 0x5086c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
float arg_4
int32_t* ebx = arg_4
void* eax = *ebx
ebx[2] = *(eax + 0x20)
ebx[3] = *(eax + 0x24)
ebx[4] = *(eax + 0x28)
__builtin_memcpy(&ebx[5], &ebx[0xbb], 0x40)
void* eax_2 = *ebx
arg_4 = fconvert.s(fconvert.t(*(eax_2 + 0x120)))
ebx[0x15] = fconvert.s(fconvert.t(*(eax_2 + 0x11c)))
long double x87_r7_2 = fconvert.t(arg_4)
arg_4 = 1.40129846e-45f
ebx[0x16] = fconvert.s(x87_r7_2)
__builtin_memcpy(&ebx[0x17], &ebx[0xcb], 0x40)
ebx[0x2e] = ebx[0x156]
ebx[0x2f] = ebx[0x157]
ebx[0x27] = *(*ebx + 0x19c)
void* eax_4 = *ebx
int32_t edx_2 = *(eax_4 + 0x140)
ebx[0x34] = *(eax_4 + 0x144)
ebx[0x33] = edx_2
void* esi_2 = *ebx
sub_42e070(esi_2 + 0x14c, &var_4, &arg_4)
int32_t* eax_6 = var_4
int32_t eax_7

if (eax_6 != *(esi_2 + 0x150))
    eax_7 = eax_6[4]
else
    eax_7 = 0

ebx[0x30] = eax_7
ebx[0x31] = *(*ebx + 0x178)
ebx[0x32] = *(*ebx + 0x174)
void* eax_9 = *ebx
int32_t eax_10

if (*(eax_9 + 0x170) == 0)
    eax_10 = 0
else
    eax_10 = *(eax_9 + 0xb8)

int32_t* esi_3 = ebx[0x35]
ebx[0x2d] = eax_10
void* edi_2 = *(*ebx + 0x1a0)

if (esi_3 != 0)
    sub_4cb6a0(esi_3)

ebx[0x35] = edi_2

if (edi_2 != 0)
    EnterCriticalSection(*(edi_2 + 8))
    *(edi_2 + 4) += 1
    LeaveCriticalSection(*(edi_2 + 8))

ebx[0x36] = *(*ebx + 0x184)
ebx[0x37] = *(*ebx + 0x1d4)
int32_t result = *ebx + 0x188
ebx[0x38] = result
return result
