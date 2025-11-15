// 函数: ___FrameUnwindFilter
// 地址: 0x10003d6b
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

int32_t* eax_1 = *arg1

if (*eax_1 == 0xe0434352 || *eax_1 == 0xe0434f4d)
    if (*(sub_10004538() + 0x18) s> 0)
        void* eax_4 = sub_10004538()
        *(eax_4 + 0x18) -= 1
else if (*eax_1 == 0xe06d7363)
    *(sub_10004538() + 0x18) = 0
    noreturn sub_1000624c() __tailcall

return 0
