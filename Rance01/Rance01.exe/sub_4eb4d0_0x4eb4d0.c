// 函数: sub_4eb4d0
// 地址: 0x4eb4d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*arg1 = &sealengine::CParticleEffectView::`vftable'{for `sealengine::CDrawInstance'}
arg1[1] = 1
CRITICAL_SECTION* lpCriticalSection = operator new(0x18)

if (lpCriticalSection == 0)
    lpCriticalSection = nullptr
else
    InitializeCriticalSection(lpCriticalSection)

arg1[2] = lpCriticalSection
arg1[3].b = 0
arg1[8] = 0
arg1[9] = 0xf
arg1[4].b = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0xb] = 0xffffffff
return arg1
