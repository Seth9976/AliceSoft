// 函数: sub_402470
// 地址: 0x402470
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (sub_402680("IsExistArchive", arg1) != 0)
    return sub_402540

if (sub_402680("LoadArchive", arg1) != 0)
    return sub_402560

if (sub_402680("GetCountOfData", arg1) != 0)
    return sub_402590

if (sub_402680("GetTitleByIndex", arg1) != 0)
    return sub_4025b0

if (sub_402680("SearchTitle", arg1) != 0)
    return sub_4025f0

if (sub_402680("PrefixSearchTitle", arg1) != 0)
    return sub_4025f0

if (sub_402680("SuffixSearchTitle", arg1) != 0)
    return sub_4025f0

if (sub_402680("GetCountOfSearchData", arg1) != 0)
    return sub_402620

uint32_t eax_17 = zx.d(sub_402680("GetSearchTitleByIndex", arg1))
int32_t eax_18 = neg.d(eax_17)
return sbb.d(eax_18, eax_18, eax_17 != 0) & sub_402640
