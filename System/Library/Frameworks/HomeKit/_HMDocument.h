//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _HMDocument : NSObject
{
    NSString *_stringValue;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002372a7
@property(readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000237274
- (id)description;	// IMP=0x0000000000237262
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023718e
- (unsigned long long)hash;	// IMP=0x000000000023714a
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000236f49
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000236e61
- (id)initWithString:(id)arg1;	// IMP=0x0000000000236dc3

@end

