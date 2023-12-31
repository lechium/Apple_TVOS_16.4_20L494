//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol MPCQueueControllerSessionTypesInvalidatable;

@protocol MPCQueueControllerBehaviorTransportableExtension <NSObject>
@property(readonly, nonatomic) __weak id <MPCQueueControllerSessionTypesInvalidatable> sessionTypesInvalidatable;
- (_Bool)isSupportedSessionType:(NSString *)arg1 reason:(id *)arg2;
- (NSArray *)allKnownSessionTypes;
@end

