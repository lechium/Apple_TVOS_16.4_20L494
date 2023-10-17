//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

@protocol CBDisplayStateClientDelegate <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (void)didCompleteSwitchToFlipbookState:(long long)arg1 withError:(NSError *)arg2;
- (void)didCompleteTransitionToDisplayMode:(long long)arg1 withError:(NSError *)arg2;
@end
