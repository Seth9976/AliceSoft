// 函数: sub_10001cc0
// 地址: 0x10001cc0
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

char* var_8 = arg3
int32_t var_4 = 0
void* esi

if (*arg4 != 0)
    char* esi_1 = arg4
    
    do
        arg1 = *esi_1
        esi_1 = &esi_1[1]
    while (arg1 != 0)
    
    esi = esi_1 - &esi_1[1]
else
    esi = nullptr

sub_10001380(arg3, sub_100016e0(arg2, arg4, esi))
return arg3
