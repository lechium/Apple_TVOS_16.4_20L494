//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventHID : NSObject
{
    struct __IOHIDEvent *_extendedEvent;	// 8 = 0x8
    struct __IOHIDEvent *_event;	// 16 = 0x10
}

@property(readonly, nonatomic) struct __IOHIDEvent *event; // @synthesize event=_event;
- (float)floatValueForElement:(long long)arg1;	// IMP=0x000000000007bfaf
- (_Bool)hasValidValueForElement:(long long)arg1;	// IMP=0x000000000007bf0d
@property(readonly) unsigned long long timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007bef4
- (void)dealloc;	// IMP=0x000000000007beab
- (id)initWithHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007bcd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

