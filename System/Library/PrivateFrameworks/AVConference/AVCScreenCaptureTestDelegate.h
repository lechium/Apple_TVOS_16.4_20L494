//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVCScreenCaptureTestDelegate : NSObject
{
}

- (void)serverDidDisconnect:(id)arg1;	// IMP=0x000000000016e968
- (void)screenCapture:(id)arg1 didStop:(_Bool)arg2 withError:(id)arg3;	// IMP=0x000000000016e962
- (void)screenCapture:(id)arg1 didStart:(_Bool)arg2 withError:(id)arg3;	// IMP=0x000000000016e95c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

