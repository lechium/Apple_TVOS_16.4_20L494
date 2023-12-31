//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCharacterSet.h"

__attribute__((visibility("hidden")))
@interface _NSPlaceholderCharacterSet : NSCharacterSet
{
    NSCharacterSet *_original;	// 8 = 0x8
    NSCharacterSet *_invertedSet;	// 16 = 0x10
    struct {
        unsigned int _inverted:1;
        unsigned int _builtin:1;
        unsigned int _isCF:1;
        unsigned int _reserved:29;
    } _flags;	// 24 = 0x18
}

- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x00000000003e1fbb
- (id)replacementObjectForKeyedArchiver:(id)arg1;	// IMP=0x00000000003e1f77
- (void)dealloc;	// IMP=0x00000000003e1eef
- (_Bool)_tryRetain;	// IMP=0x00000000003e1e8e
- (_Bool)_isDeallocating;	// IMP=0x00000000003e1e2b
- (oneway void)release;	// IMP=0x00000000003e1dcc
- (unsigned long long)retainCount;	// IMP=0x00000000003e1d66
- (id)retain;	// IMP=0x00000000003e1d07
- (id)autorelease;	// IMP=0x00000000003e1ca8
- (id)invertedSet;	// IMP=0x00000000003e1c78
- (_Bool)isEmpty;	// IMP=0x00000000003e1c01
- (id)bitmapRepresentation;	// IMP=0x00000000003e1baf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003e1b1e
- (_Bool)hasMemberInPlane:(unsigned char)arg1;	// IMP=0x00000000003e1aca
- (_Bool)isSupersetOfSet:(id)arg1;	// IMP=0x00000000003e1a47
- (_Bool)longCharacterIsMember:(unsigned int)arg1;	// IMP=0x00000000003e1a14
- (_Bool)characterIsMember:(unsigned short)arg1;	// IMP=0x00000000003e1a02
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e1993
- (void)_expandInverted;	// IMP=0x00000000003e190e
- (struct __CFCharacterSet *)_expandedCFCharacterSet;	// IMP=0x00000000003e18ec
- (id)initWithSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000003e17cc

@end

