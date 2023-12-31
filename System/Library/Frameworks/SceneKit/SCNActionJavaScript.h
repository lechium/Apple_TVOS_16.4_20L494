//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SCNActionJavaScript : SCNAction
{
    NSString *_script;	// 8 = 0x8
}

+ (id)javaScriptActionWithDuration:(double)arg1 script:(id)arg2;	// IMP=0x006000000012a625
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000012a54e
- (id)parameters;	// IMP=0x000000000012a8c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012a86b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012a76a
- (id)reversedAction;	// IMP=0x000000000012a750
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012a6ce
- (_Bool)isCustom;	// IMP=0x000000000012a6c6
- (void)dealloc;	// IMP=0x000000000012a684
- (id)initWithString:(id)arg1;	// IMP=0x000000000012a556

@end

