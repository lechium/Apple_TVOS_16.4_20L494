//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeRunPolicy : CSPolicy
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000008aa14
- (void)_addSmartSiriVolumeEnabledConditions;	// IMP=0x001000000008a930
- (void)_subscribeEventMonitors;	// IMP=0x001000000008a8dd
- (id)init;	// IMP=0x001000000008a859

@end
