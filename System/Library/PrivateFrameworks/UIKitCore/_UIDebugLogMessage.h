//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugLogMessage : NSObject
{
    NSString *_string;	// 8 = 0x8
    NSAttributedString *_attributedString;	// 16 = 0x10
}

+ (id)messageWithStyle:(unsigned long long)arg1 string:(id)arg2;	// IMP=0x0060000000c30e99
+ (id)messageWithPrefix:(id)arg1 color:(id)arg2 string:(id)arg3;	// IMP=0x0060000000c30b26
+ (id)messageWithFormat:(id)arg1;	// IMP=0x0060000000c3098b
+ (id)messageWithString:(id)arg1;	// IMP=0x0060000000c3088e
+ (id)messageWithNewline;	// IMP=0x0060000000c30863
- (void).cxx_destruct;	// IMP=0x0000000000c3132e
- (id)attributedDescription;	// IMP=0x0000000000c3131c
- (id)description;	// IMP=0x0000000000c3130a
- (id)_attributedStringRepresentation;	// IMP=0x0000000000c312c2
- (id)_stringRepresentation;	// IMP=0x0000000000c31288
- (_Bool)_isTransparent;	// IMP=0x0000000000c31280
- (_Bool)_isNode;	// IMP=0x0000000000c31278
- (id)initWithString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000c30756

@end

