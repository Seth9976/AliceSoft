// 函数: sub_100086b9
// 地址: 0x100086b9
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

__flushall()
__fcloseall()

for (int32_t* i = nullptr; i != 0xc; i = &i[1])
    ___acrt_stdio_free_buffer_nolock(*(i + data_10017254))
    DeleteCriticalSection(*(i + data_10017254) + 0x20)

int32_t result = __free_base(data_10017254)
data_10017254 = 0
return result
