//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCNintendoJoyConProfile : NSObject
{
}

+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035945
+ (void)physicalDevice:(id)arg1 setIndicatedPlayerIndex:(long long)arg2;	// IMP=0x001000000003566c
+ (long long)physicalDeviceGetIndicatedPlayerIndex:(id)arg1;	// IMP=0x0010000000035406
+ (id)deviceManager;	// IMP=0x00100000000353b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
