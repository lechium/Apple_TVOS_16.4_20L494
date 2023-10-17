//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaKeyIndex : NSObject
{
    unsigned char _MKI[16];	// 8 = 0x8
    unsigned int _activeSize;	// 24 = 0x18
    _Bool _isMapped;	// 28 = 0x1c
    unsigned char _mapKey;	// 29 = 0x1d
}

+ (id)makeInvalidKey;	// IMP=0x0010000000069b08
+ (id)newMKIWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;	// IMP=0x001000000006951c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069d79
- (_Bool)isStartingWithPrefix:(id)arg1;	// IMP=0x0000000000069c96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069ba4
- (unsigned long long)hash;	// IMP=0x0000000000069b3d
- (_Bool)isValid;	// IMP=0x0000000000069ab2
- (_Bool)setMapping:(unsigned char)arg1;	// IMP=0x00000000000698e7
- (unsigned int)mappedKeyBytes:(char *)arg1 size:(unsigned int)arg2;	// IMP=0x000000000006970d
- (unsigned int)mappedKeySize;	// IMP=0x00000000000696ca
- (void)fullKeyBytes:(unsigned char [16])arg1;	// IMP=0x00000000000696a4
- (id)description;	// IMP=0x00000000000695c4
- (const char *)MKI;	// IMP=0x00000000000695ba
- (void)setMapKey:(unsigned char)arg1;	// IMP=0x0000000000069594
- (void)setActiveSize:(unsigned int)arg1;	// IMP=0x0000000000069572
@property(readonly) unsigned int activeSize;
- (void)dealloc;	// IMP=0x00000000000694ca
- (id)initWithNSUUID:(id)arg1;	// IMP=0x0000000000069452
- (id)initWithUUID:(unsigned char [16])arg1;	// IMP=0x000000000006943b
- (id)initWithBytes:(char *)arg1 bufferSize:(unsigned int)arg2;	// IMP=0x00000000000692d6

@end
