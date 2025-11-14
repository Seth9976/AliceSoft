// 函数: sub_60cc90
// 地址: 0x60cc90
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

struct IMalloc ppMalloc
int32_t eax_1 = data_78c474 ^ &ppMalloc
void** ebx = arg4
void** edi = arg2
HRESULT result

if (SHGetMalloc(&ppMalloc) s< 0)
    result.b = 0
else
    if (edi[5] u>= 0x10)
        edi = *edi
    
    char var_110[0x10c]
    sub_6b5353(&var_110, 0x104, edi)
    
    if (ebx[5] u>= 0x10)
        ebx = *ebx
    
    char var_218[0x108]
    sub_6b5353(&var_218, 0x104, ebx)
    struct BROWSEINFOA lpbi
    lpbi.hwndOwner = arg1
    lpbi.pidlRoot = 0
    lpbi.lpfn = sub_60cb90
    lpbi.ulFlags = 1
    lpbi.pszDisplayName = &var_218
    lpbi.lpszTitle = &var_110
    
    if (arg5[5] u< 0x10)
        lpbi.lParam = arg5
    else
        lpbi.lParam = *arg5
    
    lpbi.iImage = 0
    struct ITEMIDLIST* pidl = SHBrowseForFolderA(&lpbi)
    
    if (pidl == 0)
        struct IMalloc ppMalloc_3 = ppMalloc
        (*(*ppMalloc_3 + 8))(ppMalloc_3)
        result.b = 0
    else
        void pszPath
        SHGetPathFromIDListA(pidl, &pszPath)
        void* eax_4 = &pszPath
        char i
        
        do
            i = *eax_4
            eax_4 += 1
        while (i != 0)
        void var_31f
        sub_401270(arg3, eax_4 - &var_31f, &pszPath)
        struct IMalloc ppMalloc_1 = ppMalloc
        (*(*ppMalloc_1 + 0x14))(ppMalloc_1, pidl)
        struct IMalloc ppMalloc_2 = ppMalloc
        (*(*ppMalloc_2 + 8))(ppMalloc_2)
        result.b = 1

sub_6b4885(eax_1 ^ &ppMalloc)
return result
