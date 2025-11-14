// 函数: sub_6c1cb7
// 地址: 0x6c1cb7
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

data_796eb4 += 1
int32_t eax = sub_6b8223(0x1000)
arg1[2] = eax

if (eax == 0)
    arg1[3] |= 4
    arg1[2] = &arg1[5]
    arg1[6] = 2
else
    arg1[3] |= 8
    arg1[6] = 0x1000

int32_t result = arg1[2]
arg1[1] = 0
*arg1 = result
return result
