//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00600000000e201d
- (void).cxx_destruct;	// IMP=0x00000000000e2600
- (void)clearDevices;	// IMP=0x00000000000e2599
- (void)registerDevice:(id)arg1;	// IMP=0x00000000000e24ee
- (id)deviceWithIdentifier:(id)arg1;	// IMP=0x00000000000e2276
@property(readonly, nonatomic) NSArray *allDevices;
- (id)init;	// IMP=0x00000000000e2072

@end

