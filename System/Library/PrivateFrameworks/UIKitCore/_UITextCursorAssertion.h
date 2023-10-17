//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITextCursorAssertionController;

__attribute__((visibility("hidden")))
@interface _UITextCursorAssertion : NSObject
{
    NSString *_reason;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    UITextCursorAssertionController *_controller;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000e4ac4a
@property(nonatomic) __weak UITextCursorAssertionController *controller; // @synthesize controller=_controller;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x0000000000e4ab41
- (void)dealloc;	// IMP=0x0000000000e4ab03
- (id)_initWithReason:(id)arg1 options:(unsigned long long)arg2 controller:(id)arg3;	// IMP=0x0000000000e4aa5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

