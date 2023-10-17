//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDUserActivity, NSMutableDictionary, NSMutableOrderedSet, NSString, UABestAppSuggestion, UABestAppSuggestionManager;
@protocol CSDUserActivityCommunicatorDelegate, OS_dispatch_queue;

@interface CSDUserActivityCommunicator : NSObject
{
    id <CSDUserActivityCommunicatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableOrderedSet *_activityQueue;	// 24 = 0x18
    CSDUserActivity *_currentlyBroadcastedActivity;	// 32 = 0x20
    UABestAppSuggestionManager *_bestAppSuggestionManager;	// 40 = 0x28
    UABestAppSuggestion *_mostRecentBestAppSuggestion;	// 48 = 0x30
    NSMutableDictionary *_listeningIdentifiersByActivityType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000012a9cd
@property(retain, nonatomic) NSMutableDictionary *listeningIdentifiersByActivityType; // @synthesize listeningIdentifiersByActivityType=_listeningIdentifiersByActivityType;
@property(retain, nonatomic) UABestAppSuggestion *mostRecentBestAppSuggestion; // @synthesize mostRecentBestAppSuggestion=_mostRecentBestAppSuggestion;
@property(retain, nonatomic) UABestAppSuggestionManager *bestAppSuggestionManager; // @synthesize bestAppSuggestionManager=_bestAppSuggestionManager;
@property(retain, nonatomic) CSDUserActivity *currentlyBroadcastedActivity; // @synthesize currentlyBroadcastedActivity=_currentlyBroadcastedActivity;
@property(retain, nonatomic) NSMutableOrderedSet *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDUserActivityCommunicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bestAppSuggestionChanged:(id)arg1;	// IMP=0x001000000012a310
- (id)_untrackListenedActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x0010000000129e72
- (void)_untrackListenedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000129c0e
- (void)_trackListenedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000129a35
- (void)_stopListeningForBestAppSuggestionIfAppropriate;	// IMP=0x0010000000129742
- (void)_stopListeningForActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x0010000000129428
- (void)_stopListeningForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x00100000001292b7
- (void)_listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000012907d
- (void)_stopBroadcastingActivity:(id)arg1;	// IMP=0x0010000000128f34
- (void)_broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x0010000000128cab
- (void)_updateCurrentlyBroadcastedActivity;	// IMP=0x0010000000128b17
- (void)stopListeningForActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x0010000000128a3f
- (void)stopListeningForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000128967
- (void)listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000012888f
- (void)stopBroadcastingActivity:(id)arg1;	// IMP=0x00100000001287c1
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x00100000001286d5
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2;	// IMP=0x00100000001286c1
- (void)broadcastActivity:(id)arg1;	// IMP=0x00100000001286a7
- (id)queuedActivitiesOfType:(unsigned int)arg1;	// IMP=0x0010000000128358
- (id)init;	// IMP=0x00100000001280e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

