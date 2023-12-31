//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncStreamID, NSDictionary;

@interface BMSyncPolicy : NSObject
{
    NSDictionary *_policyDictionary;	// 8 = 0x8
    BMSyncStreamID *_streamID;	// 16 = 0x10
}

+ (double)minimumTimeBetweenSyncsAttemptsForTransport:(unsigned long long)arg1;	// IMP=0x004000000001fa6d
+ (double)minimumTimeBetweenSyncsForTransport:(unsigned long long)arg1;	// IMP=0x001000000001fa41
+ (id)policyForStreamID:(id)arg1 forPlatform:(long long)arg2;	// IMP=0x001000000001f18a
+ (id)policyForStreamID:(id)arg1;	// IMP=0x001000000001f0f0
+ (id)syncableStreamIDsForPlatform:(long long)arg1;	// IMP=0x001000000001ed4f
+ (id)eventStringFromDescriptor:(id)arg1;	// IMP=0x001000000001ec76
+ (id)syncableStreamIDs;	// IMP=0x001000000001ec03
+ (id)loadAdditionalSyncPolicyDictionaries;	// IMP=0x001000000001e817
+ (id)bmUserDefaultsString:(id)arg1;	// IMP=0x001000000001e73d
- (void).cxx_destruct;	// IMP=0x002000000001fe74
@property(readonly, nonatomic) BMSyncStreamID *streamID; // @synthesize streamID=_streamID;
- (id)registeredEventClass;	// IMP=0x001000000001fe4d
- (_Bool)supportsSyncingWithPlatform:(long long)arg1 overTransport:(unsigned long long)arg2 inDirection:(unsigned long long)arg3;	// IMP=0x001000000001fd68
- (_Bool)supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2;	// IMP=0x001000000001fd53
- (_Bool)_supportsTransport:(unsigned long long)arg1 direction:(unsigned long long)arg2 outSupportedDirections:(unsigned long long *)arg3;	// IMP=0x001000000001fc82
- (unsigned long long)directionsSupportedForTransport:(unsigned long long)arg1;	// IMP=0x001000000001fa99
- (id)initWithStreamID:(id)arg1 policyDictionary:(id)arg2;	// IMP=0x001000000001e684

@end

