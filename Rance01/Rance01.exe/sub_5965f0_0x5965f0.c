// 函数: sub_5965f0
// 地址: 0x5965f0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("ExistFile", arg1) != 0)
    return sub_596700

if (sub_402680("DeleteFile", arg1) != 0)
    return sub_5967c0

if (sub_402680("CopyFile", arg1) != 0)
    return sub_596850

if (sub_402680("GetFileCreationTime", arg1) != 0)
    return sub_596980

if (sub_402680("GetFileLastAccessTime", arg1) != 0)
    return sub_596a50

if (sub_402680("GetFileLastWriteTime", arg1) != 0)
    return sub_596b20

if (sub_402680("GetFileSize", arg1) != 0)
    return sub_596bf0

if (sub_402680("ExistFolder", arg1) != 0)
    return sub_596c80

if (sub_402680("CreateFolder", arg1) != 0)
    return sub_596d40

if (sub_402680("DeleteFolder", arg1) != 0)
    return sub_596e30

if (sub_402680("GetFileList", arg1) != 0)
    return sub_596ee0

uint32_t eax_23 = zx.d(sub_402680("GetFolderList", arg1))
int32_t eax_24 = neg.d(eax_23)
return sbb.d(eax_24, eax_24, eax_23 != 0) & sub_597080
