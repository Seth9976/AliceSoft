// 函数: sub_5471c0
// 地址: 0x5471c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* var_4 = arg1
int32_t esi = arg2
int32_t eax = arg1[1]
int32_t ebx

if (eax != 0)
    ebx = *arg1
else
    ebx = 0

int32_t ebp

if (arg1[0x10].b != 0)
    ebp = eax u>> 2
else
    ebp = 0

if (esi s< 0)
    esi = 0

if (esi s< arg4)
    while (esi s< ebp)
        if (sub_5481e0(arg3, arg6, arg5, *(ebx + (esi << 2)), &var_4).b == 0)
            eax.b = 0
            return eax
        
        if (var_4 != 0)
            *arg3[0xac] = esi
            arg3[0xac] += 4
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
        
        esi += 1
        
        if (esi s>= arg4)
            break

*arg3[0xac] = 0xffffffff
arg3[0xac] += 4
eax.b = 1
return eax
