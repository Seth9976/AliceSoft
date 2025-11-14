// 函数: sub_6103f0
// 地址: 0x6103f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HIMAGELIST himl = arg1[4]

if (himl != 0)
    ImageList_Destroy(himl)

arg1[4] = ImageList_Create(0x10, 0x10, 0x5, (arg1[1] - *arg1) s>> 2, 1)
int32_t i = 0

if (((arg1[1] - *arg1) & 0xfffffffc) s> 0)
    do
        HICON hicon = LoadIconA(arg2, zx.d(*(*arg1 + (i << 2))))
        ImageList_ReplaceIcon(arg1[4], 0xffffffff, hicon)
        i += 1
    while (i s< (arg1[1] - *arg1) s>> 2)

int32_t result
result.b = 1
return result
