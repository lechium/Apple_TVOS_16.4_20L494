//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCMotion, NSString;

__attribute__((visibility("hidden")))
@interface _GCAssertingProfile : NSObject
{
}

- (void)setButton:(id)arg1 pressed:(_Bool)arg2;	// IMP=0x000000000005ad55
- (void)setButton:(id)arg1 value:(double)arg2;	// IMP=0x000000000005ad08
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;	// IMP=0x000000000005acbb
- (void)appDidBecomeActive;	// IMP=0x000000000005ac77
- (void)appWillResignActive;	// IMP=0x000000000005ac33
- (unsigned int)sampleRate;	// IMP=0x000000000005abef
- (id)productCategory;	// IMP=0x000000000005abab
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000005ab67
- (CDUnknownBlockType)valueChangedHandler;	// IMP=0x000000000005ab23
- (void)setController:(id)arg1;	// IMP=0x000000000005aad6
- (void)setPlayerIndex:(long long)arg1;	// IMP=0x000000000005aa92
- (id)initWithController:(id)arg1;	// IMP=0x000000000005aa45
@property(retain) GCMotion *_motion;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
