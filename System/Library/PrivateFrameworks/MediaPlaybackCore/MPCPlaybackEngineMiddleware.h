//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineMiddleware : NSObject
{
    NSArray *_invalidationObservers;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000223ef5
@property(retain, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;	// IMP=0x0000000000223d70
- (id)operationsForPlayerRequest:(id)arg1;	// IMP=0x0000000000223cb4
- (id)operationsForRequest:(id)arg1;	// IMP=0x0000000000223c47
- (id)videoOutput:(id)arg1 chain:(id)arg2;	// IMP=0x00000000002240b0
- (id)playerVideoView:(id)arg1 chain:(id)arg2;	// IMP=0x0000000000224017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

