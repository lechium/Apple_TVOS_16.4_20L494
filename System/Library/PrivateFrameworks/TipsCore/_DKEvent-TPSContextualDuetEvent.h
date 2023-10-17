//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKEvent.h>

@class NSArray, NSString, TPSAnalyticsEvent;

@interface _DKEvent (TPSContextualDuetEvent)
+ (id)_tps_resolvedContextualDuetEventMetadataKeyPathComponents:(id)arg1 forStream:(id)arg2;	// IMP=0x0020000000059f9e
+ (id)tps_resolvedContextualDuetEventKeyPath:(id)arg1 forStream:(id)arg2;	// IMP=0x0020000000059dfd
+ (id)_eventWithTipIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 flags:(unsigned long long)arg6 state:(long long)arg7 reason:(long long)arg8 event:(id)arg9 date:(id)arg10;	// IMP=0x002000000005fb96
@property(readonly, nonatomic) TPSAnalyticsEvent *tps_analyticsEvent;
@property(readonly, nonatomic) unsigned long long tps_flags;
@property(readonly, nonatomic) NSString *tps_context;
@property(readonly, nonatomic) NSArray *tps_eligibleContext;
@property(readonly, nonatomic) long long tps_ineligibleReason;
@property(readonly, nonatomic) long long tps_state;
@property(readonly, nonatomic) unsigned long long tps_displayType;
@property(readonly, nonatomic) NSString *tps_bundleIdentifier;
@property(readonly, nonatomic) NSString *tps_contentIdentifier;
@end

