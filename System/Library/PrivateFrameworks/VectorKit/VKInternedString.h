//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x00600000004cb94f
+ (void)initialize;	// IMP=0x00600000004cb8b9
- (void).cxx_destruct;	// IMP=0x00000000004cbc11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cbc06
- (unsigned long long)hash;	// IMP=0x00000000004cbbe9
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000004cbbcc
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000004cbbaf
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000004cbb92
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000004cbb75
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000004cbb58
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004cbb3b
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004cbb1e
- (unsigned long long)length;	// IMP=0x00000000004cbb01
- (void)dealloc;	// IMP=0x00000000004cba5c
- (id)initWithString:(id)arg1;	// IMP=0x00000000004cb92a

@end

