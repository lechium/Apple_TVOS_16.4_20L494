//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScreen;

__attribute__((visibility("hidden")))
@interface _UIScreenBoundingPathUtilities : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
}

+ (id)boundingPathUtilitiesForScreen:(id)arg1;	// IMP=0x00600000007d54d7
- (void).cxx_destruct;	// IMP=0x00000000007d56b2
@property(nonatomic, getter=_screen) __weak UIScreen *screen; // @synthesize screen=_screen;
- (id)boundingPathForWindow:(id)arg1;	// IMP=0x00000000007d55c4
- (id)initWithScreen:(id)arg1;	// IMP=0x00000000007d5560

@end

