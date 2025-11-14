// 函数: sub_545150
// 地址: 0x545150
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebx = arg1
int32_t* eax = ebx[0xa3]
int32_t ecx = *eax
ebx[0xa3] = &eax[1]
int32_t* eax_2 = ebx[0x4b3]
int32_t eax_3

if (eax_2[1] != 0)
    eax_3 = *eax_2
else
    eax_3 = 0

int32_t eax_4 = *(eax_3 + (ecx << 2))

if (eax_4 u< (ebx[0x7a] - ebx[0x79]) s>> 2)
    arg1 = *(ebx[0x79] + (eax_4 << 2))
else
    arg1 = nullptr

int32_t ebp = sub_5527e0(&ebx[0x77])
int32_t* eax_7 = sub_552440(&ebx[0x7f])
char eax_8

if (eax_7 != 0)
    *(ebx[0x79] + (ebp << 2)) = eax_7
    eax_8 = sub_5506c0(eax_7, arg1)

if (eax_7 == 0 || eax_8 == 0)
    ebp = 0xffffffff
else
    *(eax_7 + 0x2d) = 1

int32_t* result = ebx[0xac]
*result = ebp
ebx[0xac] += 4
return result
