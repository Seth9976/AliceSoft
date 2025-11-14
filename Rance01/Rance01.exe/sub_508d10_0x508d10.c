// 函数: sub_508d10
// 地址: 0x508d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* esi = *arg1
enum MESSAGEBOX_RESULT result

if (arg1[0xdb] == 0)
    result = (*(*arg1[1] + 0x38))()
    arg1[0xdb] = result

if (arg1[0xdb] != 0 || result != 0)
    (*(*arg1[0xdb] + 0x28))(*(esi + 0x138), *(esi + 0x13c), *(esi + 0x140), *(esi + 0x144), 
        fconvert.s(float.t(0)), fconvert.s(float.t(1)))
    
    if ((*(*arg1[0xdb] + 8))() != 0)
        return 1
    
    sub_51ddc0(0x75455c)

result.b = 0
return result
