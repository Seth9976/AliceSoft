// 函数: sub_581620
// 地址: 0x581620
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t result = (*(*arg1 + 0x10))()
int32_t* ecx_1 = arg1[0xd]

if (ecx_1 != 0)
    result = (**ecx_1)(1)
    arg1[0xd] = 0

int32_t* ecx_2 = arg1[9]

if (ecx_2 != 0)
    result = (*(*ecx_2 + 4))()
    arg1[9] = 0

int32_t* ecx_3 = arg1[8]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 4))()
    arg1[8] = 0

int32_t* ecx_4 = arg1[3]

if (ecx_4 != 0)
    result = (*(*ecx_4 + 4))()
    arg1[3] = 0

int32_t* ecx_5 = arg1[2]

if (ecx_5 != 0)
    result = (*(*ecx_5 + 4))()
    arg1[2] = 0

arg1[0xb] = 0
arg1[0xa] = 0
return result
