//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFAbstractString : NSString
{
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x008000000007934d
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0080000000079326
+ (id)alloc;	// IMP=0x008000000007931a
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x0080000000079312
- (id)description;	// IMP=0x000000000007943e
- (unsigned long long)smallestEncoding;	// IMP=0x0000000000079433
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000079428
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x00000000000793d6
- (const unsigned short *)_fastCharacterContents;	// IMP=0x00000000000793ce
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x00000000000793bc
- (const char *)cString;	// IMP=0x00000000000793aa
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007935e
- (Class)classForCoder;	// IMP=0x000000000007933c
- (void)dealloc;	// IMP=0x0000000000079332

@end

