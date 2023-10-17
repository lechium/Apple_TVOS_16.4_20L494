//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSSet, VCDispatchTimer;
@protocol OS_dispatch_queue, VCLinkProbingHandlerDelegate;

__attribute__((visibility("hidden")))
@interface VCLinkProbingHandler : NSObject
{
    id <VCLinkProbingHandlerDelegate> _linkProbingHandlerDelegate;	// 8 = 0x8
    VCDispatchTimer *_queryProbingResultsTimer;	// 16 = 0x10
    VCDispatchTimer *_probingLockdownTimer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    NSMutableDictionary *_aggregatedProbingResults;	// 48 = 0x30
    NSArray *_linkPreferenceOrder;	// 56 = 0x38
    unsigned char _linkProbingCapabilityVersion;	// 64 = 0x40
    unsigned int _linkProbingInterval;	// 68 = 0x44
    unsigned int _linkProbingTimeout;	// 72 = 0x48
    unsigned int _linkProbingQueryResultsInterval;	// 76 = 0x4c
    unsigned int _minSentRequestCountThreshold;	// 80 = 0x50
    unsigned char _linkProbingState;	// 84 = 0x54
    double _lastLinkPreferenceUpdateNotificationTime;	// 88 = 0x58
    double _linkProbingConnectionLockdownPeriod;	// 96 = 0x60
    double _expMovMeanFactor;	// 104 = 0x68
    double _plrEnvelopeAttackFactor;	// 112 = 0x70
    double _plrEnvelopeDecayFactor;	// 120 = 0x78
    NSArray *_plrBuckets;	// 128 = 0x80
    CDStruct_7421bd8e _linkProbingResultConfig;	// 136 = 0x88
    NSMutableSet *_activelyProbingLinkIDs;	// 176 = 0xb0
    _Bool _isDuplicationEnabled;	// 184 = 0xb8
    _Bool _isProbingLockedOut;	// 185 = 0xb9
    double _probingStartTime;	// 192 = 0xc0
    double _probingLockoutStartTime;	// 200 = 0xc8
    double _linkProbingLockdownPeriod;	// 208 = 0xd0
    unsigned int _linkProbingDuplicationWaitTimeout;	// 216 = 0xd8
    unsigned int _consecutiveIdenticalQueryResultMax;	// 220 = 0xdc
    unsigned int _consecutiveIdenticalQueryResultCount;	// 224 = 0xe0
}

@property _Bool isDuplicationEnabled; // @synthesize isDuplicationEnabled=_isDuplicationEnabled;
@property(readonly) NSSet *activelyProbingLinkIDs; // @synthesize activelyProbingLinkIDs=_activelyProbingLinkIDs;
@property unsigned char linkProbingCapabilityVersion; // @synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion;
- (void)resetAggregatedProbingResults;	// IMP=0x000000000039e625
- (void)probingLockdownEnded;	// IMP=0x000000000039e504
- (void)updateLinkPreferenceOrder;	// IMP=0x000000000039e172
- (void)queryProbingResults;	// IMP=0x000000000039de8f
- (void)setLinkProbingResultConfig;	// IMP=0x000000000039de51
- (void)loadStorebagValues;	// IMP=0x000000000039d9bc
- (id)getProbingResultsForLinkID:(id)arg1;	// IMP=0x000000000039d967
- (void)removeProbingResultsForLinks:(id)arg1;	// IMP=0x000000000039d812
- (_Bool)isValidProbingResult:(id)arg1;	// IMP=0x000000000039d7a7
- (void)flushProbingResults:(id)arg1;	// IMP=0x000000000039d6eb
- (void)dispatchedUpdateProbingResults:(id)arg1;	// IMP=0x000000000039d15d
- (void)updateProbingResults:(id)arg1;	// IMP=0x000000000039d0ce
- (void)stopActiveProbingOnLinks:(id)arg1 resetStats:(_Bool)arg2;	// IMP=0x000000000039cd43
- (void)startActiveProbingOnLinks:(id)arg1;	// IMP=0x000000000039caa0
@property(readonly) _Bool isLinkProbingActive;
@property id <VCLinkProbingHandlerDelegate> linkProbingHandlerDelegate;
- (void)dealloc;	// IMP=0x000000000039c997
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000039c786

@end

