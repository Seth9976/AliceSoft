// 函数: sub_602770
// 地址: 0x602770
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HANDLE hFindFile = *arg1

if (hFindFile == 0xffffffff)
    goto label_602792

BOOL eax

if (FindClose(hFindFile) != 0)
    *arg1 = 0xffffffff
label_602792:
    int32_t* lpFileName
    
    if (arg2[5] u< 0x10)
        lpFileName = arg2
    else
        lpFileName = *arg2
    
    eax = FindFirstFileA(lpFileName, &arg1[1])
    *arg1 = eax
    
    if (eax != 0xffffffff)
        void* eax_1 = &arg1[0xc]
        void* esi_1 = eax_1 + 1
        char i
        
        do
            i = *eax_1
            eax_1 += 1
        while (i != 0)
        sub_401270(arg3, eax_1 - esi_1, &arg1[0xc])
        int32_t* eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
