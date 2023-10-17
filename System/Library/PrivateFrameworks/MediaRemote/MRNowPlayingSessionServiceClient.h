//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MRNowPlayingSessionServiceClient : NSObject
{
    NSMutableDictionary *_playerPathsByOrigin;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000282ce4
- (id)_generatePlayerID;	// IMP=0x0000000000282c21
- (id)_generatePlayerPathForOrigin:(id)arg1;	// IMP=0x0000000000282b3e
- (id)_existingPlayerPathForOrigin:(id)arg1;	// IMP=0x0000000000282ab2
- (void)_handleCreatePlayerForOrigin:(id)arg1 deviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000282626
- (void)_handleDestroyPlayersForOrigin:(id)arg1;	// IMP=0x0000000000282403
- (void)mediaServicesResetNotification:(id)arg1;	// IMP=0x000000000028221a
- (id)initWithService:(id)arg1;	// IMP=0x0000000000281d32

@end

