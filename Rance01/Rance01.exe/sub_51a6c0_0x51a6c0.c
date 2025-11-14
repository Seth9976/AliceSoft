// 函数: sub_51a6c0
// 地址: 0x51a6c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = sub_4b40e0(&arg1[0xf])
int32_t* ecx = *arg1

if (ecx != 0)
    result = (*(*ecx + 4))()
    *arg1 = 0

int32_t* ecx_1 = arg1[0x28]
arg1[8].b = 0

if (ecx_1 != 0)
    result = (*(*ecx_1 + 4))()
    arg1[0x28] = 0

int32_t* ecx_2 = arg1[9]

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    arg1[9] = 0

arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc].b = 0
arg1[0xd] = 0
arg1[0xe].b = 0
return result
